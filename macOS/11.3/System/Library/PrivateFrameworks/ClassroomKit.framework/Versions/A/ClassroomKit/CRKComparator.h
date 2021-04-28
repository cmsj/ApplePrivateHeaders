/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CRKComparator : NSObject {

	NSMutableArray* _allCriteria;

}

@property (nonatomic,readonly) NSMutableArray * allCriteria;              //@synthesize allCriteria=_allCriteria - In the implementation block
+(id)compareWithCriteria:(/*^block*/id)arg1 ;
+(/*^block*/id)compare;
-(/*^block*/id)run;
-(id)init;
-(id)compareWithCriteria:(/*^block*/id)arg1 ;
-(NSMutableArray *)allCriteria;
-(long long)runComparison;
-(/*^block*/id)compare;
@end
