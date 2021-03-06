/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpData/HelpData-Structs.h>
#import <HelpData/HPDBaseClient.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HPDClient : HPDBaseClient {

	CFMessagePortRef _serverPortRef;
	CFMessagePortRef _localPortRef;
	NSObject*<OS_dispatch_queue> _messageQueue;

}
-(void)dealloc;
-(id)init;
-(id)preferredLocalizations;
-(char)stop;
-(void)abort;
-(char)performQuery:(id)arg1 ;
-(char)cancelQuery:(id)arg1 ;
-(char)collect;
-(id)bookList;
-(id)bookWithIdentifier:(id)arg1 ;
-(char)registerBookWithIdentifier:(id)arg1 appBundleURL:(id)arg2 bookVersion:(id)arg3 bookURL:(id)arg4 ;
-(id)indexedBookIDs;
-(char)createServerPortIfNeeded;
-(id)sendMessage:(int)arg1 withData:(id)arg2 withReply:(char)arg3 ;
-(char)_registerBookWithIdentifier:(id)arg1 appBundleURL:(id)arg2 bookVersion:(id)arg3 bookURL:(id)arg4 ;
-(CFMessagePortRef)createLocalPortIfNeeded;
@end

