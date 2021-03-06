/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSText/TSPCopying.h>
#import <TSText/TSSStyleClient.h>

@class TSWPStorage, NSString, TSWPParagraphStyle, TSWPListStyle, NSSet;

@interface TSWPTOCEntryData : TSPObject <TSPCopying, TSSStyleClient> {

	TSWPStorage* _storage;
	unsigned long long _paragraphIndex;
	unsigned long long _pageNumber;
	NSString* _numberFormat;
	NSString* _heading;
	TSWPParagraphStyle* _indexedStyle;
	TSWPListStyle* _indexedListStyle;
	unsigned long long _indexedListStart;
	unsigned long long _indexedParagraphLevel;

}

@property (nonatomic,__weak,readonly) TSWPStorage * storage;                          //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) unsigned long long paragraphIndex;                     //@synthesize paragraphIndex=_paragraphIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long pageNumber;                         //@synthesize pageNumber=_pageNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * numberFormat;                          //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,readonly) NSString * heading;                                    //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) TSWPParagraphStyle * indexedStyle;                     //@synthesize indexedStyle=_indexedStyle - In the implementation block
@property (nonatomic,readonly) TSWPListStyle * indexedListStyle;                      //@synthesize indexedListStyle=_indexedListStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long indexedListStart;                   //@synthesize indexedListStart=_indexedListStart - In the implementation block
@property (nonatomic,readonly) unsigned long long indexedParagraphLevel;              //@synthesize indexedParagraphLevel=_indexedParagraphLevel - In the implementation block
@property (nonatomic,readonly) NSSet * referencedStyles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tocEntryDataWithStorage:(id)arg1 paragraphIndex:(unsigned long long)arg2 pageNumber:(unsigned long long)arg3 numberFormat:(id)arg4 heading:(id)arg5 indexedStyle:(id)arg6 indexedListStyle:(id)arg7 indexedListStart:(unsigned long long)arg8 indexedParagraphLevel:(unsigned long long)arg9 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(TSWPStorage *)storage;
-(NSString *)heading;
-(unsigned long long)pageNumber;
-(NSString *)numberFormat;
-(id)copyWithContext:(id)arg1 ;
-(NSSet *)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)saveToArchive:(TOCEntryInstanceArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const TOCEntryInstanceArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSWPParagraphStyle *)indexedStyle;
-(unsigned long long)paragraphIndex;
-(TSWPListStyle *)indexedListStyle;
-(unsigned long long)indexedParagraphLevel;
-(unsigned long long)indexedListStart;
-(id)initWithStorage:(id)arg1 paragraphIndex:(unsigned long long)arg2 pageNumber:(unsigned long long)arg3 numberFormat:(id)arg4 heading:(id)arg5 indexedStyle:(id)arg6 indexedListStyle:(id)arg7 indexedListStart:(unsigned long long)arg8 indexedParagraphLevel:(unsigned long long)arg9 ;
@end

