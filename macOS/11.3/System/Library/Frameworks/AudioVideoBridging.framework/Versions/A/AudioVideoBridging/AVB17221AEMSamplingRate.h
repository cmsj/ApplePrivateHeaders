/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVB17221AEMSamplingRate : AVB17221AEMObject <NSCopying> {

	unsigned samplingRate;

}

@property (nonatomic,readonly) double frequency; 
@property (assign,nonatomic) unsigned char iidcVideoFrameRate; 
@property (assign) unsigned samplingRate; 
@property (assign) unsigned char pull; 
@property (assign) unsigned baseFrequency; 
+(id)keyPathsForValuesAffectingPull;
+(id)keyPathsForValuesAffectingBaseFrequency;
+(id)_IIDCStandardFrameRates;
+(id)_IIDCNTSCDownFrameRates;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)frequency;
-(void)setSamplingRate:(unsigned)arg1 ;
-(unsigned)samplingRate;
-(unsigned char)pull;
-(id)plistRepresentation;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(unsigned)baseFrequency;
-(char)isSupportedAudioSamplingRate;
-(void)setPull:(unsigned char)arg1 ;
-(void)setBaseFrequency:(unsigned)arg1 ;
-(void)setIidcVideoFrameRate:(unsigned char)arg1 ;
-(unsigned char)iidcVideoFrameRate;
-(char)isSupportedVideoSamplingRate;
@end
