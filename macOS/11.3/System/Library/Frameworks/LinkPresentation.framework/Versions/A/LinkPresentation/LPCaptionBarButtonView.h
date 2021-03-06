/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class LPCaptionButtonPresentationProperties, LPButtonStyle, NSButton;

@interface LPCaptionBarButtonView : LPComponentView {

	LPCaptionButtonPresentationProperties* _properties;
	LPButtonStyle* _style;
	NSButton* _button;

}
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)layoutComponentView;
-(id)initWithProperties:(id)arg1 style:(id)arg2 ;
@end

