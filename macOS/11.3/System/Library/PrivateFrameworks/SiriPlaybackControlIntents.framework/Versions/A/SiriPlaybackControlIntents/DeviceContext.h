/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/Versions/A/SiriPlaybackControlIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INObject.h>

@class NSString, NSDate;

@interface DeviceContext : INObject

@property (readonly,nonatomic) NSString * description; 
@property (nonatomic,copy) NSString * routeId; 
@property (assign,nonatomic) long long proximity; 
@property (assign,nonatomic) long long nowPlayingState; 
@property (nonatomic,copy) NSDate * nowPlayingTimestamp; 
@property (assign,nonatomic) long long nowPlayingMediaType; 
@property (nonatomic,copy) NSString * groupId; 
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
@end

