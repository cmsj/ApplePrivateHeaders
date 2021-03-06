/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotificationCenterUI.framework/Versions/A/NotificationCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenterUI/NotificationCenterUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NCMaterialDelegate.h>

@class NSArray, NSView, _NCCardViewControllerContentView, NSViewController;

@interface NCCardViewController : NSViewController <NCMaterialDelegate> {

	NSArray* _layoutConstraints;
	NSView* _cardLayerView;
	_NCCardViewControllerContentView* _cardContentView;
	char _needsLayout;
	BOOL _isSystemDark;
	CGRect _lastLayoutRectBounds;
	char _onDarkBackdrop;
	char _cardVisible;
	NSViewController* _headerController;
	NSViewController* _contentController;
	unsigned long long _cardMaterial;

}

@property (getter=isPlatterHidden) char platterHidden; 
@property (nonatomic,retain) NSViewController * headerController;               //@synthesize headerController=_headerController - In the implementation block
@property (nonatomic,retain) NSViewController * contentController;              //@synthesize contentController=_contentController - In the implementation block
@property (assign,nonatomic) unsigned long long cardMaterial;                   //@synthesize cardMaterial=_cardMaterial - In the implementation block
@property (assign,nonatomic) char onDarkBackdrop;                               //@synthesize onDarkBackdrop=_onDarkBackdrop - In the implementation block
@property (assign,nonatomic) char cardVisible;                                  //@synthesize cardVisible=_cardVisible - In the implementation block
-(char)isPlatterHidden;
-(void)setPlatterHidden:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayout;
-(NSViewController *)contentController;
-(void)setContentController:(NSViewController *)arg1 ;
-(void)loadView;
-(void)viewWillLayout;
-(void)_layoutViews;
-(void)appearanceChanged:(BOOL)arg1 ;
-(void)materialChanged:(unsigned char)arg1 ;
-(void)_updateCardLook;
-(void)setCardMaterial:(unsigned long long)arg1 ;
-(void)setCardVisible:(char)arg1 ;
-(void)setOnDarkBackdrop:(char)arg1 ;
-(void)setHeaderController:(NSViewController *)arg1 ;
-(NSViewController *)headerController;
-(unsigned long long)cardMaterial;
-(char)onDarkBackdrop;
-(char)cardVisible;
@end

