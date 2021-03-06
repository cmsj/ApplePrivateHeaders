/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/Versions/A/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXSSLanguageMap, NSLocale, NSString, NSCharacterSet;

@interface AXSSDialectMap : NSObject {

	AXSSLanguageMap* _languageMap;
	NSLocale* _locale;
	NSString* _specificLanguageID;
	NSString* _voiceName;
	NSString* _voiceIdentifier;
	NSCharacterSet* _speakableCharacters;
	NSCharacterSet* _secondaryLanguageRange;

}

@property (nonatomic,retain) NSLocale * locale;                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * specificLanguageID;                          //@synthesize specificLanguageID=_specificLanguageID - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                                   //@synthesize voiceName=_voiceName - In the implementation block
@property (nonatomic,copy) NSString * voiceIdentifier;                             //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (nonatomic,copy) NSCharacterSet * speakableCharacters;                   //@synthesize speakableCharacters=_speakableCharacters - In the implementation block
@property (nonatomic,retain) NSCharacterSet * secondaryLanguageRange;              //@synthesize secondaryLanguageRange=_secondaryLanguageRange - In the implementation block
@property (nonatomic,__weak,readonly) AXSSLanguageMap * languageMap;               //@synthesize languageMap=_languageMap - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionID; 
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(AXSSLanguageMap *)languageMap;
-(NSString *)regionID;
-(NSString *)voiceName;
-(void)setVoiceName:(NSString *)arg1 ;
-(id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 voiceIdentifier:(id)arg4 speakableCharacters:(id)arg5 secondaryLanguageRange:(id)arg6 ;
-(char)canSpeakString:(id)arg1 ;
-(NSString *)voiceIdentifier;
-(NSString *)specificLanguageID;
-(char)canSpeakCharacter:(unsigned short)arg1 ;
-(char)isDialectSecondaryForCharacter:(unsigned short)arg1 ;
-(id)_availableVoices;
-(void)setSpecificLanguageID:(NSString *)arg1 ;
-(NSCharacterSet *)speakableCharacters;
-(NSCharacterSet *)secondaryLanguageRange;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(void)setSpeakableCharacters:(NSCharacterSet *)arg1 ;
-(void)setSecondaryLanguageRange:(NSCharacterSet *)arg1 ;
@end

