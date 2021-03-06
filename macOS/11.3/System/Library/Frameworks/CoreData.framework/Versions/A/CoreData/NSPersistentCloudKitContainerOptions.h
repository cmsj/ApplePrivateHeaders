/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCloudKitMirroringDelegateProgressProvider;
@class NSString, NSObject;

@interface NSPersistentCloudKitContainerOptions : NSObject {

	char _useDeviceToDeviceEncryption;
	NSString* _containerIdentifier;
	NSString* _apsConnectionMachServiceName;
	long long _databaseScope;
	NSObject*<NSCloudKitMirroringDelegateProgressProvider> _progressProvider;

}

@property (assign) char useEncryptedStorage; 
@property (assign) char useDeviceToDeviceEncryption;                                                                      //@synthesize useDeviceToDeviceEncryption=_useDeviceToDeviceEncryption - In the implementation block
@property (nonatomic,retain) NSString * apsConnectionMachServiceName;                                                     //@synthesize apsConnectionMachServiceName=_apsConnectionMachServiceName - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<NSCloudKitMirroringDelegateProgressProvider> progressProvider;              //@synthesize progressProvider=_progressProvider - In the implementation block
@property (copy,readonly) NSString * containerIdentifier;                                                                 //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) long long databaseScope;                                                                     //@synthesize databaseScope=_databaseScope - In the implementation block
-(char)useDeviceToDeviceEncryption;
-(char)useEncryptedStorage;
-(void)dealloc;
-(NSString *)containerIdentifier;
-(void)setUseEncryptedStorage:(char)arg1 ;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)setUseDeviceToDeviceEncryption:(char)arg1 ;
-(NSString *)apsConnectionMachServiceName;
-(void)setApsConnectionMachServiceName:(NSString *)arg1 ;
-(void)setProgressProvider:(NSObject*<NSCloudKitMirroringDelegateProgressProvider>)arg1 ;
-(NSObject*<NSCloudKitMirroringDelegateProgressProvider>)progressProvider;
@end

