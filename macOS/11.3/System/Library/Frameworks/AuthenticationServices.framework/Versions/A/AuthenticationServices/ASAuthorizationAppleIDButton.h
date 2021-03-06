/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/Versions/A/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <AppKit/NSControl.h>
#import <libobjc.A.dylib/NSAccessibilityButton.h>

@class CAFilter, NSString;

@interface ASAuthorizationAppleIDButton : NSControl <NSAccessibilityButton> {

	long long _type;
	long long _style;
	CAFilter* _highlightFilter;
	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)accessibilityIsSingleCelled;
+(Class)layerClass;
+(double)defaultCornerRadius;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setCornerRadius:(double)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityRole;
-(id)accessibilityLabel;
-(void)drawRect:(CGRect)arg1 ;
-(double)cornerRadius;
-(char)accessibilityPerformPress;
-(char)accessibilityElement;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(id)initWithAuthorizationButtonType:(long long)arg1 authorizationButtonStyle:(long long)arg2 ;
-(void)_drawRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)_createHighlightFilterIfNecessary;
-(void)_performAnimationToSetHighlighted:(char)arg1 ;
-(char)_isInsideButtonEvent:(id)arg1 ;
-(long long)_ak_buttonType;
-(long long)_ak_buttonStyle;
@end

