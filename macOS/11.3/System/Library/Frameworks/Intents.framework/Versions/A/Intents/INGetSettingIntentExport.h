/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSettingMetadata;


@protocol INGetSettingIntentExport <NSObject,JSExport>
@property (copy) INSettingMetadata * settingMetadata; 
@property (assign) long long confirmationValue; 
@required
-(id)init;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;
-(long long)confirmationValue;
-(void)setConfirmationValue:(long long)arg1;

@end
