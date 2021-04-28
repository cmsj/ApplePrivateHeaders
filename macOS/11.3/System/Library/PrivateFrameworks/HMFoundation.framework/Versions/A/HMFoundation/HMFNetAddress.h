/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress : HMFObject {

	HMFNetAddressInternal* _internal;

}

@property (nonatomic,readonly) HMFNetAddressInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) unsigned long long addressFamily; 
@property (nonatomic,copy,readonly) NSString * addressString; 
+(id)localAddress;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(HMFNetAddressInternal *)internal;
-(NSString *)addressString;
-(id)initWithHostname:(id)arg1 ;
-(id)attributeDescriptions;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
-(unsigned long long)addressFamily;
@end
