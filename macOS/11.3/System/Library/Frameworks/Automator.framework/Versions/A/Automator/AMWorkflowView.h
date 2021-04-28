/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/AMWorkflowControllerDelegate.h>

@class AMWorkflowController, NSMutableArray, NSArray, NSString, AMVariablesEditorWindowController, NSUndoManager, AMHeaderViewController;

@interface AMWorkflowView : NSView <AMWorkflowControllerDelegate> {

	AMWorkflowController* _workflowController;
	NSMutableArray* _actionViewControllers;
	NSArray* _draggedActionViews;
	NSString* _messageString;
	id _unused;
	id _variablesEditorController;
	id _showWhenRunController;
	struct {
		unsigned ignoreSubviewFrameChanges : 1;
		unsigned editingEnabled : 1;
		unsigned reserved : 30;
	}  _flags;
	unsigned long long _draggingIndex;
	CGRect _selectionRect;
	id _future[4];

}

@property (copy) NSString * messageString;                                                                                  //@synthesize messageString=_messageString - In the implementation block
@property (assign) unsigned long long draggingIndex;                                                                        //@synthesize draggingIndex=_draggingIndex - In the implementation block
@property (assign) _AMWorkflowViewFlags flags;                                                                              //@synthesize flags=_flags - In the implementation block
@property (assign) CGRect selectionRect;                                                                                    //@synthesize selectionRect=_selectionRect - In the implementation block
@property (retain) NSArray * draggedActionViews;                                                                            //@synthesize draggedActionViews=_draggedActionViews - In the implementation block
@property (retain) NSMutableArray * actionViewControllers;                                                                  //@synthesize actionViewControllers=_actionViewControllers - In the implementation block
@property (nonatomic,readonly) AMVariablesEditorWindowController * variablesEditorController; 
@property (nonatomic,readonly) NSMutableArray * actionViews; 
@property (nonatomic,readonly) char _isEditable; 
@property (nonatomic,readonly) NSArray * selectedActionViews; 
@property (nonatomic,readonly) NSArray * _visibleActionViews; 
@property (nonatomic,readonly) CGRect actionViewsFrame; 
@property (nonatomic,readonly) NSUndoManager * _undoManager; 
@property (nonatomic,readonly) AMHeaderViewController * _headerViewController; 
@property (assign,setter=_setWorkflowController:,nonatomic,__weak) AMWorkflowController * _workflowController; 
@property (getter=isEditable) char editable; 
@property (assign,nonatomic,__weak) AMWorkflowController * workflowController;                                              //@synthesize workflowController=_workflowController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_AMWorkflowViewFlags)flags;
-(void)dealloc;
-(void)reset:(id)arg1 ;
-(void)setFlags:(_AMWorkflowViewFlags)arg1 ;
-(char)isFlipped;
-(void)updateConstraints;
-(char)acceptsFirstResponder;
-(id)accessibilityAttributeNames;
-(char)validateMenuItem:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(char)isEditable;
-(char)requiresConstraintBasedLayout;
-(void)setEditable:(char)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(AMHeaderViewController *)_headerViewController;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)viewWillStartLiveResize;
-(void)viewDidEndLiveResize;
-(void)deselectAll:(id)arg1 ;
-(NSUndoManager *)_undoManager;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(char)_isEditable;
-(void)_close;
-(id)actions;
-(void)modified;
-(NSString *)messageString;
-(void)setMessageString:(NSString *)arg1 ;
-(void)addActions:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(CGRect)selectionRect;
-(id)pasteboardTypes;
-(void)deleteAll:(id)arg1 ;
-(void)removeAction:(id)arg1 ;
-(void)_addAction:(id)arg1 ;
-(void)_updateHeaderView;
-(id)connectors;
-(void)editVariable:(id)arg1 withControl:(id)arg2 ;
-(unsigned long long)indexOfSubview:(id)arg1 ;
-(AMWorkflowController *)workflowController;
-(void)_clearHeaderView;
-(void)moveActionAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setWorkflowController:(AMWorkflowController *)arg1 ;
-(void)editVariable:(id)arg1 ;
-(void)loadWorkflow:(id)arg1 ;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowControllerWillStep:(id)arg1 ;
-(void)workflowControllerDidStop:(id)arg1 ;
-(void)workflowController:(id)arg1 willRunAction:(id)arg2 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(void)workflowController:(id)arg1 didError:(id)arg2 ;
-(id)viewForAction:(id)arg1 ;
-(void)actionViewDidChangeConnections:(id)arg1 ;
-(void)actionViewDidChangeInput:(id)arg1 ;
-(void)actionViewDidChangeOutput:(id)arg1 ;
-(void)actionViewWasModified:(id)arg1 ;
-(void)actionViewWasRenamed:(id)arg1 ;
-(void)setDraggingIndex:(unsigned long long)arg1 ;
-(void)setActionViewControllers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)actionViewControllers;
-(void)releaseActionView:(id)arg1 ;
-(NSMutableArray *)actionViews;
-(void)removeActionView:(id)arg1 ;
-(void)addActionWithoutOpening:(id)arg1 ;
-(AMWorkflowController *)_workflowController;
-(void)_setActionConstraints:(id)arg1 ;
-(id)_actionConstraints;
-(unsigned long long)draggingIndex;
-(void)selectActionView:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)invalidateActionLayout;
-(void)invalidateActionView:(id)arg1 ;
-(void)selectNextActionAfterIndex:(unsigned long long)arg1 ;
-(NSArray *)selectedActionViews;
-(void)scrollToAction:(id)arg1 ;
-(void)disableActionView:(id)arg1 ;
-(void)enableActionView:(id)arg1 ;
-(void)disableActionViews:(id)arg1 ;
-(void)enableActionViews:(id)arg1 ;
-(void)selectActionViews:(id)arg1 ;
-(void)deselectActionView:(id)arg1 ;
-(void)_selectActionView:(id)arg1 ;
-(void)setSelectionRect:(CGRect)arg1 ;
-(id)objectsIntersectingRect:(CGRect)arg1 ;
-(void)_uniqueSelectActionView:(id)arg1 ;
-(void)dragSelectWithEvent:(id)arg1 ;
-(void)closeDetailsWindow;
-(void)deleteActionViews:(id)arg1 ;
-(char)makeActionViewFirstResponderIfPossible:(id)arg1 ;
-(void)duplicateActionViews:(id)arg1 ;
-(void)toggleActionViewInputIgnored:(id)arg1 ;
-(void)renameActionView:(id)arg1 ;
-(void)showActionViewInFinder:(id)arg1 ;
-(void)showActionViewInLibrary:(id)arg1 ;
-(void)moveActionViewsUp:(id)arg1 ;
-(void)moveActionViewsDown:(id)arg1 ;
-(void)toggleActionViewsResults:(id)arg1 ;
-(void)toggleActionViewsEnabled:(id)arg1 ;
-(char)copyActions:(id)arg1 withPasteboard:(id)arg2 ;
-(void)pasteWithPasteboard:(id)arg1 ;
-(void)addActionsInPasteboard:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(AMVariablesEditorWindowController *)variablesEditorController;
-(void)setDraggedActionViews:(NSArray *)arg1 ;
-(unsigned long long)dragOperationForDraggingInfo:(id)arg1 ;
-(id)subviewAtPoint:(CGPoint)arg1 ;
-(NSArray *)draggedActionViews;
-(void)addVariablesInPasteboard:(id)arg1 atIndex:(unsigned long long)arg2 draggingInfo:(id)arg3 ;
-(id)addActionWithBundleID:(id)arg1 atIndex:(unsigned long long)arg2 withParameters:(id)arg3 ;
-(void)addActionsFromDescriptions:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeHeaderView:(id)arg1 ;
-(void)_setHeaderViewController:(id)arg1 ;
-(void)addHeaderView:(id)arg1 ;
-(void)_setWorkflowController:(id)arg1 ;
-(void)deleteActionView:(id)arg1 ;
-(void)moveActionViewUp:(id)arg1 ;
-(void)moveActionViewDown:(id)arg1 ;
-(void)collapseAll:(id)arg1 ;
-(void)expandAll:(id)arg1 ;
-(void)extendSelectionToActionView:(id)arg1 ;
-(void)selectAllToAction:(id)arg1 ;
-(NSArray *)_visibleActionViews;
-(void)redisplayAction:(id)arg1 ;
-(CGRect)actionViewsFrame;
-(void)duplicateActionView:(id)arg1 ;
-(void)dragViewStarted;
@end
