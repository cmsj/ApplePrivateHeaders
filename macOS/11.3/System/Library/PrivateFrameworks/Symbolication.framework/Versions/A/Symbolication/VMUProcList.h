/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject {

	NSLock* procLock;
	NSMutableDictionary* allProcs;
	NSMutableDictionary* filteredProcs;

}
-(id)init;
-(unsigned long long)count;
-(char)update;
-(id)allNames;
-(char)updateFromSystem;
-(void)_populateFromSystem;
-(id)newestProcInfoWithName:(id)arg1 ;
-(void)setProcInfos:(id)arg1 ;
-(void)addProcInfo:(id)arg1 ;
-(void)removeProcInfo:(id)arg1 ;
-(id)allProcInfos;
-(id)allPIDs;
-(id)allPathNames;
-(id)newestProcInfo;
-(id)procInfoWithPID:(int)arg1 ;
@end

