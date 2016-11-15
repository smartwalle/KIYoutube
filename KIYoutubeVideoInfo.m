//
//  KIYoutubeVideoInfo.m
//  utube
//
//  Created by SmartWalle on 16/8/7.
//  Copyright © 2016年 SmartWalle. All rights reserved.
//

#import "KIYoutubeVideoInfo.h"

@implementation KIYoutubeVideoInfo

+ (KIYoutubeVideoInfo *)videoInfoWithQueryString:(NSString *)query {
    if (query == nil || [query stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]].length == 0) {
        return nil;
    }
    
    NSDictionary *param = [query httpParam];
    if (param.count == 0) {
        return nil;
    }
    
    KIYoutubeVideoInfo *metaData = [[KIYoutubeVideoInfo alloc] init];
    [metaData setValuesForKeysWithDictionary:param];
    return metaData;
}

- (void)setValue:(id)value forKey:(NSString *)key {
    value = [value URLDecodedString];
    
    if ([key isEqualToString:@"url_encoded_fmt_stream_map"]) {
        NSArray *urlEncodedFmtStreamMapList = [value componentsSeparatedByString:@","];
        NSMutableArray *videoStreamInfoList = [[NSMutableArray alloc] init];
        
        for (NSString *streamMapStr in urlEncodedFmtStreamMapList) {
            NSDictionary *param = [streamMapStr httpParam];
            if (param.count == 0) {
                continue;
            }
            
            KIYoutubeVideoStreamInfo *videoInfo = [[KIYoutubeVideoStreamInfo alloc] init];
            [videoInfo setValuesForKeysWithDictionary:param];
            
            [videoStreamInfoList addObject:videoInfo];
        }
        self.videoStreamInfoList = videoStreamInfoList;
    } else {
        [super setValue:value forKey:key];
    }
}

- (void)setValue:(id)value forUndefinedKey:(NSString *)key {
    
}

- (void)setNilValueForKey:(NSString *)key {
    
}

@end

@implementation KIYoutubeVideoStreamInfo

- (NSString *)description {
    return [NSString stringWithFormat:@"%@ -- %@", self.quality, self.type];
}

- (void)setValue:(id)value forKey:(NSString *)key {
    value = [value URLDecodedString];
    [super setValue:value forKey:key];
}

- (void)setValue:(id)value forUndefinedKey:(NSString *)key {
    
}

- (void)setNilValueForKey:(NSString *)key {
    
}

@end