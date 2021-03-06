/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCMessageTracer : NSObject
+(void)messageTraceOperationError:(id)arg1 domainPrefix:(id)arg2 domainSuffix:(id)arg3 uuid:(id)arg4 duration:(double)arg5 count:(unsigned long long)arg6 size:(unsigned long long)arg7 ;
+(void)messageTraceDomain:(id)arg1 withCustomKeysAndValues:(id)arg2 ;
+(void)messageTraceResult:(const char*)arg1 domain:(id)arg2 signature:(id)arg3 extraStatus:(id)arg4 ;
+(void)messageTraceResult:(const char*)arg1 count:(unsigned long long)arg2 domainPrefix:(id)arg3 domainSuffix:(id)arg4 signature:(id)arg5 extraStatus:(id)arg6 ;
+(void)messageTraceResult:(const char*)arg1 domain:(id)arg2 uuid:(id)arg3 signature:(id)arg4 extraStatus:(id)arg5 ;
+(void)messageTraceDomainPrefix:(id)arg1 domainSuffix:(id)arg2 signature:(id)arg3 signature2:(id)arg4 extraStatus:(id)arg5 ;
+(void)messageTraceResult:(const char*)arg1 domain:(id)arg2 signature:(id)arg3 ;
+(id)bucketSignatureForValue:(long long)arg1 ;
@end

