/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface _NSHTTPAlternativeServiceEntry : NSObject <NSCopying> {

	NSString* _host;
	NSString* _alternateHost;
	long long _port;
	long long _alternatePort;
	NSString* _partition;
	NSDate* _expirationDate;
	long long _serviceType;

}

@property (nonatomic,retain) NSString * host;                       //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * alternateHost;              //@synthesize alternateHost=_alternateHost - In the implementation block
@property (assign,nonatomic) long long port;                        //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) long long alternatePort;               //@synthesize alternatePort=_alternatePort - In the implementation block
@property (nonatomic,retain) NSString * partition;                  //@synthesize partition=_partition - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) long long serviceType;                 //@synthesize serviceType=_serviceType - In the implementation block
-(NSString *)alternateHost;
-(void)setAlternateHost:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)host;
-(long long)port;
-(void)setHost:(NSString *)arg1 ;
-(void)setPort:(long long)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(void)setPartition:(NSString *)arg1 ;
-(NSString *)partition;
-(long long)alternatePort;
-(void)setAlternatePort:(long long)arg1 ;
@end

