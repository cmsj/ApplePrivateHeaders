/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSButton.h>

@interface AKBezelFreeButton_Mac : NSButton {

	char _allowsDrags;
	char _isInTrackingLoop;
	char _isDragging;

}

@property (assign) char isInTrackingLoop;              //@synthesize isInTrackingLoop=_isInTrackingLoop - In the implementation block
@property (assign) char isDragging;                    //@synthesize isDragging=_isDragging - In the implementation block
@property (assign) char allowsDrags;                   //@synthesize allowsDrags=_allowsDrags - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(char)allowsVibrancy;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)makeBackingLayer;
-(void)_commonInit;
-(char)isDragging;
-(void)setAllowsDrags:(char)arg1 ;
-(void)draggingEndedNotification:(id)arg1 ;
-(char)allowsDrags;
-(void)setIsInTrackingLoop:(char)arg1 ;
-(char)isInTrackingLoop;
-(void)setIsDragging:(char)arg1 ;
@end

