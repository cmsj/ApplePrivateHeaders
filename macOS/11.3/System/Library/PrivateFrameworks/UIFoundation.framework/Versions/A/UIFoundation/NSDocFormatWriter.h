/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DocFormatAddressValidation.h>

@class NSAttributedString, NSDictionary, NSMutableData, NSMutableArray, NSRunStorage;

@interface NSDocFormatWriter : NSObject <DocFormatAddressValidation> {

	NSAttributedString* _attrStr;
	NSDictionary* _documentAttrs;
	NSMutableData* _primaryData;
	NSMutableData* _secondaryData;
	NSMutableData* _primaryIndex;
	NSMutableData* _secondaryIndex;
	NSMutableData* _tableOfContents;
	NSMutableData* _documentData;
	NSMutableData* _tableData;
	NSMutableData* _charData;
	NSMutableData* _parData;
	NSMutableData* _summaryInfoData;
	NSMutableData* _documentSummaryInfoData;
	NSMutableArray* _fontArray;
	NSRunStorage* _charFlags;
	char _needsTrailingBreak;

}
-(void)dealloc;
-(id)initWithAttributedString:(id)arg1 ;
-(void)setDocumentAttributes:(id)arg1 ;
-(id)docFormatData;
-(char)validateAddress:(const char*)arg1 numberOfBytes:(unsigned long long)arg2 ;
-(void)_writeCharacterData;
-(void)_writeParagraphData;
-(void)_writeInfoStringForKey:(id)arg1 number:(unsigned)arg2 headerData:(id)arg3 contentsData:(id)arg4 ;
-(void)_writeDocumentData;
-(void)_writeSummaryData:(char)arg1 ;
@end

