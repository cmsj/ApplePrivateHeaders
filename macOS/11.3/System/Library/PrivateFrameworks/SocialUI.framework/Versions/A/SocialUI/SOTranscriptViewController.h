/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SOChatViewController.h>
#import <libobjc.A.dylib/QLPreviewPanelDelegate.h>
#import <libobjc.A.dylib/QLPreviewPanelDataSource.h>
#import <libobjc.A.dylib/NSPopoverDelegate.h>
#import <libobjc.A.dylib/NSTouchBarDelegate.h>
#import <libobjc.A.dylib/SOStickerViewerControllerDelegate.h>

@class NSTouchBarItem, IMMessagePartChatItem, SOInputLineViewController, NSString, IMAggregateAcknowledgmentChatItem, SOStickerViewerController, NSOrderedSet, NSScrollView, IMChat;

@interface SOTranscriptViewController : SOChatViewController <QLPreviewPanelDelegate, QLPreviewPanelDataSource, NSPopoverDelegate, NSTouchBarDelegate, SOStickerViewerControllerDelegate> {

	unsigned long long _mousedownCount;
	NSTouchBarItem* _acknowledgementsTouchBarItem;
	IMMessagePartChatItem* _actionableMessage;
	SOInputLineViewController* _inputLineViewController;
	NSString* _displayedAckPickerChatItemGUID;
	IMAggregateAcknowledgmentChatItem* _groupAcknowledgmentsPoll;
	SOStickerViewerController* _stickerViewerController;
	NSOrderedSet* _selectedMessages;
	NSOrderedSet* _selectedChatItemGUIDs;

}

@property (nonatomic,copy) NSOrderedSet * selectedMessages;                                                    //@synthesize selectedMessages=_selectedMessages - In the implementation block
@property (nonatomic,copy) NSOrderedSet * selectedChatItemGUIDs;                                               //@synthesize selectedChatItemGUIDs=_selectedChatItemGUIDs - In the implementation block
@property (readonly) NSScrollView * scrollView; 
@property (assign) double topOverlap; 
@property (assign) double bottomOverlap; 
@property (nonatomic,readonly) IMChat * chat; 
@property (__weak) SOInputLineViewController * inputLineViewController;                                        //@synthesize inputLineViewController=_inputLineViewController - In the implementation block
@property (retain) IMMessagePartChatItem * actionableMessage;                                                  //@synthesize actionableMessage=_actionableMessage - In the implementation block
@property (readonly) NSTouchBarItem * acknowledgementsTouchBarItem;                                            //@synthesize acknowledgementsTouchBarItem=_acknowledgementsTouchBarItem - In the implementation block
@property (readonly) IMMessagePartChatItem * acknowledgeableChatItem; 
@property (nonatomic,copy) NSString * displayedAckPickerChatItemGUID;                                          //@synthesize displayedAckPickerChatItemGUID=_displayedAckPickerChatItemGUID - In the implementation block
@property (getter=isDisplayingAcknowledgmentPicker,readonly) char displayingAcknowledgmentPicker; 
@property (readonly) IMAggregateAcknowledgmentChatItem * groupAcknowledgmentsPoll;                             //@synthesize groupAcknowledgmentsPoll=_groupAcknowledgmentsPoll - In the implementation block
@property (nonatomic,readonly) char shouldPinToBottom; 
@property (nonatomic,readonly) double distanceFromBottom; 
@property (assign,nonatomic) SOStickerViewerController * stickerViewerController;                              //@synthesize stickerViewerController=_stickerViewerController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDefaultTranscriptViewControllerName:(id)arg1 ;
+(void)registerTranscriptClass:(Class)arg1 ;
+(id)defaultTranscriptViewControllerName;
+(id)registeredTranscriptClasses;
+(char)classIsRegistered:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)validateMenuItem:(id)arg1 ;
-(NSScrollView *)scrollView;
-(id)makeTouchBar;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2 ;
-(long long)numberOfPreviewItemsInPreviewPanel:(id)arg1 ;
-(id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)deselectAll;
-(IMChat *)chat;
-(void)beginChanges;
-(void)endChanges;
-(void)markAllMessagesAsRead;
-(void)chatItemsDidChange:(id)arg1 ;
-(void)chatDisplayControllerWillChange:(id)arg1 ;
-(void)chatDisplayControllerDidChange:(id)arg1 ;
-(void)_updateTouchBar:(id)arg1 ;
-(void)stickerViewerController:(id)arg1 willDeleteStickers:(id)arg2 ;
-(void)_updateAcknowledgementTouchBarItem;
-(NSString *)displayedAckPickerChatItemGUID;
-(NSOrderedSet *)selectedChatItemGUIDs;
-(void)_acknowledgeFromDFR:(id)arg1 ;
-(void)setSelectedMessages:(NSOrderedSet *)arg1 ;
-(char)_anyUnsavedMessageSelected;
-(char)canShowAcknowledgmentPickerForChatItemGUID:(id)arg1 ;
-(SOStickerViewerController *)stickerViewerController;
-(void)processChatItemChanges:(id)arg1 ;
-(void)updateAttachments;
-(void)didFinishProcessingChatItemsChange;
-(void)chatWillChange:(id)arg1 ;
-(void)chatDidChange:(id)arg1 ;
-(void)setSelectedChatItemGUIDs:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)selectedMessages;
-(char)lastMessageIsVisible;
-(void)clearUnreadMessagesIfVisible;
-(double)distanceFromBottom;
-(IMMessagePartChatItem *)acknowledgeableChatItem;
-(void)dismissAcknowledgmentsWithAnimation:(char)arg1 ;
-(void)selectMessage:(id)arg1 ;
-(SOInputLineViewController *)inputLineViewController;
-(NSTouchBarItem *)acknowledgementsTouchBarItem;
-(void)_commonSOTranscriptViewControllerInit;
-(void)_chatDisplayControllerChatWillChange:(id)arg1 ;
-(void)_chatDisplayControllerChatDidChange:(id)arg1 ;
-(void)_clearUnreadMessagesIfVisible:(id)arg1 ;
-(char)shouldPinToBottom;
-(void)setStickerViewerController:(SOStickerViewerController *)arg1 ;
-(double)topOverlap;
-(void)setTopOverlap:(double)arg1 ;
-(double)bottomOverlap;
-(void)setDisplayedAckPickerChatItemGUID:(NSString *)arg1 ;
-(char)isDisplayingAcknowledgmentPicker;
-(void)setBottomOverlap:(double)arg1 ;
-(void)deselectMessage:(id)arg1 ;
-(IMMessagePartChatItem *)actionableMessage;
-(void)setActionableMessage:(IMMessagePartChatItem *)arg1 ;
-(void)beginFullScreenEffectPlayback;
-(void)endFullScreenEffectPlayback;
-(void)scrollToEndSmoothly:(char)arg1 ;
-(void)highlightSearchString:(id)arg1 ;
-(void)copySelectionIntoPasteboard:(id)arg1 ;
-(unsigned long long)maximumNumberOfMessagesVisibleForHeight:(double)arg1 ;
-(void)beginLongClick;
-(void)endLongClick;
-(char)isLongClicking;
-(void)updateQLPreviewPanel:(id)arg1 ;
-(void)showStickerViewer:(id)arg1 ;
-(void)setInputLineViewController:(SOInputLineViewController *)arg1 ;
-(IMAggregateAcknowledgmentChatItem *)groupAcknowledgmentsPoll;
@end

