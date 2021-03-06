/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, NSArray, NSUUID, NSString;

@interface HMDBackingStoreCacheFetchModelObjects : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	/*^block*/id _fetchResult;
	NSArray* _uuids;
	NSArray* _names;
	NSUUID* _parent;
	NSString* _type;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id fetchResult;                                   //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,retain) NSArray * uuids;                                //@synthesize uuids=_uuids - In the implementation block
@property (nonatomic,retain) NSArray * names;                                //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSUUID * parent;                                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSString * type;                                //@synthesize type=_type - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(NSUUID *)parent;
-(void)setNames:(NSArray *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(id)fetchResult;
-(void)setParent:(NSUUID *)arg1 ;
-(NSArray *)names;
-(NSArray *)uuids;
-(void)setFetchResult:(id)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(void)setUuids:(NSArray *)arg1 ;
-(id)initWithUUIDs:(id)arg1 fetchResult:(/*^block*/id)arg2 ;
-(id)initWithNames:(id)arg1 fetchResult:(/*^block*/id)arg2 ;
-(id)initWithGroup:(id)arg1 names:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithParent:(id)arg1 type:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 parent:(id)arg2 type:(id)arg3 fetchResult:(/*^block*/id)arg4 ;
@end

