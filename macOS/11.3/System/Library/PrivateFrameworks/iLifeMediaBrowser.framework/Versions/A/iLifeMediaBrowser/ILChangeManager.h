/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ILMediaManager, NSOperationQueue, NSMutableDictionary, NSRecursiveLock;

@interface ILChangeManager : NSObject {

	ILMediaManager* _plugin;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _groupToOperationMap;
	NSRecursiveLock* _stateLock;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithPlugin:(id)arg1 ;
-(void)sendChangeNotificationForKey:(id)arg1 fromSource:(id)arg2 ;
-(void)cancelMediaGroupLoadingExcludingMediaGroups:(id)arg1 ;
-(void)addChangeOperation:(id)arg1 ;
-(void)_sendChangeNotification:(id)arg1 ;
-(void)addChangeOperation:(id)arg1 forMediaGroup:(id)arg2 ;
@end

