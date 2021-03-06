/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <AppKit/NSGestureRecognizer.h>

@interface LPHighlightGestureRecognizer : NSGestureRecognizer {

	CGPoint _startPointInWindowCoordinates;

}
-(void)mouseDown:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(CGPoint)_locationInWindow;
-(void)updateHighlight;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)startHighlightIfPossible;
-(void)cancelHighlight;
@end

