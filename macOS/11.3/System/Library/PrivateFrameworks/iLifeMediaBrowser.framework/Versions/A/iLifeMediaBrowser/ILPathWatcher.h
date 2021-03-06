/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ILPathWatcher : NSObject
+(id)sharedPathWatcher;
-(id)init;
-(id)_init;
-(char)isSavedQuery:(id)arg1 ;
-(char)watchPathIsUnique:(id)arg1 observer:(id)arg2 ;
-(void)watchQuery:(id)arg1 observer:(id)arg2 queryScope:(id)arg3 queryRunMode:(int)arg4 ;
-(char)watchedQueryIsUnique:(id)arg1 observer:(id)arg2 ;
-(void)removeAllPaths:(id)arg1 ;
-(void)watchPath:(id)arg1 observer:(id)arg2 ;
-(void)removePath:(id)arg1 observer:(id)arg2 ;
-(void)refreshPath:(id)arg1 observer:(id)arg2 ;
-(void)refreshAllPaths:(id)arg1 ;
@end

