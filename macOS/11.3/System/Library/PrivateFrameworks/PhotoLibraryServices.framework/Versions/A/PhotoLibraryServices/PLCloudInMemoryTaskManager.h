/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject {

	NSMutableDictionary* _resourceIDsToDownloadTasks;
	NSMutableDictionary* _taskIDsToDownloadTasks;

}
-(id)init;
-(void)reset;
-(id)_identifierForResource:(id)arg1 ;
-(void)reportCompletionForResource:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(void)setTransferTask:(id)arg1 forResource:(id)arg2 ;
-(char)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg1 taskIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelTaskWithTaskIdentifier:(id)arg1 ;
@end

