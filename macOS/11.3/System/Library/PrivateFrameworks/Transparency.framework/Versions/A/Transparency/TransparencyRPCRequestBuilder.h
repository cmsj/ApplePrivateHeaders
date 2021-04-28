/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TransparencyRPCRequestBuilder : NSObject
+(id)buildRevisionLogInclusionProofRequest:(id)arg1 logType:(int)arg2 revisions:(id)arg3 error:(id*)arg4 ;
+(id)buildConsistencyProofRequest:(id)arg1 revisions:(id)arg2 error:(id*)arg3 ;
+(id)buildQueryRequest:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 application:(id)arg4 error:(id*)arg5 ;
+(id)buildPublicKeysRequest:(id)arg1 error:(id*)arg2 ;
@end
