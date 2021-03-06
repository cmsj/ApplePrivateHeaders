/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSString;

@interface PluginReaderGenericModule : NSObject {

	NSMutableDictionary* _inputMethodInformation;
	NSDictionary* _wordList;
	NSString* _fileName;

}
-(char)parseForBasicProperties;
-(id)inputMethodInformation;
-(void)_setModeInformation;
-(id)initForBasicProperties;
-(void)setInputModeID:(id)arg1 ;
-(void)setIntendedLanguage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(char)parse;
-(void)setLocalizedName:(id)arg1 ;
-(void)setInputSourceID:(id)arg1 ;
@end

