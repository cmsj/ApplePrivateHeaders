/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSSiteMetadataResponse.h>

@class NSImage;

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse {

	NSImage* _thumbnail;

}

@property (nonatomic,readonly) NSImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)responseWithURL:(id)arg1 thumbnail:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(NSImage *)thumbnail;
-(id)initWithURL:(id)arg1 thumbnail:(id)arg2 ;
@end

