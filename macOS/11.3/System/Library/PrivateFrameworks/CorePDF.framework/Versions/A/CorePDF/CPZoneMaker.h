/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPCharSequence;

@interface CPZoneMaker : NSObject {

	CPCharSequence* charactersOnPage;

}
-(void)dealloc;
-(void)makeZonesIn:(id)arg1 ;
-(unsigned)categorizeGraphicsIn:(id)arg1 ;
-(void)mergeQualifyingRectanglesIn:(id)arg1 ;
-(void)makeZonesWithBoundaryIn:(id)arg1 ;
-(void)cutHorizontalBorders:(id)arg1 whereObscuredByShape:(id)arg2 ;
-(void)cutVerticalBorders:(id)arg1 whereObscuredByShape:(id)arg2 ;
-(void)addZonesWithBoundaryIn:(id)arg1 withBorder:(id)arg2 ;
-(id)newZoneForStraddlersFrom:(id)arg1 ;
-(void)addObjectsToStraddler:(id)arg1 from:(id)arg2 ;
-(char)overlap:(id)arg1 with:(id)arg2 ;
@end

