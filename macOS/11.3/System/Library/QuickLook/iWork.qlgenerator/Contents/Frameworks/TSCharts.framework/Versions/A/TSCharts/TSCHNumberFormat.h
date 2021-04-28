/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <TSCharts/TSCHDataFormatter.h>
#import <TSCharts/TSCHCustomFormatSupport.h>
#import <TSCharts/TSCHDataFormatterPersistableStyleObject.h>
#import <TSCharts/TSCHDataFormatterSupportedClientFormatObject.h>
#import <TSCharts/TSCHFormatTypeSupport.h>

@class NSUUID, TSKFormat, NSString;

@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport> {

	TSKFormat* _format;
	NSString* _prefixString;
	NSString* _suffixString;

}

@property (nonatomic,copy) TSKFormat * format;                                 //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * prefixString;                            //@synthesize prefixString=_prefixString - In the implementation block
@property (nonatomic,copy) NSString * suffixString;                            //@synthesize suffixString=_suffixString - In the implementation block
@property (nonatomic,readonly) unsigned decimalPlaces; 
@property (nonatomic,copy,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) char useAccountingStyle; 
@property (nonatomic,readonly) int negativeStyle; 
@property (nonatomic,readonly) char showThousandsSeparator; 
@property (nonatomic,readonly) int fractionAccuracy; 
@property (nonatomic,readonly) double scaleFactor; 
@property (nonatomic,readonly) unsigned base; 
@property (nonatomic,readonly) unsigned basePlaces; 
@property (nonatomic,readonly) char baseUseMinusSign; 
@property (nonatomic,readonly) char supportsNumericProperties; 
@property (nonatomic,readonly) char isDecimal; 
@property (nonatomic,readonly) char isCurrency; 
@property (nonatomic,readonly) char isPercentage; 
@property (nonatomic,readonly) char isScientific; 
@property (nonatomic,readonly) char isFraction; 
@property (nonatomic,readonly) char isBase; 
@property (nonatomic,readonly) long long numberOfDecimalPlaces; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isCustom; 
@property (nonatomic,copy,readonly) NSUUID * customFormatListKey; 
@property (nonatomic,readonly) unsigned formatType; 
+(id)instanceWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
+(id)numberFormatWithFormatType:(unsigned)arg1 decimalPlaces:(unsigned)arg2 showThousandsSeparator:(char)arg3 ;
+(id)defaultDecimalNumberFormat;
+(char)supportsFormatType:(unsigned)arg1 ;
+(id)numberFormatWithTSKFormat:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
+(id)defaultDecimalNumberFormatWithPrefixString:(id)arg1 suffixString:(id)arg2 ;
+(int)labelFormatTypeFromTSUFormatType:(unsigned)arg1 ;
+(unsigned)defaultDecimalPlaces;
+(int)defaultFractionAccuracy;
+(id)defaultCurrencyCode;
+(int)defaultNegativeNumberStyle;
+(char)supportsNumericPropertiesForFormatType:(unsigned)arg1 ;
+(char)defaultShowThousandsSeparator;
+(unsigned)defaultBase;
+(unsigned)defaultBasePlaces;
+(char)defaultBaseUseMinusSign;
+(id)customFormatForKey:(id)arg1 documentRoot:(id)arg2 fromPasteboardCustomFormatList:(id)arg3 ;
+(id)automaticDecimalPlaces;
+(id)defaultNumberFormatWithFormatType:(unsigned)arg1 locale:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)currencyCode;
-(TSKFormat *)format;
-(void)setFormat:(TSKFormat *)arg1 ;
-(double)scaleFactor;
-(int)valueType;
-(char)isCurrency;
-(char)isCustom;
-(char)isDate;
-(unsigned)formatType;
-(unsigned)decimalPlaces;
-(char)showThousandsSeparator;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(NSString *)suffixString;
-(unsigned)base;
-(unsigned)basePlaces;
-(char)baseUseMinusSign;
-(id)customFormatKey;
-(NSString *)prefixString;
-(void)setPrefixString:(NSString *)arg1 ;
-(void)setSuffixString:(NSString *)arg1 ;
-(char)useAccountingStyle;
-(char)isBase;
-(id)initWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(FormatStructArchive*)arg1 archiver:(id)arg2 ;
-(char)isCompatibleWithDataFormatter:(id)arg1 ;
-(char)supportsNumericProperties;
-(id)dataFormatterForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2 ;
-(id)customFormat;
-(long long)numberOfDecimalPlaces;
-(NSUUID *)customFormatListKey;
-(id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
-(id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2 ;
-(id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2 ;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg1 ;
-(id)upgradedNumberFormatFromPreUFFOrUnity1_0;
-(id)initWithTSKFormat:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
-(char)isDuration;
-(id)initWithNullableTSKFormat:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
-(char)isFraction;
-(char)isScientific;
-(unsigned)decimalPlacesForNumberFormatter;
-(int)negativeStyleForNumberFormatter;
-(id)p_formattedBodyStringForDouble:(double)arg1 locale:(id)arg2 ;
-(char)isDecimal;
-(char)isPercentage;
-(id)p_formatTypeDescription;
-(char)supportsAutoMinMax;
@end
