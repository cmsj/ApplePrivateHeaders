/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DesktopServicesPriv/DesktopServicesPriv-Structs.h>
@interface DSiTunesProgress : NSObject {

	TNSRef<NSProgress, void> _progress;
	TNSRef<AMPDevice, void> _device;
	TNodePtr* _deviceNode;
	vector<TKeyValueObserver, std::__1::allocator<TKeyValueObserver>>* _observers;

}
+(TNodePtr*)nodeForDevice:(id)arg1 ;
-(TNSRef<NSProgress, void>)progress;
-(id)initWithDevice:(id)arg1 andProgress:(id)arg2 ;
-(void)aboutToTearDown;
-(void)sendUpdate;
@end

