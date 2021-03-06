/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUNumberFormatting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray, NSIndexSet, NSUUID;

@interface TSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying> {

	int _valueType;
	unsigned short _decimalPlaces;
	int _negativeStyle;
	int _fractionAccuracy;
	char _useAccountingStyle;
	char _showThousandsSeparator;
	char _formatStringRequiresSuppressionOfMinusSign;
	char _useScientificFormattingAutomatically;
	char _ignoreDecimalPlacesForZeroValue;
	char _isCustom;
	char _formatStringContainsTabCharacter;
	char _formatContainsSpecialTokens;
	char _formatContainsIntegerToken;
	char _requiresFractionReplacement;
	char _isTextFormat;
	char _baseUseMinusSign;
	unsigned char _base;
	unsigned short _basePlaces;
	unsigned char _numberOfHashDecimalPlaceholders;
	unsigned char _totalNumberOfDecimalPlaceholdersInFormat;
	unsigned short _indexFromRightOfLastDigitPlaceholder;
	unsigned char _minimumIntegerWidth;
	unsigned char _decimalWidth;
	unsigned char _numberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char _numberOfNonSpaceDecimalPlaceholderDigits;
	double _scaleFactor;
	NSString* _formatString;
	NSString* _currencyCode;
	NSArray* _interstitialStrings;
	NSIndexSet* _interstitialStringInsertionIndexes;
	NSString* _formatName;
	NSUUID* _customFormatKey;
	NSString* _prefixString;
	NSString* _suffixString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(char)arg14 isCustom:(char)arg15 formatName:(id)arg16 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)currencyCode;
-(double)scaleFactor;
-(int)valueType;
-(id)stringFromString:(id)arg1 ;
-(char)isEquivalent:(id)arg1 ;
-(id)formatString;
-(char)isCustom;
-(id)formatName;
-(void)setFormatName:(id)arg1 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(char)arg14 isCustom:(char)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(char)arg23 formatName:(id)arg24 customFormatKey:(id)arg25 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(char)arg11 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 isCustom:(char)arg11 ;
-(unsigned short)decimalPlaces;
-(char)usesAccountingStyle;
-(char)showThousandsSeparator;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4 forceSuppressMinusSign:(char)arg5 ;
-(char)hasValidDecimalPlaces;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(char)isTextFormat;
-(char)canFormatText;
-(char)usesTextFormatForValue:(double)arg1 ;
-(char)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)base;
-(unsigned short)basePlaces;
-(char)baseUseMinusSign;
-(char)usesTabs;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 ;
-(id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(char)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(char)arg13 formatName:(id)arg14 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9 ;
-(id)numberFormatBySettingNegativeStyle:(int)arg1 ;
-(id)numberFormatBySettingUseAccountingStyle:(char)arg1 ;
-(id)customFormatKey;
-(id)prefixString;
-(char)useScientificFormattingAutomatically;
-(void)setUseScientificFormattingAutomatically:(char)arg1 ;
-(char)ignoreDecimalPlacesForZeroValue;
-(void)setIgnoreDecimalPlacesForZeroValue:(char)arg1 ;
-(char)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1 ;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 forceSuppressMinusSign:(char)arg3 ;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(char)arg4 ;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3 ;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4 ;
-(id)baseStringFromDouble:(double)arg1 ;
@end

