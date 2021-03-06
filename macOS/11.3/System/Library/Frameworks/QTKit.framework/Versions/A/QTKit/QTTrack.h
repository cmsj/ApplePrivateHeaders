/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface QTTrack : NSObject
+(id)trackWithTrackID:(long long)arg1 error:(id*)arg2 andMovie:(id)arg3 ;
+(id)allReadableAttributeKeysForVisibility:(unsigned long long)arg1 ;
+(id)attributeKeysDisallowedForReadingUnderPlaybackAPIRestriction;
+(id)allWritableAttributeKeysForVisibility:(unsigned long long)arg1 ;
+(id)attributeKeysDisallowedForWritingUnderPlaybackAPIRestriction;
+(id)trackWithProxy:(int)arg1 ;
-(id)init;
-(id)initWithProxy:(int)arg1 ;
-(id)initWithTrackHelper:(id)arg1 error:(id*)arg2 ;
-(id)initWithTrackID:(long long)arg1 error:(id*)arg2 andMovie:(id)arg3 ;
@end

