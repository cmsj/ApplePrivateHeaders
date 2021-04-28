/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <Foundation/NSFormatter.h>

@interface QTHUDTimeFormatter : NSFormatter {

	QTHUDTimeFormatterAuxStorage* _aux;

}
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)locale;
-(id)decimalSeparator;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)editingStringForObjectValue:(id)arg1 ;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(id)minimum;
-(id)maximum;
-(void)setMinimum:(id)arg1 ;
-(void)setMaximum:(id)arg1 ;
-(void)setDecimalSeparator:(id)arg1 ;
-(id)positivePrefix;
-(void)setPositivePrefix:(id)arg1 ;
-(id)positiveSuffix;
-(void)setPositiveSuffix:(id)arg1 ;
-(id)negativePrefix;
-(void)setNegativePrefix:(id)arg1 ;
-(id)negativeSuffix;
-(void)setNegativeSuffix:(id)arg1 ;
-(unsigned long long)minimumIntegerDigits;
-(void)setMinimumIntegerDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumIntegerDigits;
-(void)setMaximumIntegerDigits:(unsigned long long)arg1 ;
-(unsigned long long)minimumFractionDigits;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(id)stringFromTimeInterval:(double)arg1 ;
-(id)componentSeparator;
-(id)stringFromCMTime:(SCD_Struct_QT13)arg1 ;
-(id)stringFromQTTime:(SCD_Struct_QT1)arg1 ;
-(QTTimeFormatterRef)_QTTimeFormatter;
-(SCD_Struct_QT13)CMTimeFromString:(id)arg1 ;
-(SCD_Struct_QT1)QTTimeFromString:(id)arg1 ;
-(double)timeIntervalFromString:(id)arg1 ;
-(char)showsSignInAllComponents;
-(void)setShowsSignInAllComponents:(char)arg1 ;
-(void)setComponentSeparator:(id)arg1 ;
-(unsigned long long)componentOrder;
-(void)setComponentOrder:(unsigned long long)arg1 ;
-(char)usesDigitGroupingSeparator;
-(void)setUsesDigitGroupingSeparator:(char)arg1 ;
-(id)digitGroupingSeparator;
-(void)setDigitGroupingSeparator:(id)arg1 ;
-(id)requiredComponents;
-(void)setRequiredComponents:(id)arg1 ;
-(id)optionalComponents;
-(void)setOptionalComponents:(id)arg1 ;
-(id)nonfiniteSymbol;
-(void)setNonfiniteSymbol:(id)arg1 ;
@end
