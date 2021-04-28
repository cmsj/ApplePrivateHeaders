/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString;


@protocol INSetRadioStationIntentExport <NSObject,JSExport>
@property (assign) long long radioType; 
@property (copy) NSNumber * frequency; 
@property (copy) NSString * stationName; 
@property (copy) NSString * channel; 
@property (copy) NSNumber * presetNumber; 
@required
-(id)init;
-(NSString *)channel;
-(void)setChannel:(id)arg1;
-(NSNumber *)frequency;
-(void)setFrequency:(id)arg1;
-(long long)radioType;
-(void)setRadioType:(long long)arg1;
-(NSString *)stationName;
-(void)setStationName:(id)arg1;
-(NSNumber *)presetNumber;
-(void)setPresetNumber:(id)arg1;

@end
