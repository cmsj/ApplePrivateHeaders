/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/Versions/A/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VTKeywordDetectorContext : NSObject {

	char _isMultiPhraseVTEnabled;
	NSString* _assetPath;
	NSString* _categoryKey;
	NSString* _locale;
	unsigned long long _audioSourceOption;

}

@property (nonatomic,readonly) NSString * assetPath;                              //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,readonly) NSString * categoryKey;                            //@synthesize categoryKey=_categoryKey - In the implementation block
@property (nonatomic,readonly) NSString * locale;                                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) unsigned long long audioSourceOption;              //@synthesize audioSourceOption=_audioSourceOption - In the implementation block
@property (nonatomic,readonly) char isMultiPhraseVTEnabled;                       //@synthesize isMultiPhraseVTEnabled=_isMultiPhraseVTEnabled - In the implementation block
-(NSString *)locale;
-(char)isMultiPhraseVTEnabled;
-(NSString *)categoryKey;
-(id)initWithVTContext:(id)arg1 error:(id*)arg2 ;
-(NSString *)assetPath;
-(unsigned long long)audioSourceOption;
@end

