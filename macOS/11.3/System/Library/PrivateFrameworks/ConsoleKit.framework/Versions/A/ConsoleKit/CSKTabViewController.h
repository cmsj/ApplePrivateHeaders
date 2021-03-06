/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol CSKTabViewControllerDelegate, CSKTabViewControllerDataSource;
@class NSView, NSSegmentedControl, NSBox, NSLayoutConstraint;

@interface CSKTabViewController : NSViewController {

	char _showsSeparator;
	id<CSKTabViewControllerDelegate> _delegate;
	id<CSKTabViewControllerDataSource> _datasource;
	NSView* _contentView;
	NSSegmentedControl* _segmentedControl;
	NSBox* _horizontalSeparator;
	NSLayoutConstraint* _separatorAndContentVerticalConstraint;
	long long _currentSegment;

}

@property (assign,nonatomic,__weak) NSView * contentView;                                                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) NSSegmentedControl * segmentedControl;                                   //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic,__weak) NSBox * horizontalSeparator;                                             //@synthesize horizontalSeparator=_horizontalSeparator - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * separatorAndContentVerticalConstraint;              //@synthesize separatorAndContentVerticalConstraint=_separatorAndContentVerticalConstraint - In the implementation block
@property (assign,nonatomic) long long currentSegment;                                                       //@synthesize currentSegment=_currentSegment - In the implementation block
@property (assign,nonatomic,__weak) id<CSKTabViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSKTabViewControllerDataSource> datasource;                           //@synthesize datasource=_datasource - In the implementation block
@property (assign,nonatomic) char showsSeparator;                                                            //@synthesize showsSeparator=_showsSeparator - In the implementation block
-(id)init;
-(id<CSKTabViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSKTabViewControllerDelegate>)arg1 ;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(NSSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(NSSegmentedControl *)arg1 ;
-(id<CSKTabViewControllerDataSource>)datasource;
-(void)setDatasource:(id<CSKTabViewControllerDataSource>)arg1 ;
-(void)setShowsSeparator:(char)arg1 ;
-(void)setCurrentSegment:(long long)arg1 ;
-(NSBox *)horizontalSeparator;
-(void)setHorizontalSeparator:(NSBox *)arg1 ;
-(long long)currentSegment;
-(char)showsSeparator;
-(void)_showSeparator:(char)arg1 ;
-(void)_updateContentViewWithCurrentSegment;
-(NSLayoutConstraint *)separatorAndContentVerticalConstraint;
-(void)segmentedControlDidClick:(id)arg1 ;
-(void)setSeparatorAndContentVerticalConstraint:(NSLayoutConstraint *)arg1 ;
@end

