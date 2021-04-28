/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, SALocation, NSDate, NSString, SAEmail, NSNumber, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic,copy) NSURL * accountIdentifier; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,retain) SAEmail * email; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAPhone * phone; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * scope; 
+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(SALocation *)address;
-(id)groupIdentifier;
-(void)setAddress:(SALocation *)arg1 ;
-(NSString *)scope;
-(NSNumber *)me;
-(void)setMe:(NSNumber *)arg1 ;
-(NSURL *)accountIdentifier;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(SAEmail *)email;
-(NSString *)relationship;
-(void)setScope:(NSString *)arg1 ;
-(SAPhone *)phone;
-(void)setPhone:(SAPhone *)arg1 ;
-(NSDate *)birthday;
-(void)setBirthday:(NSDate *)arg1 ;
-(NSString *)company;
-(void)setEmail:(SAEmail *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)mutatingCommand;
-(void)setCompany:(NSString *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
@end
