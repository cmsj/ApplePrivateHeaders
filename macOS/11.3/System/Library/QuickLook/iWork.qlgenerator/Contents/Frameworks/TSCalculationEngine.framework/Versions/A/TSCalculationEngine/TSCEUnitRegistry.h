/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@interface TSCEUnitRegistry : NSObject
+(void)initialize;
+(int)unitForString:(id)arg1 ;
+(int)unitPrefixForCharacter:(unsigned short)arg1 ;
+(int)binaryUnitPrefixForChars:(unsigned short)arg1 :(unsigned short)arg2 ;
+(double)multiplierForUnitPrefix:(int)arg1 ;
+(int)unitForCurrencyCode:(id)arg1 ;
+(id)currencyCodeForUnit:(int)arg1 ;
+(int)canonicalUnitForDimension:(int)arg1 ;
+(SCD_Struct_TS51)prefixedUnitForString:(id)arg1 ;
+(char)unitIsMetric:(int)arg1 ;
+(TSUDecimal)convert:(const TSUDecimal*)arg1 fromUnit:(SCD_Struct_TS51)arg2 toUnit:(SCD_Struct_TS51)arg3 ;
+(int)dimensionForUnit:(int)arg1 ;
@end

