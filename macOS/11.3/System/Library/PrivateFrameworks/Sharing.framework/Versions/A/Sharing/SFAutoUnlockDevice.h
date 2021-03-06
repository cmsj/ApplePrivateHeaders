/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFPeerDevice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSDictionary, NSData;

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding> {

	char _unlockEnabled;
	char _keyExists;
	char _bluetoothCloudPaired;
	char _supportsApproveWithWatch;
	char _placeholder;
	char _supportsAlwaysDirect;
	char _supportsApproveIcon;
	char _supportsEncryption;
	char _supportsAdvertisingUnlocked;
	char _supportsConnectionCache;
	char _supportsHEIC;
	NSString* _modelDescription;
	NSUUID* _bluetoothID;
	NSUUID* _proxyBluetoothID;
	NSString* _modelName;
	NSDictionary* _results;
	NSData* _hintToken;
	long long _majorOSVersion;

}

@property (nonatomic,copy) NSString * modelDescription;                     //@synthesize modelDescription=_modelDescription - In the implementation block
@property (assign,nonatomic) char unlockEnabled;                            //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (assign,nonatomic) char bluetoothCloudPaired;                     //@synthesize bluetoothCloudPaired=_bluetoothCloudPaired - In the implementation block
@property (nonatomic,retain) NSUUID * bluetoothID;                          //@synthesize bluetoothID=_bluetoothID - In the implementation block
@property (nonatomic,copy) NSUUID * proxyBluetoothID;                       //@synthesize proxyBluetoothID=_proxyBluetoothID - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain) NSString * modelName;                          //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,retain) NSDictionary * results;                        //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSData * hintToken;                            //@synthesize hintToken=_hintToken - In the implementation block
@property (assign,nonatomic) char placeholder;                              //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) char supportsAlwaysDirect;                     //@synthesize supportsAlwaysDirect=_supportsAlwaysDirect - In the implementation block
@property (assign,nonatomic) char supportsApproveWithWatch;                 //@synthesize supportsApproveWithWatch=_supportsApproveWithWatch - In the implementation block
@property (assign,nonatomic) char supportsApproveIcon;                      //@synthesize supportsApproveIcon=_supportsApproveIcon - In the implementation block
@property (assign,nonatomic) char supportsEncryption;                       //@synthesize supportsEncryption=_supportsEncryption - In the implementation block
@property (assign,nonatomic) char supportsAdvertisingUnlocked;              //@synthesize supportsAdvertisingUnlocked=_supportsAdvertisingUnlocked - In the implementation block
@property (assign,nonatomic) char supportsConnectionCache;                  //@synthesize supportsConnectionCache=_supportsConnectionCache - In the implementation block
@property (assign,nonatomic) char supportsHEIC;                             //@synthesize supportsHEIC=_supportsHEIC - In the implementation block
@property (assign,nonatomic) long long majorOSVersion;                      //@synthesize majorOSVersion=_majorOSVersion - In the implementation block
@property (assign,nonatomic) char keyExists;                                //@synthesize keyExists=_keyExists - In the implementation block
+(char)supportsSecureCoding;
-(char)bluetoothCloudPaired;
-(char)keyExists;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(char)placeholder;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(NSString *)modelDescription;
-(void)setModelDescription:(NSString *)arg1 ;
-(NSString *)modelName;
-(void)setModelName:(NSString *)arg1 ;
-(void)setPlaceholder:(char)arg1 ;
-(NSUUID *)bluetoothID;
-(void)setBluetoothID:(NSUUID *)arg1 ;
-(char)unlockEnabled;
-(void)setUnlockEnabled:(char)arg1 ;
-(char)supportsEncryption;
-(void)setSupportsEncryption:(char)arg1 ;
-(void)setKeyExists:(char)arg1 ;
-(void)setMajorOSVersion:(long long)arg1 ;
-(void)setSupportsAlwaysDirect:(char)arg1 ;
-(void)setSupportsApproveWithWatch:(char)arg1 ;
-(char)supportsApproveWithWatch;
-(void)setSupportsApproveIcon:(char)arg1 ;
-(void)setSupportsAdvertisingUnlocked:(char)arg1 ;
-(void)setSupportsConnectionCache:(char)arg1 ;
-(void)setSupportsHEIC:(char)arg1 ;
-(void)setProxyBluetoothID:(NSUUID *)arg1 ;
-(NSUUID *)proxyBluetoothID;
-(void)setBluetoothCloudPaired:(char)arg1 ;
-(char)supportsConnectionCache;
-(void)setHintToken:(NSData *)arg1 ;
-(char)supportsAlwaysDirect;
-(long long)majorOSVersion;
-(char)supportsHEIC;
-(NSData *)hintToken;
-(char)supportsAdvertisingUnlocked;
-(char)supportsApproveIcon;
@end

