/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, SAUIImageResource, NSString;

@interface SAUIAlternateProviderResult : SADomainObject

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * numberOfResults; 
@property (nonatomic,retain) SAUIImageResource * providerImage; 
@property (nonatomic,copy) NSString * providerName; 
+(id)alternateProviderResult;
+(id)alternateProviderResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setNumberOfResults:(NSNumber *)arg1 ;
-(NSNumber *)numberOfResults;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(SAUIImageResource *)providerImage;
-(id)encodedClassName;
-(void)setProviderImage:(SAUIImageResource *)arg1 ;
@end
