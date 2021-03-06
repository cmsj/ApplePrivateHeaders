/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>
#import <libobjc.A.dylib/_AMSystemEventsGenericMethods.h>

@class NSDate, NSString, NSArray;

@interface _AMSystemEventsTrack : SBObject <_AMSystemEventsGenericMethods>

@property (readonly) long long audioChannelCount; 
@property (readonly) char audioCharacteristic; 
@property (readonly) double audioSampleRate; 
@property (readonly) long long audioSampleSize; 
@property (copy,readonly) NSDate * creationTime; 
@property (copy,readonly) NSString * dataFormat; 
@property (readonly) long long dataRate; 
@property (readonly) long long dataSize; 
@property (copy,readonly) NSArray * dimensions; 
@property (readonly) long long duration; 
@property (assign) char enabled; 
@property (assign) char highQuality; 
@property (copy,readonly) NSString * href; 
@property (copy,readonly) NSString * kind; 
@property (copy,readonly) NSDate * modificationTime; 
@property (copy,readonly) NSString * name; 
@property (assign) long long startTime; 
@property (copy,readonly) NSString * type; 
@property (copy,readonly) NSString * typeClass; 
@property (readonly) long long videoDepth; 
@property (readonly) char visualCharacteristic; 
-(NSString *)name;
-(NSString *)type;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(long long)startTime;
-(void)setStartTime:(long long)arg1 ;
-(NSString *)kind;
-(long long)duration;
-(NSArray *)dimensions;
-(NSString *)dataFormat;
-(double)audioSampleRate;
-(long long)audioChannelCount;
-(long long)dataSize;
-(NSDate *)modificationTime;
-(long long)dataRate;
-(void)setHighQuality:(char)arg1 ;
-(char)highQuality;
-(void)delete;
-(id)annotations;
-(NSDate *)creationTime;
-(NSString *)href;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(char)audioCharacteristic;
-(long long)audioSampleSize;
-(NSString *)typeClass;
-(long long)videoDepth;
-(char)visualCharacteristic;
@end

