/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SADataSourceInfo, NSNumber, NSString;

@interface SATimerObject : SADomainObject

@property (nonatomic,retain) SADataSourceInfo * dataSourceInfo; 
@property (nonatomic,copy) NSNumber * isFiring; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSNumber * timerValue; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * type; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)state;
-(NSString *)type;
-(void)setState:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(id)encodedClassName;
-(SADataSourceInfo *)dataSourceInfo;
-(void)setDataSourceInfo:(SADataSourceInfo *)arg1 ;
-(NSNumber *)isFiring;
-(void)setIsFiring:(NSNumber *)arg1 ;
-(NSNumber *)timerValue;
-(void)setTimerValue:(NSNumber *)arg1 ;
@end

