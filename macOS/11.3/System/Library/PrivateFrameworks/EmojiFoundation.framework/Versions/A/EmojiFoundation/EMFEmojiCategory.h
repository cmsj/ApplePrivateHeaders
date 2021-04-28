/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/Versions/A/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EMFEmojiCategory : NSObject {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * shortLocalizedName; 
+(char)_isCoupleMultiSkinToneEmoji:(id)arg1 ;
+(char)_supportsCoupleSkinToneSelection:(id)arg1 ;
+(char)_isNewlyAddedEmoji:(id)arg1 ;
+(id)_emojiSetForIdentifier:(id)arg1 ;
+(id)categoryIdentifierList;
+(id)categoryWithIdentifier:(id)arg1 ;
+(id)PrepopulatedEmoji;
+(id)PeopleEmoji;
+(id)NatureEmoji;
+(id)FoodAndDrinkEmoji;
+(id)ActivityEmoji;
+(id)TravelAndPlacesEmoji;
+(id)ObjectsEmoji;
+(id)SymbolsEmoji;
+(id)computeEmojiFlagsSortedByLanguage;
+(id)extraFlagsForCountryCode:(id)arg1 ;
+(id)flagEmojiCountryCodesCommon;
+(id)stringToRegionalIndicatorString:(id)arg1 ;
+(id)insertionFlagsForCountryCodes:(id)arg1 inSortedCountryCodes:(id)arg2 ;
+(void)insertToSortedCountries:(id)arg1 withAdditionalFlags:(id)arg2 ;
+(id)FlagsEmoji;
+(id)_baseLocalizationKeyForIdentifier:(id)arg1 ;
+(id)DingbatsVariantEmoji;
+(id)NoneVariantEmoji;
+(id)SkinToneEmoji;
+(id)GenderEmoji;
+(id)ProfessionEmoji;
+(char)_isHandholdingCoupleEmoji:(id)arg1 ;
+(id)CoupleMultiSkinToneEmoji;
+(id)ExtendedCoupleMultiSkinToneEmoji;
+(id)MultiPersonFamilySkinToneEmoji;
+(id)localizedRecentsDescription;
+(id)localizedSkinToneEmojiDescription;
+(char)_isDingbatsVariantEmoji:(id)arg1 ;
+(char)_isNoneVariantEmoji:(id)arg1 ;
+(char)_isSkinToneEmoji:(id)arg1 ;
+(char)_isGenderEmoji:(id)arg1 ;
+(char)_isProfessionEmoji:(id)arg1 ;
+(char)_isFlagEmoji:(id)arg1 ;
+(char)_isComposedCoupleMultiSkinToneEmoji:(id)arg1 ;
+(char)_isMultiPersonFamilySkinToneEmoji:(id)arg1 ;
+(id)ProfessionWithoutSkinToneEmoji;
+(id)NewlyAddedEmoji;
+(id)CelebrationEmoji;
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)shortLocalizedName;
-(id)emojiTokensForLocaleData:(id)arg1 ;
@end
