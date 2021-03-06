/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/AccordionHostable.h>

@protocol UnifiedFieldButtonHostViewControllerDelegate;
@class NSButton, NSString;

@interface UnifiedFieldButtonHostViewController : NSViewController <AccordionHostable> {

	NSButton* _expandedButton;
	NSButton* _collapsedButton;
	id<UnifiedFieldButtonHostViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UnifiedFieldButtonHostViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char enabled; 
@property (assign,nonatomic,__weak) id<AccordionHostableExpansionRequestHandler> expansionRequestHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UnifiedFieldButtonHostViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UnifiedFieldButtonHostViewControllerDelegate>)arg1 ;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)loadView;
-(void)accordionHost:(id)arg1 viewWillCollapse:(char)arg2 ;
-(void)accordionHost:(id)arg1 viewWillBeInserted:(char)arg2 viewWillExpand:(char)arg3 ;
-(void)accordionHost:(id)arg1 viewWasInserted:(char)arg2 viewDidExpand:(char)arg3 ;
-(void)accordionHost:(id)arg1 viewWillExpand:(char)arg2 ;
-(void)accordionHost:(id)arg1 viewWillBeRemoved:(char)arg2 ;
-(void)handleButtonPress:(id)arg1 ;
-(void)_updateExpandedButtonHidden:(char)arg1 animated:(char)arg2 ;
-(id)initWithCollapsedButton:(id)arg1 ;
@end

