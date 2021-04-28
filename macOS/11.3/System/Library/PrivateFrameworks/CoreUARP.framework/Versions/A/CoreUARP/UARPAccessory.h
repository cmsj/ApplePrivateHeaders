/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/Versions/A/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UARPAccessoryID, NSMutableArray, NSMutableSet, NSString, NSUUID;

@interface UARPAccessory : NSObject {

	UARPAccessoryID* _id;
	NSMutableArray* _internalPendingAssets;
	char _reachable;
	char _assetTransfersPaused;
	NSMutableSet* _pendingClientPropertyQueries;
	char _userInitiatedFirmwareStaging;
	char _userInitiatedFirmwareApply;
	char _enableFirmwareDownloadOnDemand;
	unsigned _firmwareUpdateBytesTransferred;
	unsigned _firmwareUpdateBytesTotal;
	NSString* _availableFirmwareVersion;
	NSString* _filepathCurrentAsset;

}

@property (retain) NSUUID * uuid; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * modelName; 
@property (readonly) NSString * modelNumber; 
@property (readonly) NSString * manufacturer; 
@property (readonly) NSString * firmwareVersion; 
@property (readonly) NSString * productNumber; 
@property (readonly) NSString * productGroup; 
@property (readonly) NSString * hwFusingType; 
@property (copy) NSString * stagedFirmwareVersion; 
@property (copy) NSString * availableFirmwareVersion;                    //@synthesize availableFirmwareVersion=_availableFirmwareVersion - In the implementation block
@property (assign) char userInitiatedFirmwareStaging;                    //@synthesize userInitiatedFirmwareStaging=_userInitiatedFirmwareStaging - In the implementation block
@property (assign) char userInitiatedFirmwareApply;                      //@synthesize userInitiatedFirmwareApply=_userInitiatedFirmwareApply - In the implementation block
@property (assign) unsigned firmwareUpdateBytesTransferred;              //@synthesize firmwareUpdateBytesTransferred=_firmwareUpdateBytesTransferred - In the implementation block
@property (assign) unsigned firmwareUpdateBytesTotal;                    //@synthesize firmwareUpdateBytesTotal=_firmwareUpdateBytesTotal - In the implementation block
@property (copy) NSString * filepathCurrentAsset;                        //@synthesize filepathCurrentAsset=_filepathCurrentAsset - In the implementation block
@property (assign) char enableFirmwareDownloadOnDemand;                  //@synthesize enableFirmwareDownloadOnDemand=_enableFirmwareDownloadOnDemand - In the implementation block
@property (assign) char downloadOnCellularAllowed; 
@property (assign) char autoDownloadAllowed; 
@property (assign) long long transport; 
@property (assign) unsigned long long capability; 
+(id)logger;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)modelName;
-(void)setModelName:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(NSString *)modelNumber;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setModelNumber:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 ;
-(long long)transport;
-(void)setTransport:(long long)arg1 ;
-(id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4 ;
-(id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4 productGroup:(id)arg5 productNumber:(id)arg6 ;
-(id)initWithModelNumber:(id)arg1 ;
-(void)setProductGroup:(NSString *)arg1 ;
-(void)setProductNumber:(NSString *)arg1 ;
-(void)setStagedFirmwareVersion:(NSString *)arg1 ;
-(void)setHwFusingType:(NSString *)arg1 ;
-(void)setCapability:(unsigned long long)arg1 ;
-(unsigned long long)capability;
-(NSString *)stagedFirmwareVersion;
-(NSString *)productGroup;
-(NSString *)productNumber;
-(NSString *)hwFusingType;
-(char)downloadOnCellularAllowed;
-(void)setDownloadOnCellularAllowed:(char)arg1 ;
-(char)autoDownloadAllowed;
-(void)setAutoDownloadAllowed:(char)arg1 ;
-(id)getID;
-(id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 uuid:(id)arg3 ;
-(id)initWithHardwareID:(id)arg1 uuid:(id)arg2 ;
-(void)addPendingAsset:(id)arg1 ;
-(void)removePendingAsset:(id)arg1 ;
-(id)pendingAssets;
-(void)setReachable:(char)arg1 ;
-(char)reachable;
-(void)setAssetTransfersPaused:(char)arg1 ;
-(char)assetTransfersPaused;
-(void)addPendingClientPropertyQuery:(unsigned long long)arg1 ;
-(void)removePendingClientPropertyQuery:(unsigned long long)arg1 ;
-(char)clientQueryPendingForProperty:(unsigned long long)arg1 ;
-(NSString *)availableFirmwareVersion;
-(void)setAvailableFirmwareVersion:(NSString *)arg1 ;
-(char)userInitiatedFirmwareStaging;
-(void)setUserInitiatedFirmwareStaging:(char)arg1 ;
-(char)userInitiatedFirmwareApply;
-(void)setUserInitiatedFirmwareApply:(char)arg1 ;
-(unsigned)firmwareUpdateBytesTransferred;
-(void)setFirmwareUpdateBytesTransferred:(unsigned)arg1 ;
-(unsigned)firmwareUpdateBytesTotal;
-(void)setFirmwareUpdateBytesTotal:(unsigned)arg1 ;
-(NSString *)filepathCurrentAsset;
-(void)setFilepathCurrentAsset:(NSString *)arg1 ;
-(char)enableFirmwareDownloadOnDemand;
-(void)setEnableFirmwareDownloadOnDemand:(char)arg1 ;
@end
