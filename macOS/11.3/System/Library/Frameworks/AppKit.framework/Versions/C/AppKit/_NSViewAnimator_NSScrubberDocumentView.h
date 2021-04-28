/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSViewAnimator.h>

@class NSScrubberDocumentView;

@interface _NSViewAnimator_NSScrubberDocumentView : _NSViewAnimator

@property (readonly) NSScrubberDocumentView * targetView; 
-(void)setSelectedIndex:(long long)arg1 ;
-(void)setHighlightedIndex:(long long)arg1 ;
-(void)scrollItemAtIndex:(long long)arg1 toAlignment:(long long)arg2 ;
-(void)updateForTrackingPoint:(CGPoint)arg1 isTrackingSelection:(char)arg2 ;
-(NSScrubberDocumentView *)targetView;
@end
