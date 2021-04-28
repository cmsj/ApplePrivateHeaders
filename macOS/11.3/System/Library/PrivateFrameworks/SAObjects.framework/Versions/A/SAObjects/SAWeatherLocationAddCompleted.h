/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * error; 
@property (nonatomic,copy) NSURL * weatherLocationId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationAddCompleted;
+(id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)locationAddCompletedWithError:(id)arg1 ;
+(id)locationAddCompletedWithWeatherLocationId:(id)arg1 ;
-(NSString *)error;
-(void)setError:(NSString *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(id)initWithWeatherLocationId:(id)arg1 ;
-(void)setWeatherLocationId:(NSURL *)arg1 ;
-(NSURL *)weatherLocationId;
@end
