//
//  KIYoutubeVideoInfo.h
//  utube
//
//  Created by SmartWalle on 16/8/7.
//  Copyright © 2016年 SmartWalle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+KIYoutubeParam.h"

@interface KIYoutubeVideoInfo : NSObject
@property (nonatomic, copy) NSString *video_id;
@property (nonatomic, copy) NSString *eventid;

@property (nonatomic, copy) NSString *iurl; // 封面图片
@property (nonatomic, copy) NSString *iurlmq;
@property (nonatomic, copy) NSString *iurlhq;
@property (nonatomic, copy) NSString *thumbnail_url; // 封面缩略图
@property (nonatomic, copy) NSString *length_seconds; // 视频时间长度

@property (nonatomic, copy) NSString *keywords;  // 关键字
@property (nonatomic, copy) NSString *hl;        // 预设语言

@property (nonatomic, copy) NSString *author;  // 作者
@property (nonatomic, copy) NSString *title;   // 标题

@property (nonatomic, copy) NSString *view_count; // 浏览次数

@property (nonatomic, strong) NSArray *videoStreamInfoList; // 包含视频的下载地址

@property (nonatomic, copy) NSString *caption_audio_tracks;
@property (nonatomic, copy) NSString *csi_page_type;
@property (nonatomic, copy) NSString *vm;
@property (nonatomic, copy) NSString *avg_rating;
@property (nonatomic, copy) NSString *fexp;
@property (nonatomic, copy) NSString *enablecsi;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *default_audio_track_index;
@property (nonatomic, copy) NSString *cc_fonts_url;
@property (nonatomic, copy) NSString *cc_module;
@property (nonatomic, copy) NSString *caption_tracks;
@property (nonatomic, copy) NSString *oid;
@property (nonatomic, copy) NSString *pltype;
@property (nonatomic, copy) NSString *has_cc;
@property (nonatomic, copy) NSString *caption_translation_languages;
@property (nonatomic, copy) NSString *ptk;
@property (nonatomic, copy) NSString *timestamp;
@property (nonatomic, copy) NSString *fmt_list;
@property (nonatomic, copy) NSString *cver;
@property (nonatomic, copy) NSString *plid;
@property (nonatomic, copy) NSString *ptchn;
@property (nonatomic, copy) NSString *use_cipher_signature;
@property (nonatomic, copy) NSString *dashmpd;
@property (nonatomic, copy) NSString *storyboard_spec;
@property (nonatomic, copy) NSString *ldpj;
@property (nonatomic, copy) NSString *adaptive_fmts;
@property (nonatomic, copy) NSString *account_playback_token;
@property (nonatomic, copy) NSString *video_verticals;
@property (nonatomic, copy) NSString *loudness;
@property (nonatomic, copy) NSString *no_get_video_log;
@property (nonatomic, copy) NSString *allowed_ads;
@property (nonatomic, copy) NSString *tmi;
@property (nonatomic, copy) NSString *ucid;
@property (nonatomic, copy) NSString *of;
@property (nonatomic, copy) NSString *allow_embed;
@property (nonatomic, copy) NSString *cc_asr;
@property (nonatomic, copy) NSString *ypc_ad_indicator;
@property (nonatomic, copy) NSString *idpj;
@property (nonatomic, copy) NSString *cc3_module;
@property (nonatomic, copy) NSString *allow_ratings;
@property (nonatomic, copy) NSString *is_listed;
@property (nonatomic, copy) NSString *cos;
@property (nonatomic, copy) NSString *ttsurl;
@property (nonatomic, copy) NSString *c;
@property (nonatomic, copy) NSString *watermark;
@property (nonatomic, copy) NSString *cl;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString *probe_url;
@property (nonatomic, copy) NSString *muted;
@property (nonatomic, copy) NSString *cc_font;

+ (KIYoutubeVideoInfo *)videoInfoWithQueryString:(NSString *)query;

@end

@interface KIYoutubeVideoStreamInfo : NSObject
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *quality;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *itag;
@property (nonatomic, copy) NSString *fallback_host;
@end
