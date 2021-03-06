/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/Versions/A/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBPrivacyLinkController.h>

@class NSColor, OBPrivacyLinkButton, NSTextField;

@interface OBPrivacyLinkController_macOS : OBPrivacyLinkController {

	NSColor* _iconTintColor;
	NSColor* _textTintColor;
	OBPrivacyLinkButton* _button;
	NSTextField* _caption;

}
-(void)viewDidLayout;
-(void)loadView;
-(void)viewDidLoad;
-(void)setLinkEnabled:(char)arg1 ;
-(id)initWithPrivacyBundle:(id)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(void)viewPressed:(id)arg1 ;
-(void)setTextTintColor:(id)arg1 ;
-(void)setIconTintColor:(id)arg1 ;
@end

