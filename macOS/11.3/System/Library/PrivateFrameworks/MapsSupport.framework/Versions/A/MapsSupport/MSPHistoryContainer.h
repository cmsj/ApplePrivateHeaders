/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPContainer.h>

@class NSMutableSet;

@interface MSPHistoryContainer : MSPContainer {

	NSMutableSet* _dependents;

}
+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(id)queryWithDelegate:(id)arg1 ;
-(void)addDependent:(id)arg1 ;
-(void)removeDependent:(id)arg1 ;
-(void)_processNewEditedContents:(id)arg1 ;
-(void)_processNewLoadedContents:(id)arg1 ;
-(void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
