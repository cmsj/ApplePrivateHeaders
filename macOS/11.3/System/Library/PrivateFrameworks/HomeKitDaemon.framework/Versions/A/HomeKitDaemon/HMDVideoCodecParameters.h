/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSArray* _h264Profiles;
	NSArray* _levels;
	NSArray* _packetizationModes;

}

@property (nonatomic,copy,readonly) NSArray * h264Profiles;                    //@synthesize h264Profiles=_h264Profiles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * levels;                          //@synthesize levels=_levels - In the implementation block
@property (nonatomic,copy,readonly) NSArray * packetizationModes;              //@synthesize packetizationModes=_packetizationModes - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSArray *)levels;
-(char)_parseFromTLVData;
-(id)tlvData;
-(NSArray *)h264Profiles;
-(NSArray *)packetizationModes;
-(id)initWithProfiles:(id)arg1 levels:(id)arg2 packetizationModes:(id)arg3 ;
@end

