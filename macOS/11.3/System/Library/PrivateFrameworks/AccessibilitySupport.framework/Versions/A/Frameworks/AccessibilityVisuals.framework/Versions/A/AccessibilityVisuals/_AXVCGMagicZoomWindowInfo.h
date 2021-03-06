/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _AXVCGMagicZoomWindowInfo : NSObject <NSCopying> {

	char _isLargerScaleFactor;
	double _currentScreenBackingScaleFactor;
	double _previousScreenBackingScaleFactor;
	CGRect _zoomWindowFrameCarbonCoordinates;
	CGRect _zoomedRegionFrameCarbonCoordinates;

}

@property (assign,nonatomic) double currentScreenBackingScaleFactor;                 //@synthesize currentScreenBackingScaleFactor=_currentScreenBackingScaleFactor - In the implementation block
@property (assign,nonatomic) double previousScreenBackingScaleFactor;                //@synthesize previousScreenBackingScaleFactor=_previousScreenBackingScaleFactor - In the implementation block
@property (assign,nonatomic) char isLargerScaleFactor;                               //@synthesize isLargerScaleFactor=_isLargerScaleFactor - In the implementation block
@property (assign,nonatomic) CGRect zoomWindowFrameCarbonCoordinates;                //@synthesize zoomWindowFrameCarbonCoordinates=_zoomWindowFrameCarbonCoordinates - In the implementation block
@property (assign,nonatomic) CGRect zoomedRegionFrameCarbonCoordinates;              //@synthesize zoomedRegionFrameCarbonCoordinates=_zoomedRegionFrameCarbonCoordinates - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)currentScreenBackingScaleFactor;
-(void)setCurrentScreenBackingScaleFactor:(double)arg1 ;
-(double)previousScreenBackingScaleFactor;
-(void)setPreviousScreenBackingScaleFactor:(double)arg1 ;
-(char)isLargerScaleFactor;
-(void)setIsLargerScaleFactor:(char)arg1 ;
-(CGRect)zoomWindowFrameCarbonCoordinates;
-(void)setZoomWindowFrameCarbonCoordinates:(CGRect)arg1 ;
-(CGRect)zoomedRegionFrameCarbonCoordinates;
-(void)setZoomedRegionFrameCarbonCoordinates:(CGRect)arg1 ;
@end

