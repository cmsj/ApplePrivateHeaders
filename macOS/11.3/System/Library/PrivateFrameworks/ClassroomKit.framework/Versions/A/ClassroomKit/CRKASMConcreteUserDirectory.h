/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKASMUserDirectory.h>

@protocol CRKClassKitRosterRequirements;
@class NSString;

@interface CRKASMConcreteUserDirectory : NSObject <CRKASMUserDirectory> {

	id<CRKClassKitRosterRequirements> _requirements;
	/*^block*/id _queryGenerator;

}

@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
@property (nonatomic,readonly) id queryGenerator;                                           //@synthesize queryGenerator=_queryGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)studentDirectoryWithRosterRequirements:(id)arg1 locationIDs:(id)arg2 ;
+(id)instructorDirectoryWithRosterRequirements:(id)arg1 locationIDs:(id)arg2 ;
-(id<CRKClassKitRosterRequirements>)requirements;
-(id)initWithRosterRequirements:(id)arg1 queryGenerator:(/*^block*/id)arg2 ;
-(id)queryGenerator;
-(id)iteratorForSearchString:(id)arg1 sortingGivenNameFirst:(char)arg2 pageSize:(long long)arg3 ;
@end
