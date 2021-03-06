/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSAnimation.h>

@interface EditorWindowRelocateAnimation : NSAnimation {

	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (assign) CGPoint startPoint;              //@synthesize startPoint=_startPoint - In the implementation block
@property (assign) CGPoint endPoint;                //@synthesize endPoint=_endPoint - In the implementation block
-(id)init;
-(void)setCurrentProgress:(float)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
@end

