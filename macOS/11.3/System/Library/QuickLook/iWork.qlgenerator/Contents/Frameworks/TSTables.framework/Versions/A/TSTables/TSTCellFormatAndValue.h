/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSTables/TSTCellDiffing.h>
#import <TSTables/TSSPropertyCommandSerializing.h>

@class NSObject, NSString, TSWPStorage, TSKFormat, NSDate;

@interface TSTCellFormatAndValue : NSObject <NSCopying, TSTCellDiffing, TSSPropertyCommandSerializing> {

	unsigned _valueType : 8;
	char _useAllSpareFormats;
	char _suppressApplyValue;
	char _applySpareFormatOnly;
	unsigned _spareFormatType;
	char _boolValue;
	TSUDecimal _decimalValue;
	NSObject* _objValue;
	NSString* _formattedValue;
	TSWPStorage* _formattedRichTextStorage;
	unsigned short _explicitFlags;
	unsigned _cellFormatKind;
	TSKFormat* _numberFormat;
	TSKFormat* _currencyFormat;
	TSKFormat* _dateFormat;
	TSKFormat* _durationFormat;
	TSKFormat* _booleanFormat;
	TSKFormat* _textFormat;

}

@property (nonatomic,copy,readonly) NSDate * dateValue; 
@property (nonatomic,readonly) int valueType; 
@property (nonatomic,readonly) TSUDecimal numberOrCurrencyDecimalValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,readonly) TSWPStorage * richTextOrErrorTextStorageValue; 
@property (nonatomic,readonly) char isFormulaSyntaxError; 
@property (nonatomic,readonly) char isApplySpareFormatOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellDiffProperties;
+(id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(char)arg2 ;
+(id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(char)arg2 forceNoContent:(char)arg3 ;
+(id)formatAndValueFromRichTextCell:(id)arg1 updatingStorageWithBlock:(/*^block*/id)arg2 ;
+(id)formatAndValueFromCell:(id)arg1 applySpareFormatOnly:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(NSDate *)dateValue;
-(int)valueType;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
-(id)getCurrentFormat;
-(TSUDecimal)numberOrCurrencyDecimalValue;
-(id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4 ;
-(id)cellValueWithLocale:(id)arg1 ;
-(id)initFromCell:(id)arg1 useAllSpareFormats:(char)arg2 ;
-(id)initFromCell:(id)arg1 useAllSpareFormats:(char)arg2 forceNoContent:(char)arg3 applySpareFormatOnly:(unsigned)arg4 ;
-(id)p_copyStorage:(id)arg1 ;
-(TSWPStorage *)richTextOrErrorTextStorageValue;
-(id)copyForApplyingNoContentWithSuppressApplyValue:(char)arg1 ;
-(id)p_formatForFormatType:(unsigned)arg1 ;
-(id)copyForApplyingNoContent;
-(id)copyForNotApplyingValue;
-(char)isFormulaSyntaxError;
-(char)isApplySpareFormatOnly;
-(char)hasStringContentMatchingCell:(id)arg1 ;
-(void)applyToCell:(id)arg1 ;
@end

