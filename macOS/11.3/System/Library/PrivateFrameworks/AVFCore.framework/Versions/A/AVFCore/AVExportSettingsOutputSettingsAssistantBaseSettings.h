/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVOutputSettingsAssistantBaseSettingsProvider.h>

@class NSDictionary, NSString;

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {

	NSDictionary* _exportSettings;

}

@property (nonatomic,readonly) NSDictionary * baseAudioSettings; 
@property (nonatomic,readonly) NSDictionary * baseVideoSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSDictionary *)baseAudioSettings;
-(NSDictionary *)baseVideoSettings;
-(id)initWithOutputSettingsPreset:(id)arg1 ;
@end
