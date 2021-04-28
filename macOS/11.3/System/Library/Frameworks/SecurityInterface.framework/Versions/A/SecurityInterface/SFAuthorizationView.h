/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityInterface/SecurityInterface-Structs.h>
#import <AppKit/NSView.h>

@interface SFAuthorizationView : NSView {

	id _reserved_SFAuthorizationView;

}
+(char)containsPasswordOnlyItem:(SCD_Struct_SF0*)arg1 ;
-(void)_createRef;
-(void)dispatchDelegateFromAsyncOperation:(char)arg1 delegateBlock:(/*^block*/id)arg2 ;
-(void)setTextButtonTitle:(id)arg1 ;
-(void)_reCalcTextButton;
-(void)_freeRef:(char)arg1 ;
-(char)_tryState:(int)arg1 interactive:(char)arg2 ;
-(void)reenableButton;
-(void)setButtonTitleStringAttributes:(id)arg1 ;
-(id)getButtonTitleStringAttributes;
-(void)deauthorizeInteractively;
-(void)setAutoupdate:(char)arg1 ;
-(void)setAutoupdate:(char)arg1 interval:(double)arg2 ;
-(void)initiallyLockedOrHidden;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)setString:(char*)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setFlags:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(void)buttonPressed:(id)arg1 ;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowDidResize:(id)arg1 ;
-(void)windowDidEndSheet:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id)_ivars;
-(id)authorization;
-(char)updateStatus:(id)arg1 ;
-(void)setAuthorization:(id)arg1 ;
-(void)setLAContext:(id)arg1 ;
-(char)authorize:(id)arg1 ;
-(SCD_Struct_SF0*)authorizationRights;
-(void)setAuthorizationRights:(const SCD_Struct_SF0*)arg1 ;
-(char)deauthorize:(id)arg1 ;
-(void)authorizeInteractively;
-(void)setAsyncOperation:(char)arg1 ;
-(int)authorizationState;
-(void)_destroyRights;
-(char)processRequest:(/*^block*/id)arg1 ;
@end
