/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <AppKit/NSView.h>

@class NSAttributedString;

@interface IMKUITextField : NSView {

	long long _alignment;
	NSAttributedString* _attributedStringValue;
	double _padding;

}

@property (assign,nonatomic) double padding;                                          //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long alignment;                                     //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedStringValue;              //@synthesize attributedStringValue=_attributedStringValue - In the implementation block
-(void)centerWithinSuperview;
-(void)setAlignment:(long long)arg1 ;
-(long long)alignment;
-(double)padding;
-(char)isFlipped;
-(char)wantsUpdateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSAttributedString *)attributedStringValue;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)setAttributedStringValue:(NSAttributedString *)arg1 ;
-(void)setPadding:(double)arg1 ;
@end

