/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/Versions/A/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineLayoutScreenUtils, CUIKSingleDayTimelineGeometryDelegate;
@class CUIKSingleDayTimelineLayoutPartition, NSMutableArray, NSArray;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {

	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
	id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
	char _useTemporaryFitnessLevel;
	char _temporaryFitnessLevelRequiresCalculation;
	double _temporaryFitnessLevel;
	char _originalFitnessLevelRequiresCalculation;
	double _originalFitnessLevel;
	char _ignoreFirstOccurrenceInFitnessCalculations;
	char _ignoreLastOccurrenceInFitnessCalculations;
	char _isOnlyBucket;
	CUIKSingleDayTimelineLayoutPartition* _correspondingPartition;
	id<CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
	NSMutableArray* _currentOccurrences;

}

@property (nonatomic,retain) CUIKSingleDayTimelineLayoutPartition * correspondingPartition;              //@synthesize correspondingPartition=_correspondingPartition - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentOccurrences;                                        //@synthesize currentOccurrences=_currentOccurrences - In the implementation block
@property (nonatomic,readonly) NSArray * occurrences; 
@property (assign,nonatomic) char isOnlyBucket;                                                          //@synthesize isOnlyBucket=_isOnlyBucket - In the implementation block
@property (__weak) id<CUIKSingleDayTimelineGeometryDelegate> geometryDelegate;                           //@synthesize geometryDelegate=_geometryDelegate - In the implementation block
-(NSArray *)occurrences;
-(id<CUIKSingleDayTimelineGeometryDelegate>)geometryDelegate;
-(void)setGeometryDelegate:(id<CUIKSingleDayTimelineGeometryDelegate>)arg1 ;
-(CUIKSingleDayTimelineLayoutPartition *)correspondingPartition;
-(id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 geometryDelegate:(id)arg4 ;
-(void)addOccurrenceTemporarilyToEnd:(id)arg1 ;
-(void)makeTemporaryChangesPermanent;
-(void)setIsOnlyBucket:(char)arg1 ;
-(void)stampFramesOntoOccurrences;
-(id)earliestOccurrence;
-(id)_occurrencesForFitnessLevel;
-(char)isOnlyBucket;
-(id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 ;
-(void)addOccurrenceTemporarilyToBeginning:(id)arg1 ;
-(void)removeOccurrenceAtBeginningTemporarily;
-(void)removeOccurrenceAtEndTemporarily;
-(void)revertTemporaryChanges;
-(void)setCorrespondingPartition:(CUIKSingleDayTimelineLayoutPartition *)arg1 ;
-(NSMutableArray *)currentOccurrences;
-(void)setCurrentOccurrences:(NSMutableArray *)arg1 ;
@end

