/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DMDAVPut : ISS_DAVRequest
+(id)putRequestWithSession:(id)arg1 data:(id)arg2 URI:(id)arg3 includeRangeHeader:(char)arg4 rangeStart:(unsigned long long)arg5 rangeEnd:(unsigned long long)arg6 token:(id)arg7 ;
+(id)putRequestWithSession:(id)arg1 file:(id)arg2 URI:(id)arg3 token:(id)arg4 ;
-(void)finalizeOperation;
-(id)initPutWithSession:(id)arg1 data:(id)arg2 URI:(id)arg3 includeRangeHeader:(char)arg4 rangeStart:(unsigned long long)arg5 rangeEnd:(unsigned long long)arg6 token:(id)arg7 ;
@end

