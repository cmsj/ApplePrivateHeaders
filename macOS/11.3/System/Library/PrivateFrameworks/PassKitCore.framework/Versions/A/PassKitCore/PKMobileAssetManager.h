/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PKMobileAssetManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)fetchAssetsForMarketWithIdentifier:(id)arg1 userInitiated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchCityStationProviderAssetForBaseProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

