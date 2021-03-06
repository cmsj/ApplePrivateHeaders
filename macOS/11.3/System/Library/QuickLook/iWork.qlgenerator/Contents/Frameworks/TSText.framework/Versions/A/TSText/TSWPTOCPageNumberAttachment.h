/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSWPPageNumberAttachment.h>

@class NSString;

@interface TSWPTOCPageNumberAttachment : TSWPPageNumberAttachment {

	NSString* _pageNumber;
	NSString* _bookmarkName;

}

@property (nonatomic,copy) NSString * pageNumber; 
@property (nonatomic,copy) NSString * bookmarkName; 
-(unsigned)elementKind;
-(NSString *)pageNumber;
-(void)setPageNumber:(NSString *)arg1 ;
-(id)stringEquivalent;
-(id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(NSString *)bookmarkName;
-(void)setBookmarkName:(NSString *)arg1 ;
@end

