/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedAccessory.framework/Versions/A/TrustedAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TANotificationDelegate.h>

@class TAManagerProxy, TAOperation, NSString;

@interface TADeviceManager : NSObject <TANotificationDelegate> {

	TAManagerProxy* _proxy;
	TAOperation* _currentOperation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)manager;
+(char)isSupportedPlatform;
-(id)init;
-(int)cancelOperation:(id)arg1 ;
-(id)connectedDevices;
-(id)pairedDevices;
-(void)operationFinished:(id)arg1 ;
-(id)connectedDevicesWithFilter:(id)arg1 ;
-(void)notification:(unsigned)arg1 withData:(id)arg2 ;
-(id)availablePairingSlotsWithError:(id*)arg1 ;
-(char)unpairAllDevicesWithError:(id*)arg1 ;
-(id)createSecureIntentOperationWithError:(id*)arg1 ;
-(int)startOperation:(id)arg1 withData:(id)arg2 ;
-(char)requestDailyUpdateWithError:(id*)arg1 ;
@end

