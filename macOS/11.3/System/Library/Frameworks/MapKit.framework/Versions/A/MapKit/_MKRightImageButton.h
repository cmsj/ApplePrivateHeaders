/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSControl.h>

@class NSInvocation, NSArray, _MKUILabel, MKImageView, NSString, NSImage;

@interface _MKRightImageButton : NSControl {

	char _trackingClick;
	NSInvocation* _actionInvocation;
	char _titleConstraintsAdded;
	NSArray* _titleOnlyConstraints;
	NSArray* _titleAndImageConstraints;
	_MKUILabel* _titleLabel;
	MKImageView* _imageView;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSImage * image; 
@property (nonatomic,readonly) _MKUILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) MKImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSImage *)image;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(id)lastBaselineAnchor;
-(id)firstBaselineAnchor;
-(MKImageView *)imageView;
-(_MKUILabel *)titleLabel;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(char)_shouldTrackEvent:(id)arg1 ;
@end

