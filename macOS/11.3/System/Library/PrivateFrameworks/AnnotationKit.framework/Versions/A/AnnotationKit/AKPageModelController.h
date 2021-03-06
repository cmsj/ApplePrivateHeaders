/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class NSMutableOrderedSet, NSMutableSet, AKInkAnnotation, AKCropAnnotation, AKStatistics, NSArray, NSSet;

@interface AKPageModelController : NSObject {

	NSMutableOrderedSet* _mutableAnnotations;
	NSMutableSet* _mutableSelectedAnnotations;
	AKInkAnnotation* _inkCanvasAnnotation;
	id _representedObject;
	AKCropAnnotation* _cropAnnotation;
	AKStatistics* _statisticsLogger;
	CGRect _appliedCropRect;

}

@property (retain) AKCropAnnotation * cropAnnotation;                             //@synthesize cropAnnotation=_cropAnnotation - In the implementation block
@property (retain) AKInkAnnotation * inkCanvasAnnotation;                         //@synthesize inkCanvasAnnotation=_inkCanvasAnnotation - In the implementation block
@property (assign,nonatomic,__weak) AKStatistics * statisticsLogger;              //@synthesize statisticsLogger=_statisticsLogger - In the implementation block
@property (__weak) id representedObject;                                          //@synthesize representedObject=_representedObject - In the implementation block
@property (readonly) NSArray * annotations; 
@property (readonly) NSSet * selectedAnnotations; 
@property (assign) CGRect appliedCropRect;                                        //@synthesize appliedCropRect=_appliedCropRect - In the implementation block
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(void)setRepresentedObject:(id)arg1 ;
-(id)representedObject;
-(NSArray *)annotations;
-(char)containsAnnotation:(id)arg1 ;
-(NSSet *)selectedAnnotations;
-(void)setSelectedAnnotations:(NSSet *)arg1 ;
-(AKCropAnnotation *)cropAnnotation;
-(void)addCropToolAnnotation;
-(CGRect)appliedCropRect;
-(void)setAppliedCropRect:(CGRect)arg1 ;
-(void)removeCropToolAnnotation;
-(void)selectAnnotation:(id)arg1 byExtendingSelection:(char)arg2 ;
-(char)hasMaskBorderAnnotation;
-(AKInkAnnotation *)inkCanvasAnnotation;
-(void)setInkCanvasAnnotationOneTime:(id)arg1 ;
-(void)bringSelectedAnnotationsForward;
-(void)bringSelectedAnnotationsToFront;
-(void)sendSelectedAnnotationsBackward;
-(void)sendSelectedAnnotationsToBack;
-(id)archivableRepresentation;
-(id)initWithArchivableRepresentation:(id)arg1 ;
-(void)setStatisticsLogger:(AKStatistics *)arg1 ;
-(void)selectAllAnnotations;
-(AKStatistics *)statisticsLogger;
-(id)selectionStateForUndo;
-(void)restoreSelectionStateForUndo:(id)arg1 ;
-(void)_ensureInkAnnotationIsInFrontWhenEditsAreDone;
-(void)setInkCanvasAnnotation:(AKInkAnnotation *)arg1 ;
-(void)_enableEditObservationForAnnotationIfNew:(id)arg1 ;
-(void)_logAnnotationAdded:(id)arg1 ;
-(void)insertObject:(id)arg1 inAnnotationsAtIndex:(unsigned long long)arg2 ;
-(void)removeAnnotationsAtIndexes:(id)arg1 ;
-(void)removeSelectedAnnotationsObject:(id)arg1 ;
-(void)removeSelectedAnnotations:(id)arg1 ;
-(void)replaceObjectInAnnotationsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)_postSelectedAnnotationsChangedNotification;
-(void)addSelectedAnnotationsObject:(id)arg1 ;
-(void)addSelectedAnnotations:(id)arg1 ;
-(void)insertAnnotations:(id)arg1 atIndexes:(id)arg2 ;
-(void)selectAnnotationsAtIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)setCropAnnotation:(AKCropAnnotation *)arg1 ;
-(void)_coalescedEnsureInkAnnotationIsInFront:(id)arg1 ;
-(void)removeAllAnnotations;
-(void)removeObjectFromAnnotationsAtIndex:(unsigned long long)arg1 ;
-(void)replaceAnnotationsAtIndexes:(id)arg1 withAnnotations:(id)arg2 ;
-(void)intersectSelectedAnnotations:(id)arg1 ;
@end

