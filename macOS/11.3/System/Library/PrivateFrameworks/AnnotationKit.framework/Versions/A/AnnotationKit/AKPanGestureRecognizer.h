/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSPanGestureRecognizer.h>
#import <libobjc.A.dylib/AKPenDetectionGestureRecognizerProtocol.h>

@class NSString;

@interface AKPanGestureRecognizer : NSPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {

	char _penGestureDetected;
	double _currentWeight;
	double _currentMaxWeight;
	CGPoint _locationOfFirstTouch;

}

@property (assign,nonatomic) CGPoint locationOfFirstTouch;              //@synthesize locationOfFirstTouch=_locationOfFirstTouch - In the implementation block
@property (assign,nonatomic) char penGestureDetected;                   //@synthesize penGestureDetected=_penGestureDetected - In the implementation block
@property (assign,nonatomic) double currentWeight;                      //@synthesize currentWeight=_currentWeight - In the implementation block
@property (assign,nonatomic) double currentMaxWeight;                   //@synthesize currentMaxWeight=_currentMaxWeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(void)setCurrentWeight:(double)arg1 ;
-(double)currentWeight;
-(double)currentMaxWeight;
-(void)setCurrentMaxWeight:(double)arg1 ;
-(void)setLocationOfFirstTouch:(CGPoint)arg1 ;
-(void)setPenGestureDetected:(char)arg1 ;
-(CGPoint)locationOfFirstTouch;
-(CGPoint)locationOfFirstTouchInView:(id)arg1 ;
-(char)penGestureDetected;
@end

