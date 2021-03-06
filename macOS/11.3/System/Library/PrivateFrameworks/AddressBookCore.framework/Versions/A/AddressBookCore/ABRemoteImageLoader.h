/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface ABRemoteImageLoader : NSObject {

	NSOperationQueue* _workQueue;

}
+(id)sharedRemoteImageLoader;
+(id)personForEmailAddresses:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)beginLoadingImageForPerson:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingImageDataForTag:(long long)arg1 ;
-(long long)beginLoadingImageForEmails:(id)arg1 forClient:(id)arg2 ;
-(long long)beginLoadingImageForEmails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

