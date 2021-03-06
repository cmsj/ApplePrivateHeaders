/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface TSWPItemNumbering : NSObject {

	NSDictionary* _defaultPageNumberFormats;
	NSArray* _validFormatNames;
	NSDictionary* _formatTypeInfo;

}
+(id)instance;
+(id)defaultPageNumberFormatForLocale:(id)arg1 ;
+(id)stringFromNumber:(unsigned long long)arg1 forFormatName:(id)arg2 ;
+(id)pageNumberFormatNameForType:(int)arg1 ;
+(int)pageNumberFormatTypeForName:(id)arg1 ;
+(id)stringFromNumber:(unsigned long long)arg1 forPageNumberFormatType:(int)arg2 ;
+(id)allPageNumberFormats;
+(id)pageNumberFormatsForDocLocale:(id)arg1 ;
+(id)displayNameForPageNumberFormat:(id)arg1 ;
+(id)localizedStringForPageNumberFormatNWithLocale:(id)arg1 ;
+(id)localizedStringForPageNumberFormatNofNWithLocale:(id)arg1 ;
+(id)localizedStringForPageNumberFormatPageNWithLocale:(id)arg1 ;
+(id)localizedStringForPageNumberFormatPageNofNWithLocale:(id)arg1 ;
-(id)init;
-(id)p_formatInfoForFormatName:(id)arg1 ;
-(id)p_stringFromNumber:(unsigned long long)arg1 forFormatName:(id)arg2 ;
-(id)p_numericTypeFormatForNumber:(unsigned long long)arg1 digitChars:(id)arg2 ;
-(id)p_symbolicTypeFormatForNumber:(unsigned long long)arg1 symbols:(id)arg2 ;
-(id)p_additiveTypeFormatForNumber:(unsigned long long)arg1 limitsAndSymbols:(id)arg2 ;
-(id)p_pageNumberFormatNameForType:(int)arg1 ;
-(id)p_defaultPageNumberFormatForLocale:(id)arg1 ;
-(id)p_allPageNumberFormats;
-(id)p_pageNumberFormatsForDocLocale:(id)arg1 ;
-(id)p_displayNameForPageNumberFormat:(id)arg1 ;
-(id)p_stringFromNumber:(unsigned long long)arg1 forPageNumberFormatType:(int)arg2 ;
-(int)p_pageNumberFormatTypeForName:(id)arg1 ;
@end

