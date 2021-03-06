/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSOutlineViewDataSource.h>
#import <libobjc.A.dylib/OutlineViewPlusDelegate.h>
#import <libobjc.A.dylib/NSMenuDelegate.h>

@class NSArray, WBSFaviconRequestsController, NSButton, SegmentedControlWithDynamicWidth, NSSegmentedControl, NSOutlineView, NSView, NSPopUpButton, NSTextField, NSLayoutConstraint, NSString;

@interface ManagedWebGLPoliciesViewController : NSViewController <NSOutlineViewDataSource, OutlineViewPlusDelegate, NSMenuDelegate> {

	NSArray* _openWebPagePolicies;
	NSArray* _configuredPolicies;
	WBSFaviconRequestsController* _requestsController;
	char _didAwakeFromNib;
	NSButton* _removeButton;
	SegmentedControlWithDynamicWidth* _removePolicySegmentedControl;
	NSSegmentedControl* _removeButtonSegmentedControl;
	NSOutlineView* _policyOutlineView;
	NSView* _policiesPlaceholderView;
	NSPopUpButton* _defaultPolicyPopUpButton;
	NSView* _warningContentView;
	NSTextField* _warningTextField;
	NSLayoutConstraint* _warningContentViewTopVerticalSpacingConstraint;
	NSLayoutConstraint* _warningContentViewBottomVerticalSpacingConstraint;
	NSLayoutConstraint* _warningContentViewLeadingHorizontalSpacingConstraint;
	NSLayoutConstraint* _warningContentViewTrailingHorizontalSpacingConstraint;

}

@property (assign,nonatomic,__weak) NSButton * removeButton;                                                          //@synthesize removeButton=_removeButton - In the implementation block
@property (assign,nonatomic,__weak) SegmentedControlWithDynamicWidth * removePolicySegmentedControl;                  //@synthesize removePolicySegmentedControl=_removePolicySegmentedControl - In the implementation block
@property (assign,nonatomic,__weak) NSSegmentedControl * removeButtonSegmentedControl;                                //@synthesize removeButtonSegmentedControl=_removeButtonSegmentedControl - In the implementation block
@property (assign,nonatomic,__weak) NSOutlineView * policyOutlineView;                                                //@synthesize policyOutlineView=_policyOutlineView - In the implementation block
@property (assign,nonatomic,__weak) NSView * policiesPlaceholderView;                                                 //@synthesize policiesPlaceholderView=_policiesPlaceholderView - In the implementation block
@property (assign,nonatomic,__weak) NSPopUpButton * defaultPolicyPopUpButton;                                         //@synthesize defaultPolicyPopUpButton=_defaultPolicyPopUpButton - In the implementation block
@property (nonatomic,retain) NSView * warningContentView;                                                             //@synthesize warningContentView=_warningContentView - In the implementation block
@property (nonatomic,retain) NSTextField * warningTextField;                                                          //@synthesize warningTextField=_warningTextField - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * warningContentViewTopVerticalSpacingConstraint;                     //@synthesize warningContentViewTopVerticalSpacingConstraint=_warningContentViewTopVerticalSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * warningContentViewBottomVerticalSpacingConstraint;                  //@synthesize warningContentViewBottomVerticalSpacingConstraint=_warningContentViewBottomVerticalSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * warningContentViewLeadingHorizontalSpacingConstraint;               //@synthesize warningContentViewLeadingHorizontalSpacingConstraint=_warningContentViewLeadingHorizontalSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * warningContentViewTrailingHorizontalSpacingConstraint;              //@synthesize warningContentViewTrailingHorizontalSpacingConstraint=_warningContentViewTrailingHorizontalSpacingConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cautionImage;
+(id)_allowWithSecurityRestrictionsPolicyString;
+(id)_allowNoSecurityRestrictionsPolicyString;
+(id)_policyItems;
+(id)_askPolicyString;
+(id)_blockPolicyString;
-(void)dealloc;
-(id)init;
-(void)awakeFromNib;
-(void)clear:(id)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)menuDidClose:(id)arg1 ;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(NSButton *)removeButton;
-(void)setRemoveButton:(NSButton *)arg1 ;
-(NSTextField *)warningTextField;
-(void)setWarningTextField:(NSTextField *)arg1 ;
-(char)outlineView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(char)outlineView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(char)outlineView:(id)arg1 keyDown:(id)arg2 ;
-(void)_didChangeManagedWebGLPolicies:(id)arg1 ;
-(NSOutlineView *)policyOutlineView;
-(void)_setUpPolicyPopUpButtonIfNeeded:(id)arg1 ;
-(void)_setUpOutlineHeaderView;
-(void)_setUpPolicies;
-(void)_setCautionImageOnMenuItemsIfNeeded:(id)arg1 ;
-(void)_updateClearButtonState;
-(NSView *)policiesPlaceholderView;
-(void)defaultPolicyDidChange:(id)arg1 ;
-(void)policyDidChange:(id)arg1 ;
-(SegmentedControlWithDynamicWidth *)removePolicySegmentedControl;
-(void)setRemovePolicySegmentedControl:(SegmentedControlWithDynamicWidth *)arg1 ;
-(NSSegmentedControl *)removeButtonSegmentedControl;
-(void)setRemoveButtonSegmentedControl:(NSSegmentedControl *)arg1 ;
-(void)setPolicyOutlineView:(NSOutlineView *)arg1 ;
-(void)setPoliciesPlaceholderView:(NSView *)arg1 ;
-(NSPopUpButton *)defaultPolicyPopUpButton;
-(void)setDefaultPolicyPopUpButton:(NSPopUpButton *)arg1 ;
-(NSView *)warningContentView;
-(void)setWarningContentView:(NSView *)arg1 ;
-(NSLayoutConstraint *)warningContentViewTopVerticalSpacingConstraint;
-(void)setWarningContentViewTopVerticalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)warningContentViewBottomVerticalSpacingConstraint;
-(void)setWarningContentViewBottomVerticalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)warningContentViewLeadingHorizontalSpacingConstraint;
-(void)setWarningContentViewLeadingHorizontalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)warningContentViewTrailingHorizontalSpacingConstraint;
-(void)setWarningContentViewTrailingHorizontalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
@end

