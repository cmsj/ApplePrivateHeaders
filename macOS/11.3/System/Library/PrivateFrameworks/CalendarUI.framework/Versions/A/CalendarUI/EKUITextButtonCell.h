/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSButtonCell.h>

@class NSImage, NSAttributedString;

@interface EKUITextButtonCell : NSButtonCell {

	NSImage* _originalImage;
	NSAttributedString* _originalTitle;

}

@property (retain) NSImage * originalImage;                         //@synthesize originalImage=_originalImage - In the implementation block
@property (retain) NSAttributedString * originalTitle;              //@synthesize originalTitle=_originalTitle - In the implementation block
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(CGRect)drawTitle:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)drawImage:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(NSAttributedString *)originalTitle;
-(NSImage *)originalImage;
-(void)setOriginalImage:(NSImage *)arg1 ;
-(void)setOriginalTitle:(NSAttributedString *)arg1 ;
@end

