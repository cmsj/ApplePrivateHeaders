/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LibraryRepair.framework/Versions/A/LibraryRepair
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, SFAuthorization, NSArray;

@interface LROperation : NSObject {

	id _internal;

}

@property (copy) NSURL * url; 
@property (assign) int flags; 
@property (retain) SFAuthorization * auth; 
@property (assign) id<LROperationDelegate> delegate; 
@property (readonly) NSArray * pathsNeedingRepair; 
@property (readonly) unsigned long long pathsNeedingRepairCount; 
+(id)alloc;
-(void)invalidate;
-(void)cancel;
-(void)beginRepair;
-(NSArray *)pathsNeedingRepair;
-(unsigned long long)pathsNeedingRepairCount;
@end

