/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriContactsIntents.framework/Versions/A/SiriContactsIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>

@class NSNumber, NSString, ContactAttribute, NSArray;

@interface GetContactAttributeIntent : INIntent

@property (retain,nonatomic) NSNumber * isMe; 
@property (copy,nonatomic) NSString * firstName; 
@property (copy,nonatomic) NSString * nickName; 
@property (copy,nonatomic) NSString * lastName; 
@property (copy,nonatomic) NSString * middleName; 
@property (copy,nonatomic) NSString * organizationName; 
@property (copy,nonatomic) NSString * contactIdentifier; 
@property (copy,nonatomic) NSString * contactRelation; 
@property (copy,nonatomic) NSString * fullName; 
@property (copy,nonatomic) NSString * phoneNumber; 
@property (copy,nonatomic) NSString * emailAddress; 
@property (retain,nonatomic) ContactAttribute * contactAttributeToGet; 
@property (copy,nonatomic) NSArray * siriMatches; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 backingStore:(id)arg2 ;
-(id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3 ;
@end

