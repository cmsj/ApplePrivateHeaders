/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDCameraRecordingSupportedAudioConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSArray* _codecConfigurations;

}

@property (nonatomic,copy,readonly) NSArray * codecConfigurations;              //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSArray *)codecConfigurations;
-(char)_parseFromTLVData;
-(id)tlvData;
-(id)initWithCodecConfigurations:(id)arg1 ;
@end

