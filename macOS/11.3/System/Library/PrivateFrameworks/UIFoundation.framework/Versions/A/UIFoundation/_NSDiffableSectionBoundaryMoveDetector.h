/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSIdentifierDiffer, _NSDiffableDataSourceState;
@class NSSet;

@interface _NSDiffableSectionBoundaryMoveDetector : NSObject {

	id<_NSIdentifierDiffer> _differ;
	id<_NSDiffableDataSourceState> _beforeState;
	id<_NSDiffableDataSourceState> _afterState;
	NSSet* _movePairs;
	char _didShortCircuit;

}

@property (nonatomic,readonly) NSSet * movePairs;                 //@synthesize movePairs=_movePairs - In the implementation block
@property (nonatomic,readonly) char didShortCircuit;              //@synthesize didShortCircuit=_didShortCircuit - In the implementation block
-(NSSet *)movePairs;
-(id)_computeMovePairsFoundation;
-(id)initWithItemDiffer:(id)arg1 beforeDataSourceState:(id)arg2 afterDataSourceState:(id)arg3 ;
-(id)_computeMovePairsSTL;
-(char)didShortCircuit;
@end

