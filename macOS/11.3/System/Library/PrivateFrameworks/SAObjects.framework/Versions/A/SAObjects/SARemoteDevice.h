/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SARemoteDevice : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * assistantId; 
@property (nonatomic,copy) NSString * brandName; 
@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * personalDomainsAuthenticationMode; 
@property (nonatomic,copy) NSNumber * personalDomainsEnabled; 
@property (assign,nonatomic) char siriEnabled; 
@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteDevice;
+(id)remoteDeviceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(NSString *)brandName;
-(void)setBrandName:(NSString *)arg1 ;
-(NSString *)personalDomainsAuthenticationMode;
-(void)setPersonalDomainsAuthenticationMode:(NSString *)arg1 ;
-(NSNumber *)personalDomainsEnabled;
-(void)setPersonalDomainsEnabled:(NSNumber *)arg1 ;
-(char)siriEnabled;
-(void)setSiriEnabled:(char)arg1 ;
@end

