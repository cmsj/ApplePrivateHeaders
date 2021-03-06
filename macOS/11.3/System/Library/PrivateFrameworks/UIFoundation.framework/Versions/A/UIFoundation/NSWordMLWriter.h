/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSDictionary, NSMutableString, NSFileWrapper, NSZipFileArchive;

@interface NSWordMLWriter : NSObject {

	NSAttributedString* _attrStr;
	NSDictionary* _documentAttrs;
	NSMutableString* _documentStr;
	NSFileWrapper* _fileWrapper;
	NSZipFileArchive* _archive;

}
-(void)dealloc;
-(id)initWithAttributedString:(id)arg1 ;
-(id)archive:(id)arg1 contentsForEntryName:(id)arg2 ;
-(id)archive:(id)arg1 propertiesForEntryName:(id)arg2 ;
-(id)fileWrapper;
-(void)setDocumentAttributes:(id)arg1 ;
-(id)docxFormatData;
-(id)XMLFormatData;
-(id)zipFileArchive;
-(char)_isWordML;
-(void)_writeDocumentProperties;
-(void)_writeFonts;
-(void)_writeDocumentAttributes;
-(void)_writeParagraphStyle:(id)arg1 ;
-(void)_writeCharacterAttributes:(id)arg1 ;
-(id)_coreProperties;
-(id)_appProperties;
-(id)_metaProperties;
-(void)_generateDocument;
@end

