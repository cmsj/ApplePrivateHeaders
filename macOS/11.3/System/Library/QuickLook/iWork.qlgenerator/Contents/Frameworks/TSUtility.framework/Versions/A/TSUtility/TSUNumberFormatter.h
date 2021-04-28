/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSULocale, TSUFormattingSymbols, NSArray, NSDictionary, TSUDecimalFormatter, NSMutableDictionary, NSString;

@interface TSUNumberFormatter : NSObject {

	TSULocale* _locale;
	TSUFormattingSymbols* _formattingSymbols;
	NSArray* _decimalFormatters;
	NSDictionary* _currencyFormatters;
	NSArray* _percentageFormatters;
	NSArray* _scientificFormatters;
	TSUDecimalFormatter* _fractionFormatter;
	NSMutableDictionary* _currencyCodeToSymbolMap;
	NSMutableDictionary* _currencyCodeToHalfWidthSymbolMap;
	NSString* _additionalCurrencyCode;
	NSDictionary* _additionalCurrencyCodeFormatters;

}
+(void)initialize;
+(void)lock;
+(void)unlock;
+(id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2 ;
+(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
+(id)formatterForLocale:(id)arg1 ;
+(id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg1 ;
+(int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2 ;
+(void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1 ;
+(id)defaultFormatStringForValueType:(int)arg1 ;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1 ;
+(id)numberFormatStringSpecialSymbols;
-(id)initWithLocale:(id)arg1 ;
-(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
-(char)decimalFromString:(id)arg1 value:(double*)arg2 formatString:(id*)arg3 ;
-(char)currencyFromString:(id)arg1 additionalCurrencyCode:(id)arg2 value:(double*)arg3 formatString:(id*)arg4 currencyCode:(id*)arg5 ;
-(char)percentageFromString:(id)arg1 value:(double*)arg2 formatString:(id*)arg3 ;
-(char)scientificFromString:(id)arg1 value:(double*)arg2 formatString:(id*)arg3 ;
-(char)fractionFromString:(id)arg1 value:(double*)arg2 ;
-(id)defaultFormatStringForValueType:(int)arg1 ;
-(void)p_numberPreferencesChanged:(id)arg1 ;
-(id)p_decimalFormatters;
-(char)p_valueFromString:(id)arg1 formatters:(id)arg2 value:(double*)arg3 formatString:(id*)arg4 ;
-(id)p_findCurrencySymbolInString:(id)arg1 additionalCurrencyCode:(id)arg2 successfullString:(id*)arg3 currencyCode:(id*)arg4 ;
-(id)p_currencyFormatters;
-(id)p_createDictionaryOfCurrencyFormattersForCurrencies:(id)arg1 ;
-(id)p_percentageFormatters;
-(id)p_scientificFormatters;
@end
