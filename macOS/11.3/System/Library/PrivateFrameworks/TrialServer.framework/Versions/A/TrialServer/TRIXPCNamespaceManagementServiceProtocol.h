/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIXPCNamespaceManagementServiceProtocol
@required
-(void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 completion:(/*^block*/id)arg6;
-(void)deregisterNamespaceWithNamespaceName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startDownloadNamespaceWithName:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)startDownloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;

@end

