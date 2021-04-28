/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKUIPanelMask.h>

@class NSImage;

@interface IMKUISpeechBalloonMask : IMKUIPanelMask {

	unsigned long long _arrowDirection;
	double _arrowOffset;
	NSImage* _arrowImage;
	CGRect _contentFrame;
	CGRect _arrowFrame;

}

@property (assign,nonatomic) CGRect arrowFrame;                              //@synthesize arrowFrame=_arrowFrame - In the implementation block
@property (nonatomic,retain) NSImage * arrowImage;                           //@synthesize arrowImage=_arrowImage - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                            //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirection;              //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (assign,nonatomic) double arrowOffset;                             //@synthesize arrowOffset=_arrowOffset - In the implementation block
+(id)downwardsPointingArrow;
-(id)initWithContentSize:(CGSize)arg1 direction:(unsigned long long)arg2 offset:(double)arg3 ;
-(void)calculateFramesWithContentSize:(CGSize)arg1 ;
-(void)drawArrowUpsideDown:(id)arg1 withSize:(CGSize)arg2 ;
-(void)drawArrowFlipped:(id)arg1 withSize:(CGSize)arg2 degrees:(double)arg3 ;
-(void)setArrowFrame:(CGRect)arg1 ;
-(CGRect)arrowFrame;
-(NSEdgeInsets)edgeInsets;
-(void)drawInRect:(CGRect)arg1 ;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(NSImage *)arrowImage;
-(void)setArrowImage:(NSImage *)arg1 ;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
@end
