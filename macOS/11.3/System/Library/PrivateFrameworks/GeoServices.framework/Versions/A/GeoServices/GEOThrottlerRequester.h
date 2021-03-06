/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOThrottlerRequester : NSObject
+(id)sharedRequester;
-(id)getTokenOrInfoFor:(SCD_Struct_GE87)arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned*)arg3 error:(id*)arg4 ;
-(char)allowRequest:(SCD_Struct_GE87)arg1 forClient:(id)arg2 throttlerToken:(id*)arg3 error:(id*)arg4 ;
-(char)_getTokenAndInfo:(id*)arg1 forRequest:(SCD_Struct_GE87)arg2 nextSafeRequestTime:(double*)arg3 availableRequestCount:(unsigned*)arg4 error:(id*)arg5 ;
-(char)getThrottleStateFor:(SCD_Struct_GE87)arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned*)arg3 error:(id*)arg4 ;
@end

