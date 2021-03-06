/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosGraph/PhotosGraph-Structs.h>
@class NSCountedSet, NSMutableArray, PGPeopleVisitingVisit, PGGraphAddressNode, NSDateInterval, NSArray;

@interface PGPeopleVisitingSuperset : NSObject {

	NSCountedSet* _numberOfMomentsByDistance;
	NSMutableArray* _visits;
	PGPeopleVisitingVisit* _currentVisit;
	PGGraphAddressNode* _addressNode;
	NSDateInterval* _localDateInterval;
	unsigned long long _numberOfMatchingMoments;
	unsigned long long _totalNumberOfMoments;
	CLLocationCoordinate2D _coordinates;

}

@property (readonly) PGGraphAddressNode * addressNode;                        //@synthesize addressNode=_addressNode - In the implementation block
@property (readonly) CLLocationCoordinate2D coordinates;                      //@synthesize coordinates=_coordinates - In the implementation block
@property (readonly) NSDateInterval * localDateInterval;                      //@synthesize localDateInterval=_localDateInterval - In the implementation block
@property (readonly) unsigned long long numberOfMatchingMoments;              //@synthesize numberOfMatchingMoments=_numberOfMatchingMoments - In the implementation block
@property (readonly) unsigned long long totalNumberOfMoments;                 //@synthesize totalNumberOfMoments=_totalNumberOfMoments - In the implementation block
@property (readonly) NSArray * visits;                                        //@synthesize visits=_visits - In the implementation block
@property (readonly) double lowerVeryFarRatio; 
@property (readonly) double upperVeryFarRatio; 
@property (readonly) double lowerFarRatio; 
@property (readonly) double upperFarRatio; 
@property (readonly) double lowerCloseRatio; 
@property (readonly) double upperCloseRatio; 
-(id)description;
-(NSArray *)visits;
-(CLLocationCoordinate2D)coordinates;
-(NSDateInterval *)localDateInterval;
-(PGGraphAddressNode *)addressNode;
-(id)initWithAddressNode:(id)arg1 localDateInterval:(id)arg2 ;
-(double)lowerVeryFarRatio;
-(double)upperVeryFarRatio;
-(double)lowerFarRatio;
-(double)upperFarRatio;
-(double)lowerCloseRatio;
-(double)upperCloseRatio;
-(void)registerMomentNode:(id)arg1 distance:(unsigned long long)arg2 ;
-(void)closeVisitFindingSession;
-(void)resetVisitFindingSession;
-(unsigned long long)numberOfMatchingMoments;
-(unsigned long long)totalNumberOfMoments;
@end

