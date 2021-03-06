/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/Versions/A/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSProgressIndicator, FULabel;

@interface FULoadingView : NSView {

	NSProgressIndicator* _progressIndicator;
	FULabel* _loadingLabel;

}

@property (__weak) NSProgressIndicator * progressIndicator;              //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (__weak) FULabel * loadingLabel;                               //@synthesize loadingLabel=_loadingLabel - In the implementation block
-(void)awakeFromNib;
-(NSProgressIndicator *)progressIndicator;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
-(FULabel *)loadingLabel;
-(void)setLoadingLabel:(FULabel *)arg1 ;
@end

