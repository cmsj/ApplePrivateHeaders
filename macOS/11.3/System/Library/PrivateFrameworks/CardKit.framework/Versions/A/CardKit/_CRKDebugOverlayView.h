/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/Versions/A/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <CardKit/_CRKHitTestPassThroughView.h>

@class NSColor, NSString;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView {

	NSColor* _color;
	NSString* _debugText;

}

@property (nonatomic,copy) NSColor * color;                   //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * debugText;              //@synthesize debugText=_debugText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(void)layoutSubviews;
-(void)setDebugText:(NSString *)arg1 ;
-(NSString *)debugText;
@end
