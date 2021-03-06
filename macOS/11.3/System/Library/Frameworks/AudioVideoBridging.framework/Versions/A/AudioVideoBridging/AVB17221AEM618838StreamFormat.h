/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVB17221AEM61883StreamFormat.h>

@interface AVB17221AEM618838StreamFormat : AVB17221AEM61883StreamFormat

@property (assign) unsigned char videoMode; 
@property (assign) unsigned char compressionMode; 
@property (assign) unsigned char colorSpace; 
+(id)keyPathsForValuesAffectingVideoMode;
+(id)keyPathsForValuesAffectingCompressionMode;
+(id)keyPathsForValuesAffectingColorSpace;
-(id)init;
-(void)setColorSpace:(unsigned char)arg1 ;
-(unsigned char)colorSpace;
-(unsigned char)compressionMode;
-(void)setCompressionMode:(unsigned char)arg1 ;
-(char)isSupportedVideoFormat;
-(char)isVideoFormat;
-(unsigned)maximumPDUSize;
-(void)setVideoMode:(unsigned char)arg1 ;
-(unsigned char)videoMode;
@end

