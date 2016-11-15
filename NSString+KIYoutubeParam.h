//
//  NSString+KIYoutubeParam.h
//  utube
//
//  Created by SmartWalle on 16/8/7.
//  Copyright © 2016年 SmartWalle. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (KIYoutubeParam)

- (NSDictionary *)httpParam;

- (NSString *)URLEncodedString;

- (NSString *)URLDecodedString;

@end
