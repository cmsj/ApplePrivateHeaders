/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <ScreenSharing/SSInputEvent.h>

@interface SSMouseEvent : SSInputEvent {

	SSPoint _coordinates;
	CGPoint _mV2Coordinates;

}

@property (assign) SSPoint coordinates;                 //@synthesize coordinates=_coordinates - In the implementation block
@property (assign) CGPoint mV2Coordinates;              //@synthesize mV2Coordinates=_mV2Coordinates - In the implementation block
+(id)mouseEventWithCoordinates:(SSPoint)arg1 ;
-(SSPoint)coordinates;
-(void)setMV2Coordinates:(CGPoint)arg1 ;
-(void)setCoordinates:(SSPoint)arg1 ;
-(id)initWithCoordinates:(SSPoint)arg1 ;
-(CGPoint)mV2Coordinates;
@end

