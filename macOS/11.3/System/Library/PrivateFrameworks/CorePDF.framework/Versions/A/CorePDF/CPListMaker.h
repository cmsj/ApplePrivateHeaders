/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPLayoutArea, NSArray, CPList;

@interface CPListMaker : NSObject <CPDisposable> {

	CPLayoutArea* area;
	NSArray* spacers;
	unsigned textLineCount;
	id* textLines;
	CPList* list;

}
+(void)makeListsInPage:(id)arg1 ;
+(void)makeListsInLayoutArea:(id)arg1 ;
+(void)makeListsInChunk:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)dispose;
-(void)fetchTextLine:(id)arg1 ;
-(void)makeListItemFrom:(CPListInfo*)arg1 stopAt:(unsigned)arg2 ;
-(char)makeListFrom:(CPListInfo*)arg1 ;
-(void)fetchTextLinesInColumn:(id)arg1 ;
-(void)makeListsInColumn:(id)arg1 ;
-(id)initWithLayoutArea:(id)arg1 ;
-(void)makeLists;
@end

