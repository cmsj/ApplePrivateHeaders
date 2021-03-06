/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/Versions/A/RecapPerformanceTesting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RecapPerformanceTesting/RecapPerformanceTesting-Structs.h>
#import <libobjc.A.dylib/_RPTCoordinateSpaces.h>
#import <libobjc.A.dylib/RPTInteraction.h>

@class RPTCoordinateSpaceConverter;

@interface RPTDragInteraction : NSObject <_RPTCoordinateSpaces, RPTInteraction> {

	char __locationsAreAlreadyScreenSpace;
	RPTCoordinateSpaceConverter* _conversion;
	CGPoint _sourceLocation;
	CGPoint _destinationLocation;

}

@property (assign,nonatomic) char _locationsAreAlreadyScreenSpace;                  //@synthesize _locationsAreAlreadyScreenSpace=__locationsAreAlreadyScreenSpace - In the implementation block
@property (assign,nonatomic) CGPoint sourceLocation;                                //@synthesize sourceLocation=_sourceLocation - In the implementation block
@property (assign,nonatomic) CGPoint destinationLocation;                           //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (nonatomic,retain) RPTCoordinateSpaceConverter * conversion;              //@synthesize conversion=_conversion - In the implementation block
+(id)_dragToTopLeftOfScreenForWindow:(id)arg1 ;
-(CGPoint)destinationLocation;
-(void)setDestinationLocation:(CGPoint)arg1 ;
-(CGPoint)sourceLocation;
-(id)initByDraggingWindow:(id)arg1 byDelta:(CGVector)arg2 ;
-(RPTCoordinateSpaceConverter *)conversion;
-(void)setConversion:(RPTCoordinateSpaceConverter *)arg1 ;
-(void)invokeWithComposer:(id)arg1 duration:(double)arg2 ;
-(id)reversedInteraction;
-(id)interactionByScalingBy:(double)arg1 ;
-(char)_locationsAreAlreadyScreenSpace;
-(id)initFromSourceLocation:(CGPoint)arg1 toDestinationLocation:(CGPoint)arg2 ;
-(void)set_locationsAreAlreadyScreenSpace:(char)arg1 ;
-(id)_andThenDragBy:(CGVector)arg1 ;
-(void)setSourceLocation:(CGPoint)arg1 ;
@end

