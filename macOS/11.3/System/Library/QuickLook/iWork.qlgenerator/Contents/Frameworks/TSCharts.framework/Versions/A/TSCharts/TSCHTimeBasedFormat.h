/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHDataFormatter.h>
#import <TSCharts/TSCHDataFormatterPersistableStyleObject.h>
#import <TSCharts/TSCHDataFormatterSupportedClientFormatObject.h>
#import <TSCharts/TSCHFormatTypeSupport.h>
#import <TSCharts/TSCHCustomFormatSupport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <TSCharts/TSUDurationFormatInspectorPropertyVendor.h>
#import <TSCharts/TSUDateTimeFormatInspectorPropertyVendor.h>

@class NSNumber, NSSet, NSString, TSKFormat, NSUUID;

@interface TSCHTimeBasedFormat : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport, TSCHCustomFormatSupport, NSCopying, NSMutableCopying, TSUDurationFormatInspectorPropertyVendor, TSUDateTimeFormatInspectorPropertyVendor> {

	TSKFormat* _format;

}

@property (nonatomic,readonly) long long numberOfDecimalPlaces; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned formatType; 
@property (nonatomic,readonly) char isCustom; 
@property (nonatomic,copy,readonly) NSUUID * customFormatListKey; 
@property (nonatomic,copy,readonly) TSKFormat * format; 
@property (nonatomic,copy) TSKFormat * format;                                      //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) char isDate; 
@property (nonatomic,readonly) char isDuration; 
@property (nonatomic,copy,readonly) NSString * dateTimeFormatString; 
@property (nonatomic,readonly) char durationUnitsAutomaticValue; 
@property (nonatomic,readonly) int durationUnitSmallestValue; 
@property (nonatomic,readonly) int durationUnitLargestValue; 
@property (nonatomic,readonly) int durationStyleValue; 
@property (nonatomic,readonly) int durationUnits; 
@property (nonatomic,copy,readonly) NSString * dateFormat; 
@property (nonatomic,copy,readonly) NSString * timeFormat; 
@property (nonatomic,copy,readonly) NSNumber * durationUnitsAutomatic; 
@property (nonatomic,copy,readonly) NSNumber * durationUnitSmallest; 
@property (nonatomic,copy,readonly) NSNumber * durationUnitLargest; 
@property (nonatomic,copy,readonly) NSNumber * durationStyle; 
@property (nonatomic,copy,readonly) NSSet * selectedDurationStyles; 
@property (nonatomic,copy,readonly) NSSet * selectedDateFormats; 
@property (nonatomic,copy,readonly) NSSet * selectedTimeFormats; 
+(id)defaultDateFormat:(id)arg1 ;
+(id)instanceWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
+(char)supportsFormatType:(unsigned)arg1 ;
+(id)defaultDurationFormat:(id)arg1 ;
+(id)timeBasedFormatWithTSKFormat:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)dateFormat;
-(TSKFormat *)format;
-(void)setFormat:(TSKFormat *)arg1 ;
-(char)isCustom;
-(char)isDate;
-(unsigned)formatType;
-(id)customFormatKey;
-(NSString *)timeFormat;
-(id)initWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(FormatStructArchive*)arg1 archiver:(id)arg2 ;
-(char)isCompatibleWithDataFormatter:(id)arg1 ;
-(id)initWithTSKFormat:(id)arg1 ;
-(id)dataFormatterForDocumentRoot:(id)arg1 ;
-(id)customFormat;
-(NSNumber *)durationUnitSmallest;
-(NSNumber *)durationUnitLargest;
-(NSNumber *)durationStyle;
-(long long)numberOfDecimalPlaces;
-(NSUUID *)customFormatListKey;
-(id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2 ;
-(id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2 ;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg1 ;
-(NSString *)dateTimeFormatString;
-(char)isDuration;
-(char)durationUnitsAutomaticValue;
-(int)durationUnits;
-(int)durationStyleValue;
-(id)dateTimeFormat;
-(id)durationFormat;
-(int)durationUnitSmallestValue;
-(int)durationUnitLargestValue;
-(NSNumber *)durationUnitsAutomatic;
-(NSSet *)selectedDurationStyles;
-(NSSet *)selectedDateFormats;
-(NSSet *)selectedTimeFormats;
@end
