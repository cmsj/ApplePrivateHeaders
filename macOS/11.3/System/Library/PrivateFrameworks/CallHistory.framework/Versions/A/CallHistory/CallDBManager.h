/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Versions/A/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DBManager;

@interface CallDBManager : NSObject {

	char _deviceUnlocked;
	unsigned char _dataStoreType;
	unsigned char _notifyDataStoreChangeReason;
	DBManager* _dbManager;
	id _deviceUnlockNotificationRef;

}

@property (retain) id deviceUnlockNotificationRef;                         //@synthesize deviceUnlockNotificationRef=_deviceUnlockNotificationRef - In the implementation block
@property (nonatomic,retain) DBManager * dbManager;                        //@synthesize dbManager=_dbManager - In the implementation block
@property (assign) char deviceUnlocked;                                    //@synthesize deviceUnlocked=_deviceUnlocked - In the implementation block
@property (assign) unsigned char dataStoreType;                            //@synthesize dataStoreType=_dataStoreType - In the implementation block
@property (assign) unsigned char notifyDataStoreChangeReason;              //@synthesize notifyDataStoreChangeReason=_notifyDataStoreChangeReason - In the implementation block
+(id)modelURL;
+(id)getDBLocationIsSandboxed:(char)arg1 isTemporary:(char)arg2 error:(unsigned char*)arg3 ;
+(id)dataStoreName;
-(void)dealloc;
-(id)init;
-(id)createManagedObjectContext;
-(void)registerForNotifications;
-(char)deviceUnlocked;
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(DBManager *)dbManager;
-(char)notifyDataStoreChanged;
-(unsigned char)notifyDataStoreChangeReason;
-(unsigned char)dataStoreType;
-(void)setNotifyDataStoreChangeReason:(unsigned char)arg1 ;
-(void)handlePermanentCreated;
-(void)moveCallsFromTempDatabase;
-(void)createDataStore;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)handleTemporaryCreated;
-(char)shouldCreatePermanent;
-(void)createPermanent;
-(char)shouldCreateTemporary;
-(void)createTemporary;
-(void)setDeviceUnlockNotificationRef:(id)arg1 ;
-(void)setDataStoreType:(unsigned char)arg1 ;
-(id)deviceUnlockNotificationRef;
-(void)reFetchState;
-(void)setDbManager:(DBManager *)arg1 ;
-(void)setDeviceUnlocked:(char)arg1 ;
@end
