/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTabButton.h>
#import <libobjc.A.dylib/NSTabBarSyncedButton.h>

@protocol NSTabBarSyncedButtonDelegate;
@class NSString;

@interface NSTabBarEmptyRegionPlaceholderButton : NSTabButton <NSTabBarSyncedButton> {

	id<NSTabBarSyncedButtonDelegate> _buttonInTabSyncGroupDelegate;
	char _syncedWithOtherButton;

}

@property (assign,nonatomic,__weak) id<NSTabBarSyncedButtonDelegate> buttonInTabSyncGroupDelegate;              //@synthesize buttonInTabSyncGroupDelegate=_buttonInTabSyncGroupDelegate - In the implementation block
@property (assign,getter=isSyncedWithOtherButton,nonatomic) char syncedWithOtherButton;                         //@synthesize syncedWithOtherButton=_syncedWithOtherButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 tabBarViewItem:(id)arg2 ;
-(void)_setHasMouseOverHighlight:(char)arg1 animated:(char)arg2 notifyNSTabBarSyncedButtonDelegate:(char)arg3 ;
-(void)_setHasPressedHighlight:(char)arg1 notifyNSTabBarSyncedButtonDelegate:(char)arg2 ;
-(void)setHasMouseOverHighlight:(char)arg1 animated:(char)arg2 ;
-(void)setHasPressedHighlight:(char)arg1 ;
-(void)setHighlightStateToPressed:(char)arg1 hovered:(char)arg2 ;
-(id<NSTabBarSyncedButtonDelegate>)buttonInTabSyncGroupDelegate;
-(void)setButtonInTabSyncGroupDelegate:(id<NSTabBarSyncedButtonDelegate>)arg1 ;
-(char)isSyncedWithOtherButton;
-(void)setSyncedWithOtherButton:(char)arg1 ;
@end

