/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSWindow.h>

@interface NSPanel : NSWindow

@property (getter=isFloatingPanel) char floatingPanel; 
@property (assign) char becomesKeyOnlyIfNeeded; 
@property (assign) char worksWhenModal; 
+(unsigned long long)_validateStyleMask:(unsigned long long)arg1 ;
-(id)init;
-(void)resignKeyWindow;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(id)accessibilitySubroleAttribute;
-(char)_toggleOrderedFrontMostWillOrderOut;
-(id)_initContent:(const CGRect*)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 contentView:(id)arg5 ;
-(char)worksWhenModal;
-(void)setBecomesKeyOnlyIfNeeded:(char)arg1 ;
-(void)setFloatingPanel:(char)arg1 ;
-(void)setWorksWhenModal:(char)arg1 ;
-(void)cancel:(id)arg1 ;
-(char)isFloatingPanel;
-(char)becomesKeyOnlyIfNeeded;
-(id)_initContent:(const CGRect*)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 counterpart:(id)arg5 ;
-(char)_showToolTip;
-(void)_replaceAccessoryView:(id)arg1 with:(id)arg2 topView:(id)arg3 bottomView:(id)arg4 previousKeyView:(id)arg5 ;
-(id)_doSetAccessoryView:(id)arg1 topView:(id)arg2 bottomView:(id)arg3 previousKeyView:(id)arg4 oldView:(id*)arg5 ;
-(id)_setTempHidden:(char)arg1 ;
-(id)_doSetAccessoryView:(id)arg1 topView:(id)arg2 bottomView:(id)arg3 oldView:(id*)arg4 ;
-(char)_implicitlyAllowsFullScreenPrimary;
-(id)presentationWindowForError:(id)arg1 originatedInWindow:(id)arg2 ;
@end

