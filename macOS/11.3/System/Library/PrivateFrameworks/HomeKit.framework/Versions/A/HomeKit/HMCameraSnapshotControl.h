/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraControl.h>
#import <libobjc.A.dylib/_HMCameraSnapshotControlDelegate.h>

@protocol HMCameraSnapshotControlDelegate;
@class HMFUnfairLock, _HMCameraSnapshotControl, HMCameraSnapshot, NSString;

@interface HMCameraSnapshotControl : HMCameraControl <_HMCameraSnapshotControlDelegate> {

	HMFUnfairLock* _lock;
	id<HMCameraSnapshotControlDelegate> _delegate;
	_HMCameraSnapshotControl* _snapshotControl;

}

@property (nonatomic,retain) _HMCameraSnapshotControl * snapshotControl;                       //@synthesize snapshotControl=_snapshotControl - In the implementation block
@property (assign,nonatomic,__weak) id<HMCameraSnapshotControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMCameraSnapshot * mostRecentSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMCameraSnapshotControlDelegate>)delegate;
-(void)setDelegate:(id<HMCameraSnapshotControlDelegate>)arg1 ;
-(HMCameraSnapshot *)mostRecentSnapshot;
-(void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1 ;
-(void)takeSnapshot;
-(void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSnapshotControl:(id)arg1 ;
-(_HMCameraSnapshotControl *)snapshotControl;
-(void)setSnapshotControl:(_HMCameraSnapshotControl *)arg1 ;
@end

