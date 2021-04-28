/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@class NSTextField, NSString;

@interface BadgeView : NSView {

	NSTextField* _badgeTextLabel;
	double _maxWidth;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double maxWidth;              //@synthesize maxWidth=_maxWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(NSString *)text;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(char)canSmoothFontsInLayer;
-(void)setText:(NSString *)arg1 ;
-(void)_mainWindowDidChange:(id)arg1 ;
@end
