/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/Versions/A/HIDDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;

}
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(char)factoryReset:(unsigned char)arg1 securityToken:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)getSecurityToken:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)getHIDDevices;
-(char)setupInterface;
@end
