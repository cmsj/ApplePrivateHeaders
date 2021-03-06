/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface _CNSortsByPositionInAuxiliaryArray : NSObject {

	NSDictionary* _ranks;
	NSArray* _auxiliaryValues;
	/*^block*/id _transform;

}

@property (nonatomic,copy,readonly) id transform;                           //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * ranks;                   //@synthesize ranks=_ranks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * auxiliaryValues;              //@synthesize auxiliaryValues=_auxiliaryValues - In the implementation block
+(/*^block*/id)comparatorForSortingAccordingToAuxiliaryValues:(id)arg1 transform:(/*^block*/id)arg2 ;
-(id)transform;
-(/*^block*/id)comparator;
-(id)initWithAuxiliaryValues:(id)arg1 transform:(/*^block*/id)arg2 ;
-(void)prepareRankingIndex;
-(id)rankForObject:(id)arg1 ;
-(NSDictionary *)ranks;
-(NSArray *)auxiliaryValues;
@end

