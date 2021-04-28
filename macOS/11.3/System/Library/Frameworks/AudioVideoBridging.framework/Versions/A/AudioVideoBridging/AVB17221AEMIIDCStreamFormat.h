/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVB17221AEMStandardStreamFormat.h>

@interface AVB17221AEMIIDCStreamFormat : AVB17221AEMStandardStreamFormat

@property (assign) unsigned short iidcFormat; 
@property (assign) unsigned char iidcRate; 
+(id)keyPathsForValuesAffectingIidcFormat;
+(id)keyPathsForValuesAffectingIidcRate;
-(id)init;
-(void)setSamplingRate:(id)arg1 ;
-(id)samplingRate;
-(char)isSupportedVideoFormat;
-(char)isVideoFormat;
-(unsigned)maximumPDUSize;
-(unsigned)maximumPayloadSize;
-(unsigned short)maximumIntervalFrames;
-(unsigned short)iidcFormat;
-(unsigned char)iidcRate;
-(void)setIidcRate:(unsigned char)arg1 ;
-(void)setIidcFormat:(unsigned short)arg1 ;
@end
