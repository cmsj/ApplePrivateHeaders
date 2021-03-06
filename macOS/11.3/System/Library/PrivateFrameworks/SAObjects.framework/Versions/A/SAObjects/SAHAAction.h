/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSArray, SAHAAttributeValue;

@interface SAHAAction : SADomainObject

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSArray * executionFlags; 
@property (assign,nonatomic) long long executionOrder; 
@property (assign,nonatomic) char includeCompleteInformation; 
@property (nonatomic,retain) SAHAAttributeValue * value; 
+(id)action;
+(id)actionWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAHAAttributeValue *)value;
-(void)setValue:(SAHAAttributeValue *)arg1 ;
-(NSString *)attribute;
-(id)groupIdentifier;
-(void)setAttribute:(NSString *)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)encodedClassName;
-(long long)executionOrder;
-(void)setExecutionOrder:(long long)arg1 ;
-(NSArray *)executionFlags;
-(void)setExecutionFlags:(NSArray *)arg1 ;
-(char)includeCompleteInformation;
-(void)setIncludeCompleteInformation:(char)arg1 ;
@end

