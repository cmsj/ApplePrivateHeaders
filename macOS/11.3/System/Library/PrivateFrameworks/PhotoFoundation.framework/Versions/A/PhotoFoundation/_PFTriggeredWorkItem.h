/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFInitializationClassWorkItem.h>

@class NSMutableArray;

@interface _PFTriggeredWorkItem : PFInitializationClassWorkItem {

	NSMutableArray* _triggeredWorkItems;
	opaque_pthread_mutex_t _triggeredWorkItemsLock;

}
-(id)init;
-(void)performInitialization;
-(char)addTriggeredWorkItem:(id)arg1 ;
-(char)runsWorkItemsConcurrently;
-(void)doOneWorkItem;
-(void)doAllWorkItems;
-(void)triggerWorkItems;
@end

