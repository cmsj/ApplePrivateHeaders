/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDSpamMessageCreator : NSObject
-(id)transferForGuid:(id)arg1 ;
-(id)surfURLForIMMessageItem:(id)arg1 ;
-(id)metaDataForSurfURL:(id)arg1 ;
-(char)isSurfPayment:(id)arg1 ;
-(char)hasDataDetectedInformalPayment:(id)arg1 ;
-(void)reportUnknownToIDS:(id)arg1 messageID:(id)arg2 isBlackholed:(char)arg3 messageServerTimestamp:(id)arg4 toURI:(id)arg5 ;
-(id)reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(char)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 onlyReportForiMessageService:(char)arg8 notifyInternalSecurity:(char)arg9 ;
@end

