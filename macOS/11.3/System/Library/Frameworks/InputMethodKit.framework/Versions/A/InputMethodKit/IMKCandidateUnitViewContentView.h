/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKUIView.h>

@class NSColor;

@interface IMKCandidateUnitViewContentView : IMKUIView {

	NSColor* _backgroundColor;
	char _drawsBackgroundColor;

}

@property (nonatomic,retain) NSColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) char drawsBackgroundColor;              //@synthesize drawsBackgroundColor=_drawsBackgroundColor - In the implementation block
-(void)shouldUpdateForPressAndHold:(id)arg1 position:(CGPoint)arg2 with:(long long)arg3 ;
-(void)scrubbed:(id)arg1 position:(CGPoint)arg2 ;
-(void)tapped:(id)arg1 position:(CGPoint)arg2 ;
-(void)touchesEnded:(id)arg1 position:(CGPoint)arg2 ;
-(char)drawsBackgroundColor;
-(void)setDrawsBackgroundColor:(char)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(char)isFlipped;
-(NSColor *)backgroundColor;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

