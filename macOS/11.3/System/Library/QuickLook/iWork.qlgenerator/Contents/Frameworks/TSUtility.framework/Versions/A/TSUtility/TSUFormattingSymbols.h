/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString, NSArray, NSDictionary;

@interface TSUFormattingSymbols : NSObject {

	NSString* _version;
	NSString* _calendar;
	NSString* _numberingSystem;
	NSArray* _months;
	NSArray* _standaloneMonths;
	NSArray* _shortMonths;
	NSArray* _standaloneShortMonths;
	NSArray* _tinyMonths;
	NSArray* _standaloneTinyMonths;
	NSArray* _weekdays;
	NSArray* _standaloneWeekdays;
	NSArray* _shortWeekdays;
	NSArray* _standaloneShortWeekdays;
	NSArray* _tinyWeekdays;
	NSArray* _standaloneTinyWeekdays;
	NSArray* _quarters;
	NSArray* _standaloneQuarters;
	NSArray* _shortQuarters;
	NSArray* _standaloneShortQuarters;
	NSArray* _eras;
	NSArray* _longEras;
	NSString* _amSymbol;
	NSString* _pmSymbol;
	NSString* _shortDatePattern;
	NSString* _mediumDatePattern;
	NSString* _longDatePattern;
	NSString* _fullDatePattern;
	NSString* _shortTimePattern;
	NSString* _mediumTimePattern;
	NSString* _longTimePattern;
	NSString* _fullTimePattern;
	NSString* _decimalSeparator;
	NSString* _groupingSeparator;
	NSString* _currencyDecimalSeparator;
	NSString* _currencyGroupingSeparator;
	NSString* _plusSign;
	NSString* _minusSign;
	NSString* _exponentialSymbol;
	NSString* _percentSymbol;
	NSString* _perMilleSymbol;
	NSString* _infinitySymbol;
	NSString* _nanSymbol;
	NSString* _decimalPattern;
	NSString* _scientificPattern;
	NSString* _percentPattern;
	NSString* _currencyPattern;
	NSString* _listSeparator;
	NSString* _arrayRowSeparator;
	unsigned long long _groupingSize;
	unsigned long long _secondaryGroupingSize;
	NSString* _currencyCode;
	NSDictionary* _currencySymbols;
	NSDictionary* _currencySymbolsToCodes;
	NSDictionary* _currencyCodesToHalfwidthSymbols;
	NSDictionary* _negativeNumberPatterns;

}

@property (nonatomic,retain) NSDictionary * currencySymbolsToCodes;                       //@synthesize currencySymbolsToCodes=_currencySymbolsToCodes - In the implementation block
@property (nonatomic,retain) NSDictionary * currencyCodesToHalfwidthSymbols;              //@synthesize currencyCodesToHalfwidthSymbols=_currencyCodesToHalfwidthSymbols - In the implementation block
@property (nonatomic,retain) NSDictionary * negativeNumberPatterns;                       //@synthesize negativeNumberPatterns=_negativeNumberPatterns - In the implementation block
@property (nonatomic,readonly) NSString * version;                                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSString * numberingSystem;                                //@synthesize numberingSystem=_numberingSystem - In the implementation block
@property (nonatomic,readonly) NSArray * months;                                          //@synthesize months=_months - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneMonths;                                //@synthesize standaloneMonths=_standaloneMonths - In the implementation block
@property (nonatomic,readonly) NSArray * shortMonths;                                     //@synthesize shortMonths=_shortMonths - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneShortMonths;                           //@synthesize standaloneShortMonths=_standaloneShortMonths - In the implementation block
@property (nonatomic,readonly) NSArray * tinyMonths;                                      //@synthesize tinyMonths=_tinyMonths - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneTinyMonths;                            //@synthesize standaloneTinyMonths=_standaloneTinyMonths - In the implementation block
@property (nonatomic,readonly) NSArray * weekdays;                                        //@synthesize weekdays=_weekdays - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneWeekdays;                              //@synthesize standaloneWeekdays=_standaloneWeekdays - In the implementation block
@property (nonatomic,readonly) NSArray * shortWeekdays;                                   //@synthesize shortWeekdays=_shortWeekdays - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneShortWeekdays;                         //@synthesize standaloneShortWeekdays=_standaloneShortWeekdays - In the implementation block
@property (nonatomic,readonly) NSArray * tinyWeekdays;                                    //@synthesize tinyWeekdays=_tinyWeekdays - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneTinyWeekdays;                          //@synthesize standaloneTinyWeekdays=_standaloneTinyWeekdays - In the implementation block
@property (nonatomic,readonly) NSArray * quarters;                                        //@synthesize quarters=_quarters - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneQuarters;                              //@synthesize standaloneQuarters=_standaloneQuarters - In the implementation block
@property (nonatomic,readonly) NSArray * shortQuarters;                                   //@synthesize shortQuarters=_shortQuarters - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneShortQuarters;                         //@synthesize standaloneShortQuarters=_standaloneShortQuarters - In the implementation block
@property (nonatomic,readonly) NSArray * eras;                                            //@synthesize eras=_eras - In the implementation block
@property (nonatomic,readonly) NSArray * longEras;                                        //@synthesize longEras=_longEras - In the implementation block
@property (nonatomic,readonly) NSString * amSymbol;                                       //@synthesize amSymbol=_amSymbol - In the implementation block
@property (nonatomic,readonly) NSString * pmSymbol;                                       //@synthesize pmSymbol=_pmSymbol - In the implementation block
@property (nonatomic,readonly) NSString * shortDatePattern;                               //@synthesize shortDatePattern=_shortDatePattern - In the implementation block
@property (nonatomic,readonly) NSString * mediumDatePattern;                              //@synthesize mediumDatePattern=_mediumDatePattern - In the implementation block
@property (nonatomic,readonly) NSString * longDatePattern;                                //@synthesize longDatePattern=_longDatePattern - In the implementation block
@property (nonatomic,readonly) NSString * fullDatePattern;                                //@synthesize fullDatePattern=_fullDatePattern - In the implementation block
@property (nonatomic,readonly) NSString * shortTimePattern;                               //@synthesize shortTimePattern=_shortTimePattern - In the implementation block
@property (nonatomic,readonly) NSString * mediumTimePattern;                              //@synthesize mediumTimePattern=_mediumTimePattern - In the implementation block
@property (nonatomic,readonly) NSString * longTimePattern;                                //@synthesize longTimePattern=_longTimePattern - In the implementation block
@property (nonatomic,readonly) NSString * fullTimePattern;                                //@synthesize fullTimePattern=_fullTimePattern - In the implementation block
@property (nonatomic,readonly) NSString * decimalSeparator;                               //@synthesize decimalSeparator=_decimalSeparator - In the implementation block
@property (nonatomic,readonly) NSString * groupingSeparator;                              //@synthesize groupingSeparator=_groupingSeparator - In the implementation block
@property (nonatomic,readonly) NSString * currencyDecimalSeparator;                       //@synthesize currencyDecimalSeparator=_currencyDecimalSeparator - In the implementation block
@property (nonatomic,readonly) NSString * currencyGroupingSeparator;                      //@synthesize currencyGroupingSeparator=_currencyGroupingSeparator - In the implementation block
@property (nonatomic,readonly) NSString * plusSign;                                       //@synthesize plusSign=_plusSign - In the implementation block
@property (nonatomic,readonly) NSString * minusSign;                                      //@synthesize minusSign=_minusSign - In the implementation block
@property (nonatomic,readonly) NSString * exponentialSymbol;                              //@synthesize exponentialSymbol=_exponentialSymbol - In the implementation block
@property (nonatomic,readonly) NSString * percentSymbol;                                  //@synthesize percentSymbol=_percentSymbol - In the implementation block
@property (nonatomic,readonly) NSString * perMilleSymbol;                                 //@synthesize perMilleSymbol=_perMilleSymbol - In the implementation block
@property (nonatomic,readonly) NSString * infinitySymbol;                                 //@synthesize infinitySymbol=_infinitySymbol - In the implementation block
@property (nonatomic,readonly) NSString * nanSymbol;                                      //@synthesize nanSymbol=_nanSymbol - In the implementation block
@property (nonatomic,readonly) NSString * decimalPattern;                                 //@synthesize decimalPattern=_decimalPattern - In the implementation block
@property (nonatomic,readonly) NSString * scientificPattern;                              //@synthesize scientificPattern=_scientificPattern - In the implementation block
@property (nonatomic,readonly) NSString * percentPattern;                                 //@synthesize percentPattern=_percentPattern - In the implementation block
@property (nonatomic,readonly) NSString * currencyPattern;                                //@synthesize currencyPattern=_currencyPattern - In the implementation block
@property (nonatomic,readonly) NSString * listSeparator;                                  //@synthesize listSeparator=_listSeparator - In the implementation block
@property (nonatomic,readonly) NSString * arrayRowSeparator;                              //@synthesize arrayRowSeparator=_arrayRowSeparator - In the implementation block
@property (nonatomic,readonly) unsigned long long groupingSize;                           //@synthesize groupingSize=_groupingSize - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryGroupingSize;                  //@synthesize secondaryGroupingSize=_secondaryGroupingSize - In the implementation block
@property (nonatomic,readonly) NSString * currencyCode;                                   //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * currencySymbols;                            //@synthesize currencySymbols=_currencySymbols - In the implementation block
+(char)dateFormatIsPureLiteral:(id)arg1 ;
+(unsigned long long)locationOfFirstDateFormatCharacter:(id)arg1 ;
+(id)defaultFormattingSymbolsVersionForLocale:(id)arg1 ;
+(char)versionIsForACustomizedLocale:(id)arg1 ;
+(id)defaultFormattingSymbolsForLocale:(id)arg1 ;
+(char)p_localeIsCustomized:(id)arg1 ;
+(id)numberingSystemForLocale:(id)arg1 ;
+(char)isADummyDataSetVersion:(id)arg1 ;
+(void)p_setAllSpaceVariantsOfString:(id)arg1 toCode:(id)arg2 inSymbolToCodeDictionary:(id)arg3 ;
+(char)p_patternsDifferForDF:(id)arg1 uncustomizedDF:(id)arg2 dateStyle:(unsigned long long)arg3 timeStyle:(unsigned long long)arg4 ;
+(id)dummyFormattingSymbolsForTesting:(long long)arg1 ;
-(id)initWithArchive:(const FormattingSymbolsArchive*)arg1 ;
-(void)saveToArchive:(FormattingSymbolsArchive*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)calendar;
-(NSString *)decimalSeparator;
-(NSString *)groupingSeparator;
-(NSString *)currencyCode;
-(NSString *)version;
-(id)initWithLocale:(id)arg1 ;
-(NSString *)currencyDecimalSeparator;
-(NSString *)percentSymbol;
-(NSString *)minusSign;
-(NSString *)plusSign;
-(unsigned long long)groupingSize;
-(unsigned long long)secondaryGroupingSize;
-(NSString *)currencyGroupingSeparator;
-(NSString *)arrayRowSeparator;
-(id)currencySymbolForCurrencyCode:(id)arg1 ;
-(NSString *)listSeparator;
-(NSString *)numberingSystem;
-(NSDictionary *)currencySymbols;
-(NSArray *)months;
-(id)initWithVersion:(id)arg1 calendar:(id)arg2 numberingSystem:(id)arg3 months:(id)arg4 standaloneMonths:(id)arg5 shortMonths:(id)arg6 standaloneShortMonths:(id)arg7 tinyMonths:(id)arg8 standaloneTinyMonths:(id)arg9 weekdays:(id)arg10 standaloneWeekdays:(id)arg11 shortWeekdays:(id)arg12 standaloneShortWeekdays:(id)arg13 tinyWeekdays:(id)arg14 standaloneTinyWeekdays:(id)arg15 quarters:(id)arg16 standaloneQuarters:(id)arg17 shortQuarters:(id)arg18 standaloneShortQuarters:(id)arg19 eras:(id)arg20 longEras:(id)arg21 amSymbol:(id)arg22 pmSymbol:(id)arg23 shortDatePattern:(id)arg24 mediumDatePattern:(id)arg25 longDatePattern:(id)arg26 fullDatePattern:(id)arg27 shortTimePattern:(id)arg28 mediumTimePattern:(id)arg29 longTimePattern:(id)arg30 fullTimePattern:(id)arg31 decimalSeparator:(id)arg32 groupingSeparator:(id)arg33 currencyDecimalSeparator:(id)arg34 currencyGroupingSeparator:(id)arg35 plusSign:(id)arg36 minusSign:(id)arg37 exponentialSymbol:(id)arg38 percentSymbol:(id)arg39 perMilleSymbol:(id)arg40 infinitySymbol:(id)arg41 nanSymbol:(id)arg42 decimalPattern:(id)arg43 scientificPattern:(id)arg44 percentPattern:(id)arg45 currencyPattern:(id)arg46 currencyCode:(id)arg47 currencySymbols:(id)arg48 ;
-(NSArray *)standaloneMonths;
-(NSArray *)shortMonths;
-(NSArray *)standaloneShortMonths;
-(NSArray *)tinyMonths;
-(NSArray *)standaloneTinyMonths;
-(NSArray *)weekdays;
-(NSArray *)standaloneWeekdays;
-(NSArray *)shortWeekdays;
-(NSArray *)standaloneShortWeekdays;
-(NSArray *)tinyWeekdays;
-(NSArray *)standaloneTinyWeekdays;
-(NSArray *)quarters;
-(NSArray *)standaloneQuarters;
-(NSArray *)shortQuarters;
-(NSArray *)standaloneShortQuarters;
-(NSArray *)eras;
-(NSArray *)longEras;
-(NSString *)amSymbol;
-(NSString *)pmSymbol;
-(NSString *)shortDatePattern;
-(NSString *)mediumDatePattern;
-(NSString *)longDatePattern;
-(NSString *)fullDatePattern;
-(NSString *)shortTimePattern;
-(NSString *)mediumTimePattern;
-(NSString *)longTimePattern;
-(NSString *)fullTimePattern;
-(NSString *)exponentialSymbol;
-(NSString *)perMilleSymbol;
-(NSString *)infinitySymbol;
-(NSString *)nanSymbol;
-(NSString *)decimalPattern;
-(NSString *)scientificPattern;
-(NSString *)percentPattern;
-(NSString *)currencyPattern;
-(id)currencyCodeForCurrencySymbol:(id)arg1 ;
-(id)patternStringForDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2 ;
-(void)upgradeIfNecessary:(id)arg1 ;
-(char)hasUserCustomizations;
-(id)halfwidthCurrencySymbolForCurrencyCode:(id)arg1 ;
-(id)patternStringForNumberStyle:(unsigned)arg1 negativeStyle:(int)arg2 ;
-(id)initWithDummyDataSet:(long long)arg1 ;
-(void)p_deriveCalculatedPropertyValues;
-(NSDictionary *)negativeNumberPatterns;
-(id)p_negativeNumberKeyForNumberStyle:(unsigned)arg1 negativeStyle:(int)arg2 ;
-(NSDictionary *)currencyCodesToHalfwidthSymbols;
-(NSDictionary *)currencySymbolsToCodes;
-(void)setCurrencySymbolsToCodes:(NSDictionary *)arg1 ;
-(void)setCurrencyCodesToHalfwidthSymbols:(NSDictionary *)arg1 ;
-(void)setNegativeNumberPatterns:(NSDictionary *)arg1 ;
-(void)setForTestingShortDatePattern:(id)arg1 mediumDatePattern:(id)arg2 longDatePattern:(id)arg3 fullDatePattern:(id)arg4 shortTimePattern:(id)arg5 mediumTimePattern:(id)arg6 longTimePattern:(id)arg7 fullTimePattern:(id)arg8 ;
@end

