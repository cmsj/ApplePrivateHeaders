/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INRootCodableDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, INCodableAttribute;

@interface INIntentCodableDescription : INRootCodableDescription <NSSecureCoding, NSCopying> {

	char _userConfirmationRequired;
	char _deprecated;
	char _configurable;
	char _eligibleForSuggestions;
	char _eligibleForWidgets;
	NSString* _inputAttributeName;
	NSString* _keyAttributeName;
	NSString* _title;
	NSString* _titleLocID;
	NSString* _descriptiveText;
	NSString* _descriptiveTextLocID;
	NSString* _defaultImageName;
	long long _intentCategory;
	NSString* _verb;
	NSArray* _phrases;
	NSArray* _entityVerbs;

}

@property (setter=_setInputAttributeName:,nonatomic,copy) NSString * _inputAttributeName;              //@synthesize inputAttributeName=_inputAttributeName - In the implementation block
@property (setter=_setKeyAttributeName:,nonatomic,copy) NSString * _keyAttributeName;                  //@synthesize keyAttributeName=_keyAttributeName - In the implementation block
@property (nonatomic,copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleLocID;                                                      //@synthesize titleLocID=_titleLocID - In the implementation block
@property (nonatomic,copy) NSString * descriptiveText;                                                 //@synthesize descriptiveText=_descriptiveText - In the implementation block
@property (nonatomic,copy) NSString * descriptiveTextLocID;                                            //@synthesize descriptiveTextLocID=_descriptiveTextLocID - In the implementation block
@property (nonatomic,copy) NSString * defaultImageName;                                                //@synthesize defaultImageName=_defaultImageName - In the implementation block
@property (assign,nonatomic) long long intentCategory;                                                 //@synthesize intentCategory=_intentCategory - In the implementation block
@property (nonatomic,copy) NSString * verb;                                                            //@synthesize verb=_verb - In the implementation block
@property (assign,nonatomic) char userConfirmationRequired;                                            //@synthesize userConfirmationRequired=_userConfirmationRequired - In the implementation block
@property (assign,getter=isDeprecated,nonatomic) char deprecated;                                      //@synthesize deprecated=_deprecated - In the implementation block
@property (assign,getter=isConfigurable,nonatomic) char configurable;                                  //@synthesize configurable=_configurable - In the implementation block
@property (assign,getter=isEligibleForSuggestions,nonatomic) char eligibleForSuggestions;              //@synthesize eligibleForSuggestions=_eligibleForSuggestions - In the implementation block
@property (assign,getter=isEligibleForWidgets,nonatomic) char eligibleForWidgets;                      //@synthesize eligibleForWidgets=_eligibleForWidgets - In the implementation block
@property (nonatomic,readonly) INCodableAttribute * inputAttribute; 
@property (nonatomic,readonly) INCodableAttribute * keyAttribute; 
@property (nonatomic,retain) NSArray * phrases;                                                        //@synthesize phrases=_phrases - In the implementation block
@property (copy,readonly) NSString * localizedTitle; 
@property (copy,readonly) NSString * localizedDescriptiveText; 
@property (nonatomic,copy) NSArray * entityVerbs;                                                      //@synthesize entityVerbs=_entityVerbs - In the implementation block
+(char)supportsSecureCoding;
+(id)__NameKey;
+(id)__Key;
+(id)__ParametersKey;
+(id)__ParameterKey;
+(id)__ClassNameKey;
+(id)__ClassPrefixKey;
+(id)__PhrasesKey;
+(id)__VerbAssociationsKey;
+(id)__EntityKey;
+(id)__DeprecatedKey;
+(id)__ConfigurableKey;
+(id)__KeyParameterKey;
+(id)__InputKey;
+(id)__UserConfirmationRequiredKey;
+(id)__DefaultImageNameKey;
+(id)__CategoryKey;
+(id)__VerbKey;
+(id)__DescriptionIDKey;
+(id)__DescriptionKey;
+(id)__TitleIDKey;
+(id)__TitleKey;
+(id)__EligibleForWidgetsKey;
+(id)__IneligibleForSuggestionsKey;
+(id)__SummaryKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)attributes;
-(NSString *)title;
-(NSString *)localizedTitle;
-(NSString *)verb;
-(id)_attributeKey;
-(void)setVerb:(NSString *)arg1 ;
-(NSArray *)phrases;
-(void)setPhrases:(NSArray *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(long long)intentCategory;
-(void)setIntentCategory:(long long)arg1 ;
-(char)userConfirmationRequired;
-(void)setUserConfirmationRequired:(char)arg1 ;
-(id)_ignoredAttributeTags;
-(id)_attributesKey;
-(NSString *)_inputAttributeName;
-(NSString *)_keyAttributeName;
-(id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1 ;
-(INCodableAttribute *)inputAttribute;
-(INCodableAttribute *)keyAttribute;
-(id)localizedTitleWithLocalizer:(id)arg1 ;
-(NSString *)localizedDescriptiveText;
-(id)localizedDescriptiveTextWithLocalizer:(id)arg1 ;
-(void)_updateWithIntentCodableDescription:(id)arg1 ;
-(void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2 ;
-(void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2 ;
-(void)_setInputAttributeName:(id)arg1 ;
-(void)_setKeyAttributeName:(id)arg1 ;
-(NSString *)titleLocID;
-(void)setTitleLocID:(NSString *)arg1 ;
-(NSString *)descriptiveText;
-(void)setDescriptiveText:(NSString *)arg1 ;
-(NSString *)descriptiveTextLocID;
-(void)setDescriptiveTextLocID:(NSString *)arg1 ;
-(NSString *)defaultImageName;
-(void)setDefaultImageName:(NSString *)arg1 ;
-(char)isDeprecated;
-(void)setDeprecated:(char)arg1 ;
-(char)isConfigurable;
-(void)setConfigurable:(char)arg1 ;
-(char)isEligibleForSuggestions;
-(void)setEligibleForSuggestions:(char)arg1 ;
-(char)isEligibleForWidgets;
-(void)setEligibleForWidgets:(char)arg1 ;
-(NSArray *)entityVerbs;
-(void)setEntityVerbs:(NSArray *)arg1 ;
@end

