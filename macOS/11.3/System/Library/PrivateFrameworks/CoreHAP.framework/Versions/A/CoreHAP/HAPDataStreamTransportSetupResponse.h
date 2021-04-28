/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPDataStreamTransportCommandStatusWrapper, HAPDataStreamTransportParameters, NSData, NSString;

@interface HAPDataStreamTransportSetupResponse : NSObject <NSCopying, HAPTLVProtocol> {

	HAPDataStreamTransportCommandStatusWrapper* _status;
	HAPDataStreamTransportParameters* _parameters;
	NSData* _accessoryKeySalt;

}

@property (nonatomic,retain) HAPDataStreamTransportCommandStatusWrapper * status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) HAPDataStreamTransportParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSData * accessoryKeySalt;                                        //@synthesize accessoryKeySalt=_accessoryKeySalt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(HAPDataStreamTransportCommandStatusWrapper *)status;
-(HAPDataStreamTransportParameters *)parameters;
-(void)setParameters:(HAPDataStreamTransportParameters *)arg1 ;
-(void)setStatus:(HAPDataStreamTransportCommandStatusWrapper *)arg1 ;
-(char)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setAccessoryKeySalt:(NSData *)arg1 ;
-(NSData *)accessoryKeySalt;
-(id)initWithStatus:(id)arg1 parameters:(id)arg2 accessoryKeySalt:(id)arg3 ;
@end
