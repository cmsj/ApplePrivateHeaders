/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/SVSTranscriptViewControllerDataSource.h>
#import <libobjc.A.dylib/SVSTranscriptViewControllerDelegate.h>
#import <SiriUI/SiriUINavigationControllerDelegate.h>

@protocol SVSTranscriptStackViewControllerDataSource, SVSTranscriptStackViewControllerDelegate;
@class SiriUINavigationController, NSMutableArray, NSTimer, SVSTranscriptStackView, NSArray, NSString;

@interface SVSTranscriptStackViewController : NSViewController <SVSTranscriptViewControllerDataSource, SVSTranscriptViewControllerDelegate, SiriUINavigationControllerDelegate> {

	id<SVSTranscriptStackViewControllerDataSource> _dataSource;
	id<SVSTranscriptStackViewControllerDelegate> _delegate;
	SiriUINavigationController* _navigationController;
	NSMutableArray* _navigationTransitionQueue;
	NSTimer* _navigationTransitionTimer;

}

@property (nonatomic,retain) SVSTranscriptStackView * view; 
@property (getter=_navigationController,nonatomic,readonly) SiriUINavigationController * navigationController;                                             //@synthesize navigationController=_navigationController - In the implementation block
@property (setter=_navigationTransitionQueue:,getter=_navigationTransitionQueue,nonatomic,retain) NSMutableArray * navigationTransitionQueue;              //@synthesize navigationTransitionQueue=_navigationTransitionQueue - In the implementation block
@property (setter=_setNavigationTransitionTimer:,getter=_navigationTransitionTimer,nonatomic,retain) NSTimer * navigationTransitionTimer;                  //@synthesize navigationTransitionTimer=_navigationTransitionTimer - In the implementation block
@property (nonatomic,readonly) NSArray * requestContext; 
@property (nonatomic,readonly) char transcriptStartIsVisible; 
@property (nonatomic,readonly) char transcriptEndIsVisible; 
@property (assign,nonatomic,__weak) id<SVSTranscriptStackViewControllerDataSource> dataSource;                                                             //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SVSTranscriptStackViewControllerDelegate> delegate;                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createViewControllerWithItemIdentifier:(id)arg1 ;
-(void)dealloc;
-(id<SVSTranscriptStackViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SVSTranscriptStackViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<SVSTranscriptStackViewControllerDataSource>)dataSource;
-(void)reloadData;
-(void)setDataSource:(id<SVSTranscriptStackViewControllerDataSource>)arg1 ;
-(void)loadView;
-(id)_navigationController;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(id)_conversation;
-(NSArray *)requestContext;
-(double)contentHeight;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)didChangeWindowHeight:(char)arg1 ;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg1 ;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(char)arg2 ;
-(void)siriRequestWillStart;
-(void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2 ;
-(void)removeItemsWithIdentifiers:(id)arg1 atIndexPaths:(id)arg2 parentItemIdentifiers:(id)arg3 ;
-(void)presentationStateDidChangeForItemsAtIndexPaths:(id)arg1 ;
-(void)svssvc_setConversation:(id)arg1 ;
-(void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 ;
-(id)identifierOfLastDisplayedChildOfItemWithIdentifier:(id)arg1 ;
-(void)showRootTranscript;
-(void)pinItemWithIdentifier:(id)arg1 ;
-(void)siriDidDetectSpeechStartpoint;
-(void)siriStoppedFingerprintingMusic;
-(void)siriBeganFingerprintingMusic;
-(void)endEditingAndCorrect:(char)arg1 ;
-(void)showTranscriptEnd;
-(id)svssvc_conversation;
-(id)_topTranscriptViewController;
-(void)navigationController:(id)arg1 didLayoutViewController:(id)arg2 ;
-(long long)initialDisplayTypeForTranscriptViewController:(id)arg1 ;
-(char)transcriptViewControllerCanShowHelp:(id)arg1 ;
-(void)showHelpForTranscriptViewController:(id)arg1 ;
-(void)transcriptViewControllerDidChangeContentHeight:(id)arg1 ;
-(long long)siriStateForTranscriptViewController:(id)arg1 ;
-(char)transcriptEndIsVisible;
-(id)conversationItemListForTranscriptViewController:(id)arg1 ;
-(void)transcriptViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transcriptViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transcriptDidPunchout;
-(id)domainObjectStoreForTranscriptViewController:(id)arg1 ;
-(id)effectiveCoreLocationBundleForTranscriptViewController:(id)arg1 ;
-(char)transcriptViewControllerShouldPreventUserInteraction:(id)arg1 ;
-(void)transcriptViewControllerWillBeginEditing:(id)arg1 ;
-(void)transcriptViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3 ;
-(void)transcriptViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(long long)arg4 userSelectionResults:(id)arg5 ;
-(double)contentWidthForTranscriptViewController:(id)arg1 ;
-(void)cancelRequestForTranscriptViewController:(id)arg1 ;
-(void)transcriptViewController:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)transcriptViewController:(id)arg1 setStatusViewHidden:(char)arg2 ;
-(void)transcriptViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)transcriptViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)transcriptViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transcriptViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelSpeakingForTranscriptViewController:(id)arg1 ;
-(void)transcriptViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2 ;
-(void)transcriptViewController:(id)arg1 stashSnippetControllerCard:(id)arg2 ;
-(double)windowWidthForTranscriptViewController:(id)arg1 ;
-(void)transcriptViewController:(id)arg1 didShowSnippetWithIdentifier:(id)arg2 metricsContext:(id)arg3 forInterval:(double)arg4 ;
-(char)transcriptStartIsVisible;
-(id)_createViewControllerWithItemIdentifier:(id)arg1 ;
-(id)_navigationTransitionTimer;
-(id)_transcriptViewControllers;
-(id)_transcriptViewControllerDisplayingChildrenOfItemWithIdentifier:(id)arg1 ;
-(id)_indexPathForItemWithIdentifier:(id)arg1 ;
-(id)_transcriptViewControllerDisplayingChildrenOfItemAtIndexPath:(id)arg1 ;
-(void)_queuePopToViewController:(id)arg1 animated:(char)arg2 ;
-(id)_identifierOfItemAtIndexPath:(id)arg1 ;
-(id)_indexPathForParentOfItemsInTranscriptViewController:(id)arg1 ;
-(void)_queuePushViewController:(id)arg1 animated:(char)arg2 ;
-(void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_navigationTransitionQueue;
-(void)_processTransitionQueue;
-(void)_setNavigationTransitionTimer:(id)arg1 ;
-(id)_indexPathForItemAtIndex:(long long)arg1 inTranscriptViewController:(id)arg2 ;
-(id)_indexPathForViewControllerDisplayingItemAtIndexPath:(id)arg1 ;
-(void)transcriptViewController:(id)arg1 showSiriStatusWithText:(id)arg2 speakableDescription:(id)arg3 ;
-(void)transcriptViewController:(id)arg1 didScrollForInterval:(double)arg2 ;
-(void)pinLastDisplayedChildOfItemWithIdentifier:(id)arg1 ;
-(id)_indexPathsForItemsAtIndexes:(id)arg1 inTranscriptViewController:(id)arg2 ;
-(void)_navigationTransitionQueue:(id)arg1 ;
@end

