/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKEightPointRectangularPointOfInterestHelper.h>

@interface AKPolygonPointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper
+(void)_concretePointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4 ;
+(unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(CGPoint)_concreteValidatePoint:(CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4 ;
+(unsigned long long)numberOfPolygonPointsForControlPoint:(CGPoint)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(CGPoint)_pointForPointsControlOfPolygonWithNumberOfPoints:(unsigned long long)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(unsigned long long)minPolygonPoints;
+(unsigned long long)maxPolygonPoints;
+(double)_degreesBetweenPointsForPointsControl;
+(double)pointsControlPointDistanceFactor;
+(double)_degreesForPointsControlGivenPolygonWithNumberOfPoints:(unsigned long long)arg1 ;
@end

