/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface AKToolbarSeparatorItem_Mac : NSView {

	unsigned long long _displayMode;
	NSColor* _color;

}

@property (assign,nonatomic) unsigned long long displayMode;              //@synthesize displayMode=_displayMode - In the implementation block
@property (retain) NSColor * color;                                       //@synthesize color=_color - In the implementation block
-(unsigned long long)displayMode;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(char)allowsVibrancy;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
@end

