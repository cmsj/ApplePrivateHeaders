/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CXCallDirectoryProviderHostProtocol <NSObject>
@required
-(oneway void)isIncrementalLoadingAllowed:(/*^block*/id)arg1;
-(oneway void)addBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeAllBlockingEntriesWithReply:(/*^block*/id)arg1;
-(oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeAllIdentificationEntriesWithReply:(/*^block*/id)arg1;
-(oneway void)completeRequestWithReply:(/*^block*/id)arg1;

@end
