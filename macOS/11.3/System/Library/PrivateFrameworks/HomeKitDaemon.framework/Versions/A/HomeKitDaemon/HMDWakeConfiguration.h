/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, HMDWakeConfigurationParameters, NSString;

@interface HMDWakeConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _reserved;
	HMDWakeConfigurationParameters* _custom1;
	HMDWakeConfigurationParameters* _custom2;

}

@property (nonatomic,retain) NSData * reserved;                                     //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,retain) HMDWakeConfigurationParameters * custom1;              //@synthesize custom1=_custom1 - In the implementation block
@property (nonatomic,retain) HMDWakeConfigurationParameters * custom2;              //@synthesize custom2=_custom2 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(NSData *)reserved;
-(void)setReserved:(NSData *)arg1 ;
-(char)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setCustom1:(HMDWakeConfigurationParameters *)arg1 ;
-(void)setCustom2:(HMDWakeConfigurationParameters *)arg1 ;
-(HMDWakeConfigurationParameters *)custom1;
-(HMDWakeConfigurationParameters *)custom2;
-(id)initWithReserved:(id)arg1 custom1:(id)arg2 custom2:(id)arg3 ;
@end

