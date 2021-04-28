/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSApplication/TSApplication-Structs.h>
@class NSMutableArray;

@interface TSAPdfHyperlinkController : NSObject {

	NSMutableArray* mHyperlinks;
	NSMutableArray* mDestinations;

}
-(id)init;
-(CGRect)canvasRect;
-(void)addHyperlinksForRep:(id)arg1 ;
-(void)commitHyperlinksToPDF:(CGContextRef)arg1 targetRect:(CGRect)arg2 ;
-(id)destinationFromUrl:(id)arg1 ;
-(char)isDestination:(id)arg1 ;
-(char)ignoreUrl:(id)arg1 ;
-(id)p_hyperlinkRegionsForRep:(id)arg1 ;
-(id)p_chopBezierIntoRects:(id)arg1 ;
-(void)p_combineSimilarElements:(id)arg1 ;
-(void)p_commitDestinationToPDF:(id)arg1 cgrect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)p_commitUrlToPDF:(id)arg1 cgrect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)addHyperlinkForRect:(CGRect)arg1 withUrl:(id)arg2 ;
@end
