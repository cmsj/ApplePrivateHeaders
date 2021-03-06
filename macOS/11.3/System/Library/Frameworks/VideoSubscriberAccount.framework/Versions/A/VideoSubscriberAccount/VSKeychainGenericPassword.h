/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSKeychainItem.h>

@class NSString, NSDate, NSNumber;

@interface VSKeychainGenericPassword : VSKeychainItem

@property (nonatomic,copy) NSString * accessGroup; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,copy) NSString * itemDescription; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,copy) NSNumber * creatorCode; 
@property (nonatomic,copy) NSNumber * typeCode; 
@property (nonatomic,copy) NSString * label; 
@property (assign,getter=isSynchronizable,nonatomic) char synchronizable; 
@property (assign,getter=isInvisible,nonatomic) char invisible; 
@property (assign,getter=isNegative,nonatomic) char negative; 
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * generic; 
-(NSNumber *)typeCode;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(NSString *)service;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void)setInvisible:(char)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
-(NSString *)itemDescription;
-(char)isNegative;
-(void)setNegative:(char)arg1 ;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setSynchronizable:(char)arg1 ;
-(char)isInvisible;
-(NSNumber *)creatorCode;
-(void)setCreatorCode:(NSNumber *)arg1 ;
-(void)setTypeCode:(NSNumber *)arg1 ;
-(NSString *)generic;
-(void)setGeneric:(NSString *)arg1 ;
-(id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1 ;
-(void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(char)isSynchronizable;
@end

