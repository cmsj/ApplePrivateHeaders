/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISOSUpdateProgressObserver.h>
#import <libobjc.A.dylib/ISAvailableUpdatesObserver.h>
#import <libobjc.A.dylib/ISOSUpdateScanObserver.h>

@interface CKUpdateControllerClient : NSObject <ISOSUpdateProgressObserver, ISAvailableUpdatesObserver, ISOSUpdateScanObserver> {

	/*^block*/id _osUpdateProgressHandler;
	/*^block*/id _availableUpdatesObserverBlock;
	/*^block*/id _osUpdateScanObserverBlock;

}

@property (copy) id osUpdateProgressHandler;                    //@synthesize osUpdateProgressHandler=_osUpdateProgressHandler - In the implementation block
@property (copy) id availableUpdatesObserverBlock;              //@synthesize availableUpdatesObserverBlock=_availableUpdatesObserverBlock - In the implementation block
@property (copy) id osUpdateScanObserverBlock;                  //@synthesize osUpdateScanObserverBlock=_osUpdateScanObserverBlock - In the implementation block
-(id)availableUpdatesObserverBlock;
-(id)osUpdateScanObserverBlock;
-(id)osUpdateProgressHandler;
-(void)setAvailableUpdatesObserverBlock:(id)arg1 ;
-(void)availableUpdatesDidChangedWithUpdates:(id)arg1 osUpdates:(id)arg2 badgeCount:(unsigned long long)arg3 ;
-(void)setOsUpdateScanObserverBlock:(id)arg1 ;
-(void)osUpdateScanForTags:(id)arg1 didProgressWithPercentComplete:(float)arg2 isFinished:(char)arg3 error:(id)arg4 ;
-(void)setOsUpdateProgressHandler:(id)arg1 ;
-(void)osUpdates:(id)arg1 changedProgress:(id)arg2 ;
@end
