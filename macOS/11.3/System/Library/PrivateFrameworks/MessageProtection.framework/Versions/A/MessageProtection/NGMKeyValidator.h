/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageProtection/MessageProtection-Structs.h>
@interface NGMKeyValidator : NSObject
+(id)keyValidatorWithReceiversIdentity:(id)arg1 sendersIdentity:(id)arg2 ;
+(char)isValidKeyValidator:(id)arg1 receiversIdentity:(id)arg2 sendersIdentity:(id)arg3 error:(id*)arg4 ;
+(NSRange)rangeOnPublicKey;
+(id)versionByte;
+(unsigned long long)validatorLength;
@end

