/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNFoundationError : NSObject
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)timeoutError;
+(char)isCanceledError:(id)arg1 ;
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
+(id)errorWithErrno;
+(id)errorWithErrno:(int)arg1 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
+(id)errorWithErrno:(int)arg1 userInfo:(id)arg2 ;
+(char)isError:(id)arg1 errorWithDomain:(id)arg2 code:(long long)arg3 ;
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
+(char)ifResultIsNo:(char)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
+(char)isTimeoutError:(id)arg1 ;
+(id)userCanceledError;
+(char)isFileNotFoundError:(id)arg1 ;
+(char)isFileAlreadyExistsError:(id)arg1 ;
+(char)isCertificateError:(id)arg1 ;
+(id)errorWithErrnoAndUserInfo:(id)arg1 ;
+(char)ifResultIsNo:(char)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
@end
