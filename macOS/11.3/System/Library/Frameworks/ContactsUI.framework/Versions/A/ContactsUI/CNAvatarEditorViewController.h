/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/CNLikenessEditorHostDelegate.h>

@protocol CNAvatarEditorDelegate;
@class NSViewController, CNPhotoLikenessEditorViewController, CNMutableContact;

@interface CNAvatarEditorViewController : NSViewController <CNLikenessEditorHostDelegate> {

	id<CNAvatarEditorDelegate> _delegate;
	NSViewController* _activeViewController;
	CNPhotoLikenessEditorViewController* _photoLikenessEditor;
	CNMutableContact* _editorContact;

}

@property (__weak) NSViewController * activeViewController;                                //@synthesize activeViewController=_activeViewController - In the implementation block
@property (retain) CNPhotoLikenessEditorViewController * photoLikenessEditor;              //@synthesize photoLikenessEditor=_photoLikenessEditor - In the implementation block
@property (retain) CNMutableContact * editorContact;                                       //@synthesize editorContact=_editorContact - In the implementation block
@property (__weak) id<CNAvatarEditorDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
-(id<CNAvatarEditorDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<CNAvatarEditorDelegate>)arg1 ;
-(void)save;
-(void)loadView;
-(void)cancel:(id)arg1 ;
-(void)save:(id)arg1 ;
-(id)contact;
-(void)setContact:(id)arg1 ;
-(void)setPreviousButtonAction:(/*^block*/id)arg1 ;
-(void)setNextButtonAction:(/*^block*/id)arg1 ;
-(void)setWindowTitle:(id)arg1 ;
-(id)likeness;
-(id)initWithSettingsDelegate:(id)arg1 ;
-(id)editorControllerForLikenessType:(unsigned long long)arg1 ;
-(void)setActiveViewController:(id)arg1 inView:(id)arg2 withTopInset:(double)arg3 ;
-(CNPhotoLikenessEditorViewController *)photoLikenessEditor;
-(void)setReadyToSave;
-(void)setNextButtonEnabled:(char)arg1 ;
-(void)setNextButtonTitle:(id)arg1 ;
-(char)isBackwardsNavigationEnabled;
-(void)setPreviousButtonEnabled:(char)arg1 ;
-(char)isBuddy;
-(void)setPhotoLikenessEditor:(CNPhotoLikenessEditorViewController *)arg1 ;
-(CNMutableContact *)editorContact;
-(void)setEditorContact:(CNMutableContact *)arg1 ;
-(NSViewController *)activeViewController;
-(void)setActiveViewController:(NSViewController *)arg1 ;
-(id)activeEditorController;
-(void)updateNavigationForReturn;
-(void)setActiveViewController:(id)arg1 inView:(id)arg2 ;
@end
