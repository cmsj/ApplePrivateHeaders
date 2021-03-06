/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Mondrian/Mondrian-Structs.h>
#import <Mondrian/MOLoggingStore.h>

@interface MOTracing : MOLoggingStore {

	int _token;

}
+(id)sharedTracing;
+(void)logMessageWithFunction:(const char*)arg1 file:(const char*)arg2 line:(int)arg3 facility:(const char*)arg4 aslmesssage:(asl_object_sRef)arg5 format:(id)arg6 arguments:(_va_list_tag*)arg7 ;
+(void)logMessageWithFunction:(const char*)arg1 file:(const char*)arg2 line:(int)arg3 facility:(const char*)arg4 aslmesssage:(asl_object_sRef)arg5 format:(id)arg6 ;
+(id)flattenIndexPaths:(id)arg1 ;
+(id)flattenIndexSet:(id)arg1 ;
+(id)flattenObjects:(id)arg1 ;
-(void)dealloc;
-(void)_updateUserDefaults;
@end

