/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBox.h>

@class NSView;

@interface NSStopTouchingMeBox : NSBox {

	NSView* sibling1;
	NSView* sibling2;
	double offset;

}
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tile;
-(void)viewDidEndLiveResize;
-(void)setSibling1:(id)arg1 ;
-(void)setSibling2:(id)arg1 ;
-(void)setOffset:(double)arg1 ;
@end

