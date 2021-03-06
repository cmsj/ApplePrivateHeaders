/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCoreDataCoreSpotlightDelegate.h>

@interface ICCoreDataCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate {

	char _isCheckingObjectConsistency;
	char _shouldPerformConsistencyCheck;
	unsigned long long _indexingPriority;

}

@property (assign,nonatomic) char isCheckingObjectConsistency;                  //@synthesize isCheckingObjectConsistency=_isCheckingObjectConsistency - In the implementation block
@property (nonatomic,readonly) char shouldPerformConsistencyCheck;              //@synthesize shouldPerformConsistencyCheck=_shouldPerformConsistencyCheck - In the implementation block
@property (assign,nonatomic) unsigned long long indexingPriority;               //@synthesize indexingPriority=_indexingPriority - In the implementation block
-(void)dealloc;
-(id)bundleIdentifier;
-(id)indexName;
-(void)stopSpotlightIndexing;
-(void)startSpotlightIndexing;
-(char)shouldIndexableObjectExistInIndexing:(id)arg1 ;
-(id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2 indexingPriority:(unsigned long long)arg3 ;
-(id)attributeSetForObject:(id)arg1 ;
-(unsigned long long)indexingPriority;
-(void)setIndexingPriority:(unsigned long long)arg1 ;
-(char)isCheckingObjectConsistency;
-(void)setIsCheckingObjectConsistency:(char)arg1 ;
-(char)shouldPerformConsistencyCheck;
@end

