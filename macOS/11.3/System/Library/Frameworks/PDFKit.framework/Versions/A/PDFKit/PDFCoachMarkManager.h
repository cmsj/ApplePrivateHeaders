/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFCoachMarkManagerPrivate;

@interface PDFCoachMarkManager : NSObject {

	PDFCoachMarkManagerPrivate* _private;

}
-(void)_cleanCoachMarks;
-(id)_pageLayerForPage:(id)arg1 ;
-(id)initWithPDFRenderingProperties:(id)arg1 ;
-(void)createCoachMarkForPage:(id)arg1 atFrame:(CGRect)arg2 ;
-(void)pageLayerDidAppear:(id)arg1 ;
-(void)pageLayerWillRemove:(id)arg1 ;
@end

