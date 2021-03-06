/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIRecording.framework/Versions/A/UIRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIRecording/UIRecording-Structs.h>
#import <UIRecording/UIREvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIRMouseEvent : UIREvent <NSSecureCoding>
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)location;
-(id)topLevelUIElement;
-(id)actionNames;
-(id)childrenStack;
-(CGEventRef)cgEventToPostToProcess:(id)arg1 withLastEvent:(id)arg2 withLastCGEvent:(CGEventRef)arg3 error:(id*)arg4 ;
-(char)hasSameChildrenStackAsEvent:(id)arg1 ;
-(CGPoint)positionWithElement:(id)arg1 ;
-(id)initWithCGEvent:(CGEventRef)arg1 withAccessibilityElement:(id)arg2 ;
-(id)baseLevelUIElement;
-(id)descriptionFormatString;
-(id)processTitle;
-(char)uiElementInMenuBar;
-(char)hasElementPosition;
@end

