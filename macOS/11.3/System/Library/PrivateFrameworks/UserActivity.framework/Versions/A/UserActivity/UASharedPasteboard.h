/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Versions/A/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UASharedPasteboardManager;

@interface UASharedPasteboard : NSObject {

	UASharedPasteboardManager* _manager;

}

@property (assign) UASharedPasteboardManager * manager;              //@synthesize manager=_manager - In the implementation block
+(void)initialize;
+(void)localPasteboardDidAddData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3 ;
+(id)remotePasteboard;
+(void)clearLocalPasteboardInformation;
+(void)startPreventingPasteboardSharing;
+(void)stopPreventingPasteboardSharing;
+(void)localPasteboardDidAddItems:(id)arg1 forGeneration:(unsigned long long)arg2 ;
+(void)localPasteboardDidPasteGeneration:(unsigned long long)arg1 ;
-(void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(UASharedPasteboardManager *)manager;
-(void)setManager:(UASharedPasteboardManager *)arg1 ;
-(id)currentRemoteDeviceName;
-(char)returnPasteboardDataBeforeArchives;
-(void)prefetchRemotePasteboardTypes:(id)arg1 ;
@end

