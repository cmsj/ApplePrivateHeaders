/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSView.h>

@class NSTextField, NSImageView, CAGradientLayer;

@interface CNAvatarEditOverlayView : NSView {

	NSTextField* _label;
	NSImageView* _arrowImage;
	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) NSTextField * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSImageView * arrowImage;                     //@synthesize arrowImage=_arrowImage - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
+(id)arrowImage;
-(NSTextField *)label;
-(void)setLabel:(NSTextField *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithTitle:(id)arg1 font:(id)arg2 textColor:(id)arg3 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(NSImageView *)arrowImage;
-(void)setArrowImage:(NSImageView *)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)updateLabelVisibilityForNewSize;
@end
