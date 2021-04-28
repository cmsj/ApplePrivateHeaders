/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalDelegateHandler : NSObject
+(void)refreshDelegateListForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(char)parseResponse:(id)arg1 error:(id*)arg2 ;
+(id)_getGrantedDelegateListForCalDAVAccount:(id)arg1 allowExpand:(char)arg2 error:(id*)arg3 ;
+(char)_updateGrantedDelegatesListWithAdd:(id)arg1 remove:(id)arg2 forCalDAVAccount:(id)arg3 withError:(id*)arg4 ;
+(char)addDelegate:(id)arg1 toAccount:(id)arg2 withError:(id*)arg3 ;
+(char)removeDelegate:(id)arg1 fromAccount:(id)arg2 withError:(id*)arg3 ;
+(id)getGrantedDelegateListForAccount:(id)arg1 withError:(id*)arg2 ;
+(char)addGrantedDelegate:(id)arg1 toAccount:(id)arg2 withError:(id*)arg3 ;
+(char)removeGrantedDelegate:(id)arg1 toAccount:(id)arg2 withError:(id*)arg3 ;
+(char)toggleAllowWriteForGrantedDelegate:(id)arg1 toAccount:(id)arg2 withError:(id*)arg3 ;
@end
