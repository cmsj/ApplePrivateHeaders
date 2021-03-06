/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/Versions/A/SpeechRecognitionCommandServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface SRCSSpokenCommandUtilities : NSObject {

	NSDictionary* _commandAttributes;
	NSMutableDictionary* _commandStringsTablesByLocaleIdentifier;

}
+(id)sharedSpokenCommandUtilities;
-(id)init;
-(id)commandAttributes;
-(id)commandStringsTableForLocaleIdentifier:(id)arg1 ;
-(void)_flushBuiltInCommandsStringsTable;
-(id)dictionaryForLocaleIdentifier:(id)arg1 resourceFileName:(id)arg2 resourceFileExtension:(id)arg3 ;
@end

