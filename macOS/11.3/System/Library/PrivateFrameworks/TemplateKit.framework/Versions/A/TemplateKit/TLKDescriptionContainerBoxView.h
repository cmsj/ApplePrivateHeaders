/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextView;

@interface TLKDescriptionContainerBoxView : NUIContainerBoxView {

	TLKTextView* _viewForFirstAndLastBaseline;

}

@property (nonatomic,retain) TLKTextView * viewForFirstAndLastBaseline;              //@synthesize viewForFirstAndLastBaseline=_viewForFirstAndLastBaseline - In the implementation block
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(TLKTextView *)viewForFirstAndLastBaseline;
-(void)setViewForFirstAndLastBaseline:(TLKTextView *)arg1 ;
@end

