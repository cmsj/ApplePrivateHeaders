/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/SpeechObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SOSpeechItem : NSObject {

	NSString* _bundleIdentifier;
	NSString* _localeIdentifier;
	NSString* _fallbackLocaleIdentifier;
	unsigned long long _byteSize;
	NSString* _variant;
	NSString* _version;
	NSString* _tagName;
	NSString* _engineIdentifier;
	unsigned long long _visibility;
	unsigned long long _downloadStatus;
	double _downloadPercentComplete;
	NSString* _fullSizeBundleIdentifier;
	unsigned long long _fullSizeByteSize;
	NSString* _fullSizeTagName;
	char _showCountryInDisplayTitle;
	char _downloadFullSize;
	char _offlineDictationOnly;

}

@property (readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) NSString * localeIdentifier;                        //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (retain) NSString * fallbackLocaleIdentifier;                //@synthesize fallbackLocaleIdentifier=_fallbackLocaleIdentifier - In the implementation block
@property (assign) char showCountryInDisplayTitle;                     //@synthesize showCountryInDisplayTitle=_showCountryInDisplayTitle - In the implementation block
@property (assign) char downloadFullSize;                              //@synthesize downloadFullSize=_downloadFullSize - In the implementation block
@property (assign) char offlineDictationOnly;                          //@synthesize offlineDictationOnly=_offlineDictationOnly - In the implementation block
@property (readonly) unsigned long long byteSize;                      //@synthesize byteSize=_byteSize - In the implementation block
@property (retain,readonly) NSString * engineIdentifier;               //@synthesize engineIdentifier=_engineIdentifier - In the implementation block
@property (retain,readonly) NSString * variant;                        //@synthesize variant=_variant - In the implementation block
@property (retain,readonly) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (retain,readonly) NSString * tagName;                        //@synthesize tagName=_tagName - In the implementation block
@property (assign) unsigned long long visibility;                      //@synthesize visibility=_visibility - In the implementation block
@property (assign) unsigned long long downloadStatus;                  //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (assign) double downloadPercentComplete;                     //@synthesize downloadPercentComplete=_downloadPercentComplete - In the implementation block
@property (readonly) NSString * fullSizeBundleIdentifier;              //@synthesize fullSizeBundleIdentifier=_fullSizeBundleIdentifier - In the implementation block
@property (readonly) unsigned long long fullSizeByteSize;              //@synthesize fullSizeByteSize=_fullSizeByteSize - In the implementation block
@property (readonly) NSString * fullSizeTagName;                       //@synthesize fullSizeTagName=_fullSizeTagName - In the implementation block
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(char)isSameLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2 ;
+(char)isLocaleIdentifier:(id)arg1 containedInLocaleIdentifiers:(id)arg2 ;
+(id)systemLocaleIdentifier;
+(char)isSameLangaugeFromLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2 ;
+(id)displayStringForTimeRemaining:(double)arg1 ;
+(id)displayStringForByteSize:(unsigned long long)arg1 ;
+(id)normalizedLocaleIdentifier:(id)arg1 ;
+(id)installationDictionaryCache;
+(id)visibleObjectsFromItems:(id)arg1 forLocaleIdentifier:(id)arg2 additionalRequiredItems:(id)arg3 ;
-(void)dealloc;
-(NSString *)localeIdentifier;
-(long long)compare:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)version;
-(NSString *)variant;
-(id)languageIdentifier;
-(void)setVisibility:(unsigned long long)arg1 ;
-(unsigned long long)visibility;
-(NSString *)tagName;
-(id)displayTitle;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(unsigned long long)byteSize;
-(unsigned long long)downloadStatus;
-(void)setDownloadStatus:(unsigned long long)arg1 ;
-(double)downloadPercentComplete;
-(void)setDownloadPercentComplete:(double)arg1 ;
-(id)languageWithDialectDisplayString;
-(long long)compareDisplayTitle:(id)arg1 ;
-(id)countryDisplayString;
-(void)setShowCountryInDisplayTitle:(char)arg1 ;
-(id)displayedSize;
-(id)languageDisplayString;
-(char)isAppropriateForSystemLangauge;
-(char)doesMatchSystemLocale;
-(char)matchesSearchString:(id)arg1 ;
-(id)_conversionLocale;
-(id)countryIdentifier;
-(void)setOfflineDictationOnly:(char)arg1 ;
-(char)downloadFullSize;
-(unsigned long long)fullSizeByteSize;
-(void)setDownloadFullSize:(char)arg1 ;
-(NSString *)fullSizeBundleIdentifier;
-(char)offlineDictationOnly;
-(NSString *)engineIdentifier;
-(NSString *)fallbackLocaleIdentifier;
-(void)setFallbackLocaleIdentifier:(NSString *)arg1 ;
-(id)initWithDownloadableBundleIdentifier:(id)arg1 properties:(id)arg2 ;
-(long long)compareCountryTitle:(id)arg1 ;
-(long long)compareCountryWithDialectTitle:(id)arg1 ;
-(id)countryWithDialectDisplayString;
-(long long)compareLanguageTitle:(id)arg1 ;
-(char)showCountryInDisplayTitle;
-(NSString *)fullSizeTagName;
@end

