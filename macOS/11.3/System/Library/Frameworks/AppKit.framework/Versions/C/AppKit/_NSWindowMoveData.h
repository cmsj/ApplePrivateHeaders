/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface _NSWindowMoveData : NSObject {

	CGPoint startingOrigin;
	CGPoint startingEventLocation;
	CGPoint lastEventLocation;
	CGPoint newEventLocation;
	CGSize offset;
	CGSize catchupSize;

}

@property (assign) CGPoint startingOrigin; 
@property (assign) CGPoint startingEventLocation; 
@property (assign) CGPoint lastEventLocation; 
@property (assign) CGSize offset; 
@property (assign) CGPoint newEventLocation; 
@property (assign) CGSize catchupSize; 
-(CGSize)offset;
-(void)setOffset:(CGSize)arg1 ;
-(CGPoint)startingOrigin;
-(void)setStartingOrigin:(CGPoint)arg1 ;
-(CGPoint)startingEventLocation;
-(void)setStartingEventLocation:(CGPoint)arg1 ;
-(CGPoint)lastEventLocation;
-(void)setLastEventLocation:(CGPoint)arg1 ;
-(CGPoint)newEventLocation;
-(void)setNewEventLocation:(CGPoint)arg1 ;
-(CGSize)catchupSize;
-(void)setCatchupSize:(CGSize)arg1 ;
@end
