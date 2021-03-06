/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * cname; 
@property (nonatomic,copy) NSString * connectionId; 
@property (nonatomic,copy) NSString * host; 
@property (nonatomic,copy) NSNumber * mptcp; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) NSString * resolver; 
@property (nonatomic,copy) NSString * resolverProtocol; 
@property (nonatomic,copy) NSString * routeId; 
@property (nonatomic,copy) NSNumber * timeout; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionPolicyRoute;
+(id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(NSNumber *)timeout;
-(id)groupIdentifier;
-(void)setTimeout:(NSNumber *)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(NSString *)resolver;
-(NSString *)routeId;
-(void)setRouteId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)cname;
-(void)setCname:(NSString *)arg1 ;
-(NSString *)connectionId;
-(void)setConnectionId:(NSString *)arg1 ;
-(NSNumber *)mptcp;
-(void)setMptcp:(NSNumber *)arg1 ;
-(void)setResolver:(NSString *)arg1 ;
-(NSString *)resolverProtocol;
-(void)setResolverProtocol:(NSString *)arg1 ;
@end

