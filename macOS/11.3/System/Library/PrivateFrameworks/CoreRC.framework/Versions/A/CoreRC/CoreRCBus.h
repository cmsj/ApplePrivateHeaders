/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CoreRCBusDelegate;
@class CoreRCManager, NSMutableSet, NSUUID, NSSet;

@interface CoreRCBus : NSObject <NSCopying, NSSecureCoding> {

	id<CoreRCBusDelegate> _delegate;
	CoreRCManager* _manager;
	unsigned _assertionID;
	NSMutableSet* _devicesInternal;
	NSUUID* _uniqueID;

}

@property (nonatomic,readonly) NSMutableSet * devicesInternal;                        //@synthesize devicesInternal=_devicesInternal - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueID;                                     //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) char allowHibernation; 
@property (nonatomic,readonly) NSSet * devices; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)manager;
-(void)setManager:(id)arg1 ;
-(NSUUID *)uniqueID;
-(NSSet *)devices;
-(void)addDevice:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(void)didRemoveDevice:(id)arg1 ;
-(int)_allowSleep;
-(id)mergeDevice:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)propertyForKey:(id)arg1 error:(id*)arg2 ;
-(void)willAddToManager:(id)arg1 ;
-(void)didAddDevice:(id)arg1 ;
-(char)setAllowHibernation:(char)arg1 error:(id*)arg2 ;
-(void)willRemoveDevice:(id)arg1 ;
-(id)initWithBus:(id)arg1 ;
-(void)didUpdateProperties:(id)arg1 ;
-(id)mergeProperties;
-(id)deviceOnBusEquivalentTo:(id)arg1 ;
-(void)notifyDelegateDeviceUpdated:(id)arg1 ;
-(void)didAddToManager:(id)arg1 ;
-(void)willRemoveFromManager:(id)arg1 ;
-(void)didRemoveFromManager:(id)arg1 ;
-(void)removeAllDevices;
-(void)mergePropertiesFromBus:(id)arg1 ;
-(NSMutableSet *)devicesInternal;
-(void)willAddDevice:(id)arg1 ;
-(void)notifyDelegateDeviceAdded:(id)arg1 ;
-(void)notifyDelegateDeviceRemoved:(id)arg1 ;
-(void)notifyDelegateAllDevicesRemoved:(id)arg1 ;
-(int)_preventSleep;
-(void)replaceDevice:(id)arg1 withDevice:(id)arg2 ;
-(char)allowHibernation;
@end

