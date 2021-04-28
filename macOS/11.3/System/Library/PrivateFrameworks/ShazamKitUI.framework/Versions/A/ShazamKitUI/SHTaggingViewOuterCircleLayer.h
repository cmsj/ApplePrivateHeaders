/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/Versions/A/ShazamKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class CALayer;

@interface SHTaggingViewOuterCircleLayer : CALayer {

	CALayer* _circleContainerLayer;
	CALayer* _circleLayer;

}

@property (retain) CALayer * circleContainerLayer;              //@synthesize circleContainerLayer=_circleContainerLayer - In the implementation block
@property (retain) CALayer * circleLayer;                       //@synthesize circleLayer=_circleLayer - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSublayers;
-(void)setup;
-(void)setCircleContainerLayer:(CALayer *)arg1 ;
-(CALayer *)circleContainerLayer;
-(void)setCircleLayer:(CALayer *)arg1 ;
-(CALayer *)circleLayer;
@end
