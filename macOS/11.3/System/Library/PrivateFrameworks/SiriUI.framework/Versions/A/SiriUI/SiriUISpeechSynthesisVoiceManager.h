/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface SiriUISpeechSynthesisVoiceManager : NSObject {

	NSDictionary* _voiceLanguageDict;

}
+(id)sharedInstance;
+(void)adjustDownloadedVoiceStatusAfterSiriEnabled:(char)arg1 ;
-(id)init;
-(long long)preferredGenderForLanguage:(id)arg1 ;
@end

