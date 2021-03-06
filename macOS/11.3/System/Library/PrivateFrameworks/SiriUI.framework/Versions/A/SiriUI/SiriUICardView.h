/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@protocol SiriUIAccessibilityStashDelegate;
@interface SiriUICardView : NSView {

	id<SiriUIAccessibilityStashDelegate> _accessibilityStashDelegate;

}

@property (assign,nonatomic,__weak) id<SiriUIAccessibilityStashDelegate> accessibilityStashDelegate;              //@synthesize accessibilityStashDelegate=_accessibilityStashDelegate - In the implementation block
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)accessibilityRole;
-(char)isAccessibilityElement;
-(id)accessibilityRoleDescription;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityDescription;
-(id)accessibilityIdentifier;
-(id)accessibilityLinkedUIElements;
-(void)setAccessibilityStashDelegate:(id<SiriUIAccessibilityStashDelegate>)arg1 ;
-(id<SiriUIAccessibilityStashDelegate>)accessibilityStashDelegate;
@end

