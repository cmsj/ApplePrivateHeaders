/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKConditionalPanGestureRecognizer.h>

@interface _MKDirectionalPanGestureRecognizer : _MKConditionalPanGestureRecognizer {

	long long _direction;
	CGPoint _mouseDownPoint;
	double _translation;

}

@property (assign,nonatomic) long long direction;              //@synthesize direction=_direction - In the implementation block
-(void)reset;
-(long long)direction;
-(void)mouseDown:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(double)directionalTranslationInView:(id)arg1 ;
-(void)_handleMouseDragged:(id)arg1 ;
@end

