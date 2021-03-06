/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/NumbersQuicklook.framework/Versions/A/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSEnumerator, TSKDocumentRoot;


@protocol TSWPHeaderFooterProvider <NSObject>
@property (nonatomic,readonly) char usesSingleHeaderFooter; 
@property (nonatomic,readonly) NSEnumerator * headerFooterFragmentEnumerator; 
@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (nonatomic,readonly) double bodyWidth; 
@required
-(TSKDocumentRoot *)documentRoot;
-(double)bodyWidth;
-(id)headerFooter:(long long)arg1 fragmentAtIndex:(long long)arg2;
-(long long)headerFooterTypeForModel:(id)arg1;
-(long long)headerFragmentIndexForModel:(id)arg1;
-(char)isHeaderFooterEmpty:(long long)arg1;
-(char)isHeaderFooterEmpty:(long long)arg1 fragmentAtIndex:(long long)arg2;
-(char)usesSingleHeaderFooter;
-(NSEnumerator *)headerFooterFragmentEnumerator;

@end

