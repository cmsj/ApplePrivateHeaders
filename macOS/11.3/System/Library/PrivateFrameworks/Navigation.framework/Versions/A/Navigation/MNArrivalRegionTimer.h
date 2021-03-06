/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNArrivalRegionTimerDelegate;
@class GEOArrivalRegion, NSTimer;

@interface MNArrivalRegionTimer : NSObject {

	GEOArrivalRegion* _arrivalRegion;
	NSTimer* _timer;
	id<MNArrivalRegionTimerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNArrivalRegionTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<MNArrivalRegionTimerDelegate>)delegate;
-(void)setDelegate:(id<MNArrivalRegionTimerDelegate>)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(id)initWithArrivalRegion:(id)arg1 ;
@end

