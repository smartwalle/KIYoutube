//
//  NSString+KIYoutubeParam.m
//  utube
//
//  Created by SmartWalle on 16/8/7.
//  Copyright © 2016年 SmartWalle. All rights reserved.
//

#import "NSString+KIYoutubeParam.h"

@implementation NSString (KIYoutubeParam)

- (NSDictionary *)httpParam {
    NSMutableDictionary *param = [[NSMutableDictionary alloc] init];
    NSArray *params = [self componentsSeparatedByString:@"&"];
    for (NSString *paramString in params) {
        
        NSArray *keyValue = [paramString componentsSeparatedByString:@"="];
        
        if (keyValue.count > 1) {
            NSString *key = [keyValue objectAtIndex:0];
            NSString *value = [keyValue objectAtIndex:1];
            
            if (key != nil) {
                [param setObject:value forKey:key];
            }
        }
    }
    return param;
}

- (NSString *)URLEncodedString {
#if __MAC_OS_X_VERSION_MIN_REQUIRED < __MAC_10_9 || __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_7_0
    NSString *result = (NSString *)CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault,
                                                                                             (CFStringRef)self,
                                                                                             NULL,
                                                                                             CFSTR(""),
                                                                                             kCFStringEncodingUTF8));
    return result;
#else
    return [self stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLHostAllowedCharacterSet]];
#endif
}

- (NSString *)URLDecodedString {
#if __MAC_OS_X_VERSION_MIN_REQUIRED < __MAC_10_11 || __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_7_0
    NSString *result = (NSString *)CFBridgingRelease(CFURLCreateStringByReplacingPercentEscapesUsingEncoding(kCFAllocatorDefault,
                                                                                                             (CFStringRef)self,
                                                                                                             CFSTR(""),
                                                                                                             kCFStringEncodingUTF8));
    return result;
#else
    return [self stringByRemovingPercentEncoding];
#endif
}

@end
