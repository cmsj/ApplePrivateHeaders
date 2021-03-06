/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/Versions/A/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RTTUI/RTTUI-Structs.h>
#import <AppKit/NSImageView.h>

@class NSLayoutConstraint, NSImage;

@interface TTYStretchImageView : NSImageView {

	NSLayoutConstraint* _widthConstraint;
	NSImage* _topLeft;
	NSImage* _top;
	NSImage* _topRight;
	NSImage* _left;
	NSImage* _center;
	NSImage* _right;
	NSImage* _bottomLeft;
	NSImage* _bottom;
	NSImage* _bottomRight;

}

@property (nonatomic,retain) NSImage * topLeft;                                        //@synthesize topLeft=_topLeft - In the implementation block
@property (nonatomic,retain) NSImage * top;                                            //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) NSImage * topRight;                                       //@synthesize topRight=_topRight - In the implementation block
@property (nonatomic,retain) NSImage * left;                                           //@synthesize left=_left - In the implementation block
@property (nonatomic,retain) NSImage * center;                                         //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSImage * right;                                          //@synthesize right=_right - In the implementation block
@property (nonatomic,retain) NSImage * bottomLeft;                                     //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (nonatomic,retain) NSImage * bottom;                                         //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) NSImage * bottomRight;                                    //@synthesize bottomRight=_bottomRight - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * widthConstraint;              //@synthesize widthConstraint=_widthConstraint - In the implementation block
+(id)imageForRect:(CGRect)arg1 fromImage:(id)arg2 ;
-(id)init;
-(NSImage *)left;
-(void)drawRect:(CGRect)arg1 ;
-(NSImage *)center;
-(NSImage *)right;
-(NSImage *)top;
-(NSImage *)bottom;
-(NSLayoutConstraint *)widthConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCenter:(NSImage *)arg1 ;
-(NSImage *)topLeft;
-(NSImage *)bottomLeft;
-(NSImage *)bottomRight;
-(NSImage *)topRight;
-(void)setBottom:(NSImage *)arg1 ;
-(void)setLeft:(NSImage *)arg1 ;
-(void)setRight:(NSImage *)arg1 ;
-(void)setTop:(NSImage *)arg1 ;
-(void)setBottomLeft:(NSImage *)arg1 ;
-(void)setBottomRight:(NSImage *)arg1 ;
-(void)setTopLeft:(NSImage *)arg1 ;
-(void)setTopRight:(NSImage *)arg1 ;
-(void)setImage:(id)arg1 withInsets:(NSEdgeInsets)arg2 ;
@end

