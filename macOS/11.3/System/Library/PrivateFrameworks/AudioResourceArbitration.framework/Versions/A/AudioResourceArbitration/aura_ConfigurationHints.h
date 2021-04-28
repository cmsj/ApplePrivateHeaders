/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioResourceArbitration.framework/Versions/A/AudioResourceArbitration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioResourceArbitration/AudioResourceArbitration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface aura_ConfigurationHints : NSObject <NSCopying> {

	vector<aura_VirtualPortHints *, std::__1::allocator<aura_VirtualPortHints *>>* _virtualPortHints;
	vector<aura_DeviceHints *, std::__1::allocator<aura_DeviceHints *>>* _deviceHints;
	vector<aura_IOControllerHints *, std::__1::allocator<aura_IOControllerHints *>>* _ioControllerHints;

}

@property (assign,nonatomic) vector<aura_VirtualPortHints * virtualPortHints;                //@synthesize virtualPortHints=_virtualPortHints - In the implementation block
@property (assign,nonatomic) vector<aura_DeviceHints * deviceHints;                          //@synthesize deviceHints=_deviceHints - In the implementation block
@property (assign,nonatomic) vector<aura_IOControllerHints * ioControllerHints;              //@synthesize ioControllerHints=_ioControllerHints - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(vector<aura_IOControllerHints *)ioControllerHints;
-(vector<aura_VirtualPortHints *)virtualPortHints;
-(void)setVirtualPortHints:(vector<aura_VirtualPortHints *)arg1 ;
-(vector<aura_DeviceHints *)deviceHints;
-(void)setDeviceHints:(vector<aura_DeviceHints *)arg1 ;
-(void)setIoControllerHints:(vector<aura_IOControllerHints *)arg1 ;
@end
