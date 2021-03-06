/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSHashTable;

@interface TSPSaveOperationState : NSObject {

	NSMapTable* _newDataStorages;
	NSHashTable* _remoteData;
	NSMapTable* _saveOperationStatesForRemoteStorages;
	int _sampleID;
	long long _updateType;

}

@property (nonatomic,readonly) char shouldUpdate; 
@property (nonatomic,readonly) char isSavingCurrentDocument; 
@property (nonatomic,readonly) char inheritAttributes; 
@property (nonatomic,readonly) long long updateType;                      //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) char hasAnyRemoteData; 
@property (assign,nonatomic) int sampleID;                                //@synthesize sampleID=_sampleID - In the implementation block
-(id)init;
-(long long)updateType;
-(char)shouldUpdate;
-(void)setSampleID:(int)arg1 ;
-(char)isSavingCurrentDocument;
-(char)inheritAttributes;
-(char)hasAnyRemoteData;
-(int)sampleID;
-(char)hasNewStorageForData:(id)arg1 ;
-(void)addNewStorage:(id)arg1 forData:(id)arg2 ;
-(char)hasRemoteData:(id)arg1 ;
-(void)enumerateDataAndStoragesUsingBlock:(/*^block*/id)arg1 ;
-(id)saveOperationStateForRemoteStorage:(id)arg1 ;
-(void)enumerateRemoteDataUsingBlock:(/*^block*/id)arg1 ;
-(void)addNewPackageDataStorage:(id)arg1 forRemoteDataStorage:(id)arg2 changeCount:(unsigned long long)arg3 ;
-(void)addRemoteData:(id)arg1 ;
-(id)initWithUpdateType:(long long)arg1 ;
@end

