/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, NAFuture;

@interface HMBCloudZoneFetchRecordsContext : HMFObject {

	NSSet* _recordIDs;
	NAFuture* _future;

}

@property (copy,readonly) NSSet * recordIDs;              //@synthesize recordIDs=_recordIDs - In the implementation block
@property (readonly) NAFuture * future;                   //@synthesize future=_future - In the implementation block
-(NSSet *)recordIDs;
-(NAFuture *)future;
-(id)initWithRecordIDs:(id)arg1 future:(id)arg2 ;
@end

