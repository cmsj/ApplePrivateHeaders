/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSDraggingSource.h>

@protocol IKProfilePictureDelegate;
@class NSImageView, NSImage, CALayer, NSTrackingArea, IKPPFloatingWindow, NSDictionary, NSString, NSURL, IKPictureTaker;

@interface IKProfilePictureView : NSView <NSDraggingSource> {

	NSImageView* _imageViewForCell;
	NSImage* _defaultImage;
	unsigned long long _borderStyle;
	char _enabled;
	char _draggingEntered;
	char _editable;
	char _showEditionHighlight;
	unsigned long long _editionHighlightType;
	char _showRolloverHighlight;
	char _userActionTriggeredEdition;
	CALayer* _rolloverLayer;
	NSTrackingArea* _trackingArea;
	IKPPFloatingWindow* _floatingPictureWindow;
	char _isEditing;
	char _isPressed;
	id _editorImage;
	NSDictionary* _editorSettings;
	CGSize _cropSize;
	NSString* _recentPictureID;
	char _shouldRestoreOnCancel;
	id _savedEditorImage;
	NSDictionary* _savedEditorSettings;
	char _showBuiltinImagesByDefault;
	char _isMe;
	id _representedObject;
	NSString* _accountType;
	char _usePanel;
	NSURL* _dropURL;
	IKPictureTaker* _pictureTaker;
	id<IKProfilePictureDelegate> _delegate;

}

@property (assign) id delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSImage * image; 
@property (assign) unsigned long long borderStyle; 
@property (retain) NSImage * defaultImage;                               //@synthesize defaultImage=_defaultImage - In the implementation block
@property (getter=isEnabled) char enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (getter=isEditable) char editable; 
@property (assign) char showEditionHighlight; 
@property (assign) unsigned long long editionHighlightType; 
@property (assign) char showBuiltinImagesByDefault;                      //@synthesize showBuiltinImagesByDefault=_showBuiltinImagesByDefault - In the implementation block
@property (assign) char isMe; 
@property (retain) id representedObject;                                 //@synthesize representedObject=_representedObject - In the implementation block
@property (retain) NSString * accountType; 
@property (retain) NSImage * editorImage; 
@property (retain) NSDictionary * editorSettings;                        //@synthesize editorSettings=_editorSettings - In the implementation block
@property (retain) NSString * recentPictureID;                           //@synthesize recentPictureID=_recentPictureID - In the implementation block
@property (assign) char usePanel;                                        //@synthesize usePanel=_usePanel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)recentPictureID;
-(id)_pictureTaker;
-(void)floatingWindowWillClose:(id)arg1 ;
-(void)_popoverWillOpenNotification:(id)arg1 ;
-(char)showEditionHighlight;
-(void)setShowEditionHighlight:(char)arg1 ;
-(void)_rotateCurrentContextWithFrameOrigin:(CGPoint)arg1 innerOffset:(CGPoint)arg2 angle:(double)arg3 ;
-(id)_silhouetteImage;
-(unsigned long long)editionHighlightType;
-(void)_drawAccountFrame;
-(CGRect)_photoContentRectForBounds:(CGRect)arg1 ;
-(void)_drawBadgeWithString:(id)arg1 inFrame:(CGRect)arg2 drawBackground:(char)arg3 ;
-(void)_drawRoundedBorder;
-(void)_drawBevel;
-(void)_drawRolloverHighlightInContext:(CGContextRef)arg1 ;
-(void)_drawRotatedFrame;
-(CGRect)_photoFrameRectForBounds:(CGRect)arg1 ;
-(CGRect)_accountFrameRectForBounds:(CGRect)arg1 ;
-(CGRect)_rolloverFrame;
-(void)setRecentPictureID:(NSString *)arg1 ;
-(void)setupPictureTaker;
-(void)_willStartEditing;
-(void)pictureTakerValidated:(id)arg1 code:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)usePanel;
-(void)beginEditingWithMode:(long long)arg1 ;
-(char)showBuiltinImagesByDefault;
-(void)setSavedEditorImage:(id)arg1 ;
-(void)setSavedEditorSettings:(id)arg1 ;
-(void)_didStopEditing;
-(void)startPictureAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setEditorImage:(NSImage *)arg1 ;
-(void)beginEditingForDropOrPasteWithImage:(id)arg1 ;
-(char)_allowDropWithDraggingInfo:(id)arg1 ;
-(id)_dragImageData;
-(void)setDropURL:(id)arg1 ;
-(void)_setDisplayRolloverLayer:(char)arg1 ;
-(void)setEditionHighlightType:(unsigned long long)arg1 ;
-(void)setUsePanel:(char)arg1 ;
-(void)setShowBuiltinImagesByDefault:(char)arg1 ;
-(void)dealloc;
-(void)beginEditing;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setImage:(NSImage *)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(char)allowsVibrancy;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(id)accessibilityAttributeNames;
-(NSImage *)image;
-(void)mouseDown:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)copy:(id)arg1 ;
-(char)isEditable;
-(id)representedObject;
-(char)isEditing;
-(void)setEditable:(char)arg1 ;
-(void)abortEditing;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)dragImage:(id)arg1 at:(CGPoint)arg2 offset:(CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(char)arg7 ;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(CGRect)_opaqueRect;
-(void)paste:(id)arg1 ;
-(void)drawFocusRingMask;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(CGRect)focusRingMaskBounds;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)draggingSession:(id)arg1 willBeginAtPoint:(CGPoint)arg2 ;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2 ;
-(void)draggingSession:(id)arg1 endedAtPoint:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(void)draggingSession:(id)arg1 movedToPoint:(CGPoint)arg2 ;
-(char)ignoreModifierKeysForDraggingSession:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)commonInit;
-(id)_dragImage;
-(void)setAccountType:(NSString *)arg1 ;
-(NSString *)accountType;
-(char)isMe;
-(void)setIsMe:(char)arg1 ;
-(unsigned long long)borderStyle;
-(void)setBorderStyle:(unsigned long long)arg1 ;
-(void)setDefaultImage:(NSImage *)arg1 ;
-(NSImage *)defaultImage;
-(NSImage *)editorImage;
-(NSDictionary *)editorSettings;
-(void)setEditorSettings:(NSDictionary *)arg1 ;
@end

