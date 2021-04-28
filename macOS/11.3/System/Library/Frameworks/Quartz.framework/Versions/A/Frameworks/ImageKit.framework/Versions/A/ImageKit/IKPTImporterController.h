/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKViewController.h>

@class IKPTContentViewController, NSButton, IKImageBrowserView, IKPTCenteredTextLayer, NSString, NSMutableDictionary;

@interface IKPTImporterController : IKViewController {

	IKPTContentViewController* _ikpt_contentViewController;
	NSButton* _editButton;
	NSButton* _cancelButton;
	NSButton* _setButton;
	IKImageBrowserView* _imageBrowser;
	IKPTCenteredTextLayer* _messageLayer;
	NSString* _selectedSourceID;
	NSMutableDictionary* _sourceIdentifiersToContents;
	char _hasInvalidContents;
	char _invalidateShowMessageLayer;

}

@property (assign) IKPTContentViewController * ikpt_contentViewController;              //@synthesize ikpt_contentViewController=_ikpt_contentViewController - In the implementation block
@property (assign) IKImageBrowserView * imageBrowser;                                   //@synthesize imageBrowser=_imageBrowser - In the implementation block
@property (assign) NSButton * editButton;                                               //@synthesize editButton=_editButton - In the implementation block
@property (assign) NSButton * cancelButton;                                             //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign) NSButton * setButton;                                                //@synthesize setButton=_setButton - In the implementation block
@property (retain) NSString * selectedSourceID; 
+(id)noItemsLabel;
+(id)loadingRecentsLabel;
-(void)updateContentLayout;
-(NSButton *)setButton;
-(id)currentPictureFromRecents;
-(CGRect)gridSelectionScreenRect;
-(IKPTContentViewController *)ikpt_contentViewController;
-(IKImageBrowserView *)imageBrowser;
-(void)setImageBrowser:(IKImageBrowserView *)arg1 ;
-(void)setIkpt_contentViewController:(IKPTContentViewController *)arg1 ;
-(void)updateCustomSourcesWithAddedSources:(id)arg1 removedSources:(id)arg2 ;
-(void)setSelectedSourceID:(NSString *)arg1 ;
-(void)setupContentLayers;
-(NSString *)selectedSourceID;
-(void)updateRecentPictures;
-(void)setSelectedImage;
-(void)hideMessageLayerForSource:(id)arg1 ;
-(void)updateSampleUserPicturesUsingQL:(char)arg1 ;
-(void)displayMessage:(id)arg1 forSource:(id)arg2 conditionedOnEmptySource:(char)arg3 ;
-(char)shouldAcceptDrop:(id)arg1 ;
-(char)importDroppedImage:(id)arg1 ;
-(id)sourceArrayWithPadding:(id)arg1 fillEmpty:(char)arg2 addCurrentIfNeeded:(char)arg3 ;
-(void)displayMessage:(id)arg1 boldMessageRange:(NSRange)arg2 forSource:(id)arg3 conditionedOnEmptySource:(char)arg4 ;
-(id)messageLayerAttributes;
-(id)messageLayerBoldTextAttributes;
-(void)setSetButton:(NSButton *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)awakeFromNib;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(NSButton *)cancelButton;
-(void)setCancelButton:(NSButton *)arg1 ;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(void)invalidateContents;
-(NSButton *)editButton;
-(void)setEditButton:(NSButton *)arg1 ;
-(void)imageBrowserSelectionDidChange:(id)arg1 ;
-(void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2 ;
-(void)set:(id)arg1 ;
-(void)imageBrowser:(id)arg1 removeItemsAtIndexes:(id)arg2 ;
-(unsigned long long)numberOfItemsInImageBrowser:(id)arg1 ;
-(id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2 ;
-(void)edit:(id)arg1 ;
@end
