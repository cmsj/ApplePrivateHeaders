/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject <NSCopying> {

	unsigned long long _method;
	NSDictionary* _properties;

}

@property (readonly) unsigned type; 
@property (readonly) char isUserNamePassword; 
@property (readonly) char isCertificate; 
@property (assign) unsigned long long method;              //@synthesize method=_method - In the implementation block
@property (retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(char)isCertificate;
-(char)isUserNamePassword;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)type;
-(unsigned long long)method;
-(void)setMethod:(unsigned long long)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)initWithMethod:(unsigned long long)arg1 ;
@end
