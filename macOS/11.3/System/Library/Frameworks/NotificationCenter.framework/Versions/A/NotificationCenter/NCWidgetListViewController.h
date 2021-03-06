/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NCWidgetListItemDelegate.h>

@protocol NCWidgetListViewDelegate;
@class NSMapTable, NCListItemViewController, NSView, NSLayoutConstraint, NSMutableIndexSet, NSMutableArray, NSViewController, NCVerticalListController, NSButton, NSArray, NSString;

@interface NCWidgetListViewController : NSViewController <NCWidgetListItemDelegate> {

	char _initialized;
	char _editing;
	char _disableShieldInEditMode;
	char _hideDeleteArea;
	char _confirmDeletes;
	char _haveReorderableItems;
	NSEdgeInsets _innerInsets;
	NSMapTable* _listItemViewControllers;
	NCListItemViewController* _deletingListItemViewController;
	NCListItemViewController* _dragListItemViewController;
	double _dragMouseDownY;
	double _dragContainerViewHeight;
	NSView* _dragPlaceholderView;
	NSView* _dragContainerView;
	NSLayoutConstraint* _dragContainerOffset;
	unsigned long long _dragOriginalIndex;
	unsigned long long _dragCurrentIndex;
	NSMutableIndexSet* _draggableItems;
	NSMutableArray* _contents;
	char _hasDividerLines;
	char _showsAddButtonWhenEditing;
	char _showAll;
	char _showMoreHidden;
	id<NCWidgetListViewDelegate> _delegate;
	unsigned long long _minimumVisibleRowCount;
	NSViewController* _editingAccessoryViewController;
	NSView* _stackContainerView;
	NSView* _otherContainerView;
	NCVerticalListController* _verticalListView;
	NSLayoutConstraint* _stackBottomConstraint;
	NSView* _editingAccessoryView;
	NSView* _footerView;
	NSView* _editingAccessoryContainerView;
	NSButton* _addButton;
	NSButton* _addTextButton;
	NSButton* _showMoreButton;

}

@property (nonatomic,retain) NSViewController * editingAccessoryViewController;              //@synthesize editingAccessoryViewController=_editingAccessoryViewController - In the implementation block
@property (assign,nonatomic) char showAll;                                                   //@synthesize showAll=_showAll - In the implementation block
@property (assign,nonatomic) char showMoreHidden;                                            //@synthesize showMoreHidden=_showMoreHidden - In the implementation block
@property (nonatomic,retain) NSView * stackContainerView;                                    //@synthesize stackContainerView=_stackContainerView - In the implementation block
@property (nonatomic,retain) NSView * otherContainerView;                                    //@synthesize otherContainerView=_otherContainerView - In the implementation block
@property (nonatomic,retain) NCVerticalListController * verticalListView;                    //@synthesize verticalListView=_verticalListView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackBottomConstraint;                     //@synthesize stackBottomConstraint=_stackBottomConstraint - In the implementation block
@property (nonatomic,retain) NSView * editingAccessoryView;                                  //@synthesize editingAccessoryView=_editingAccessoryView - In the implementation block
@property (nonatomic,retain) NSView * footerView;                                            //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) NSView * editingAccessoryContainerView;                         //@synthesize editingAccessoryContainerView=_editingAccessoryContainerView - In the implementation block
@property (nonatomic,retain) NSButton * addButton;                                           //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) NSButton * addTextButton;                                       //@synthesize addTextButton=_addTextButton - In the implementation block
@property (nonatomic,retain) NSButton * showMoreButton;                                      //@synthesize showMoreButton=_showMoreButton - In the implementation block
@property (__weak) id<NCWidgetListViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSArray * contents; 
@property (assign) unsigned long long minimumVisibleRowCount;                                //@synthesize minimumVisibleRowCount=_minimumVisibleRowCount - In the implementation block
@property (assign) char hasDividerLines;                                                     //@synthesize hasDividerLines=_hasDividerLines - In the implementation block
@property (assign) char editing; 
@property (assign) char showsAddButtonWhenEditing;                                           //@synthesize showsAddButtonWhenEditing=_showsAddButtonWhenEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<NCWidgetListViewDelegate>)delegate;
-(void)setDelegate:(id<NCWidgetListViewDelegate>)arg1 ;
-(NSArray *)contents;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)mouseDown:(id)arg1 ;
-(void)setContents:(NSArray *)arg1 ;
-(void)awakeFromNib;
-(id)_nibBundle;
-(char)editing;
-(void)setEditing:(char)arg1 ;
-(void)setFooterView:(NSView *)arg1 ;
-(NSView *)footerView;
-(void)addButtonAction:(id)arg1 ;
-(NSButton *)addButton;
-(void)setAddButton:(NSButton *)arg1 ;
-(NSView *)editingAccessoryView;
-(void)setEditingAccessoryView:(NSView *)arg1 ;
-(NSEdgeInsets)innerInsetsForWidgetListItem:(id)arg1 ;
-(void)widgetListItem:(id)arg1 mouseDown:(id)arg2 ;
-(void)widgetListItem:(id)arg1 mouseDragged:(id)arg2 ;
-(void)widgetListItem:(id)arg1 mouseUp:(id)arg2 ;
-(void)willDeleteWidgetListItem:(id)arg1 ;
-(void)didDeleteWidgetListItem:(id)arg1 ;
-(id)_showAllPrefsKey;
-(void)_displayItems:(BOOL)arg1 ;
-(void)_updateItemViewControllers;
-(void)cancelDeleteAction;
-(void)_updateFooter;
-(char)showMoreHidden;
-(char)showsAddButtonWhenEditing;
-(NSViewController *)editingAccessoryViewController;
-(void)_loadFooterView;
-(void)_updateLineVisibility;
-(id)_listItemViewControllerForRow:(unsigned long long)arg1 ;
-(id)_makeListItemForRow:(long long)arg1 ;
-(unsigned long long)rowForViewController:(id)arg1 ;
-(void)_setupDrag;
-(void)_trackDrag;
-(unsigned long long)minimumVisibleRowCount;
-(void)_updateStackView:(BOOL)arg1 ;
-(void)_updateShowMoreButton;
-(char)hasDividerLines;
-(void)setShowMoreHidden:(char)arg1 ;
-(char)showAll;
-(void)_completeDrag:(BOOL)arg1 ;
-(void)_trackDragEvent:(id)arg1 ;
-(double)_currentDragMouseYForView:(id)arg1 ;
-(void)setShowAll:(char)arg1 ;
-(char)_disableShieldInEditMode;
-(void)set_disableShieldInEditMode:(char)arg1 ;
-(char)_hideDeleteArea;
-(void)set_hideDeleteArea:(char)arg1 ;
-(char)_confirmDeletes;
-(void)set_confirmDeletes:(char)arg1 ;
-(NSEdgeInsets)innerInsets;
-(void)setInnerInsets:(NSEdgeInsets)arg1 ;
-(id)viewControllerAtRow:(unsigned long long)arg1 makeIfNecessary:(char)arg2 ;
-(void)showMoreButtonAction:(id)arg1 ;
-(void)setMinimumVisibleRowCount:(unsigned long long)arg1 ;
-(void)setHasDividerLines:(char)arg1 ;
-(void)setShowsAddButtonWhenEditing:(char)arg1 ;
-(void)setEditingAccessoryViewController:(NSViewController *)arg1 ;
-(NSView *)stackContainerView;
-(void)setStackContainerView:(NSView *)arg1 ;
-(NSView *)otherContainerView;
-(void)setOtherContainerView:(NSView *)arg1 ;
-(NCVerticalListController *)verticalListView;
-(void)setVerticalListView:(NCVerticalListController *)arg1 ;
-(NSLayoutConstraint *)stackBottomConstraint;
-(void)setStackBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSView *)editingAccessoryContainerView;
-(void)setEditingAccessoryContainerView:(NSView *)arg1 ;
-(NSButton *)addTextButton;
-(void)setAddTextButton:(NSButton *)arg1 ;
-(NSButton *)showMoreButton;
-(void)setShowMoreButton:(NSButton *)arg1 ;
@end

