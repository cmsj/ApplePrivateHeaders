/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MMModalDialogDelegate;
@class NSWindow, NSString, NSImage, MMAlert, NSButton;

@interface MMModalDialog : NSObject {

	char _isVisible;
	char _isModal;
	/*^block*/id _completionHandler;
	/*^block*/id _helpHandler;
	id<MMModalDialogDelegate> _delegate;
	NSWindow* _parentWindow;
	NSString* defaultButtonKeyEquivalent;
	NSString* alternateButtonKeyEquivalent;
	NSString* otherButtonKeyEquivalent;
	NSString* _title;
	NSString* _message;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	NSString* _otherButtonTitle;
	NSString* _iconLabel;
	NSString* _badgeLabel;
	NSImage* _icon;
	NSImage* _badge;
	MMAlert* _alert;

}

@property (assign) char isModal;                                              //@synthesize isModal=_isModal - In the implementation block
@property (assign) NSWindow * parentWindow;                                   //@synthesize parentWindow=_parentWindow - In the implementation block
@property (assign) char isVisible;                                            //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) id<MMModalDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSButton * defaultButton; 
@property (readonly) NSButton * alternateButton; 
@property (readonly) NSButton * otherButton; 
@property (copy) NSString * defaultButtonKeyEquivalent; 
@property (copy) NSString * alternateButtonKeyEquivalent; 
@property (copy) NSString * otherButtonKeyEquivalent; 
@property (copy) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (copy) NSString * message;                                          //@synthesize message=_message - In the implementation block
@property (copy) NSString * defaultButtonTitle;                               //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (copy) NSString * alternateButtonTitle;                             //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (copy) NSString * otherButtonTitle;                                 //@synthesize otherButtonTitle=_otherButtonTitle - In the implementation block
@property (copy) NSString * iconLabel;                                        //@synthesize iconLabel=_iconLabel - In the implementation block
@property (copy) NSString * badgeLabel;                                       //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (assign) NSImage * icon;                                            //@synthesize icon=_icon - In the implementation block
@property (assign) NSImage * badge;                                           //@synthesize badge=_badge - In the implementation block
@property (retain) MMAlert * alert;                                           //@synthesize alert=_alert - In the implementation block
-(id<MMModalDialogDelegate>)delegate;
-(void)setDelegate:(id<MMModalDialogDelegate>)arg1 ;
-(NSImage *)badge;
-(NSString *)message;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSWindow *)parentWindow;
-(NSString *)title;
-(NSString *)otherButtonTitle;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(char)isVisible;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(NSString *)defaultButtonTitle;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(MMAlert *)alert;
-(void)setIsVisible:(char)arg1 ;
-(void)setBadgeLabel:(NSString *)arg1 ;
-(NSString *)badgeLabel;
-(void)setBadge:(NSImage *)arg1 ;
-(void)setAlert:(MMAlert *)arg1 ;
-(NSString *)iconLabel;
-(void)setIconLabel:(NSString *)arg1 ;
-(NSButton *)defaultButton;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSButton *)alternateButton;
-(NSButton *)otherButton;
-(id)initWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 icon:(id)arg6 iconLabel:(id)arg7 badge:(id)arg8 badgeLabel:(id)arg9 helpHandler:(/*^block*/id)arg10 ;
-(void)setAlternateButtonKeyEquivalent:(NSString *)arg1 ;
-(void)beginModalDialogWithParentWindow:(id)arg1 shouldNest:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginModalDialogWithParentWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultButtonKeyEquivalent:(NSString *)arg1 ;
-(void)setOtherButtonKeyEquivalent:(NSString *)arg1 ;
-(void)endModalDialog:(id)arg1 ;
-(void)stopModalDialog;
-(void)setIsModal:(char)arg1 ;
-(char)isModal;
-(NSString *)defaultButtonKeyEquivalent;
-(NSString *)alternateButtonKeyEquivalent;
-(NSString *)otherButtonKeyEquivalent;
@end

