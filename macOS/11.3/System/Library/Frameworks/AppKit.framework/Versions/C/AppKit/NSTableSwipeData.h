/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTableRowView, NSTableRowViewSpringAnimation, NSTableDeleteScanLineView;

@interface NSTableSwipeData : NSObject {

	long long swipeToDeleteRow;
	NSTableRowView* swipeToDeleteRowView;
	unsigned long long swipeToDeleteEdge;
	double swipeToDeleteTotalSlideAmount;
	double swipeToDeleteCellOffset;
	long long swipeToDeleteToken;
	double swipeToDeleteLastPercentage;
	double swipeToDeletePercentage;
	double swipeToDeleteConsumePercentage;
	double swipeToDeleteButtonPercentage;
	NSTableRowViewSpringAnimation* swipeToDeleteCatchupAnimation;
	NSTableRowViewSpringAnimation* swipeToDeleteFinishAnimation;
	NSTableDeleteScanLineView* swipeToDeleteScanLineView;
	char hasMoreThanOneButtonAndAConsumer;

}

@property (assign) long long swipeToDeleteRow; 
@property (retain) NSTableRowView * swipeToDeleteRowView; 
@property (assign) unsigned long long swipeToDeleteEdge; 
@property (assign) double swipeToDeleteTotalSlideAmount; 
@property (assign) double swipeToDeleteCellOffset; 
@property (assign) long long swipeToDeleteToken; 
@property (assign) double swipeToDeleteLastPercentage; 
@property (assign) double swipeToDeletePercentage; 
@property (assign) double swipeToDeleteConsumePercentage; 
@property (assign) double swipeToDeleteButtonPercentage; 
@property (retain) NSTableRowViewSpringAnimation * swipeToDeleteCatchupAnimation; 
@property (retain) NSTableRowViewSpringAnimation * swipeToDeleteFinishAnimation; 
@property (retain) NSTableDeleteScanLineView * swipeToDeleteScanLineView; 
@property (assign) char hasMoreThanOneButtonAndAConsumer; 
-(void)dealloc;
-(id)init;
-(void)setSwipeToDeleteRow:(long long)arg1 ;
-(void)setSwipeToDeleteRowView:(NSTableRowView *)arg1 ;
-(void)setSwipeToDeleteCatchupAnimation:(NSTableRowViewSpringAnimation *)arg1 ;
-(void)setSwipeToDeleteFinishAnimation:(NSTableRowViewSpringAnimation *)arg1 ;
-(void)setSwipeToDeleteScanLineView:(NSTableDeleteScanLineView *)arg1 ;
-(long long)swipeToDeleteRow;
-(NSTableRowView *)swipeToDeleteRowView;
-(unsigned long long)swipeToDeleteEdge;
-(void)setSwipeToDeleteEdge:(unsigned long long)arg1 ;
-(double)swipeToDeleteTotalSlideAmount;
-(void)setSwipeToDeleteTotalSlideAmount:(double)arg1 ;
-(double)swipeToDeleteCellOffset;
-(void)setSwipeToDeleteCellOffset:(double)arg1 ;
-(long long)swipeToDeleteToken;
-(void)setSwipeToDeleteToken:(long long)arg1 ;
-(double)swipeToDeleteLastPercentage;
-(void)setSwipeToDeleteLastPercentage:(double)arg1 ;
-(double)swipeToDeletePercentage;
-(void)setSwipeToDeletePercentage:(double)arg1 ;
-(double)swipeToDeleteConsumePercentage;
-(void)setSwipeToDeleteConsumePercentage:(double)arg1 ;
-(double)swipeToDeleteButtonPercentage;
-(void)setSwipeToDeleteButtonPercentage:(double)arg1 ;
-(NSTableRowViewSpringAnimation *)swipeToDeleteCatchupAnimation;
-(NSTableRowViewSpringAnimation *)swipeToDeleteFinishAnimation;
-(NSTableDeleteScanLineView *)swipeToDeleteScanLineView;
-(char)hasMoreThanOneButtonAndAConsumer;
-(void)setHasMoreThanOneButtonAndAConsumer:(char)arg1 ;
@end

