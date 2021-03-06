/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/Versions/A/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHSChronoToolServiceServer <NSObject>
@required
-(void)addClient:(id)arg1;
-(void)removeClient:(id)arg1;
-(oneway void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)disableWakeBudgetWithCompletion:(/*^block*/id)arg1;
-(oneway void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)resetWakeBudgetWithCompletion:(/*^block*/id)arg1;
-(oneway void)wakesRemainingForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)listStateCaptureIdentifiersWithCompletion:(/*^block*/id)arg1;
-(oneway void)fetchStateWithCompletion:(/*^block*/id)arg1;
-(oneway void)fetchStateForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)extensionInfoForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)widgetsWithTimelines:(/*^block*/id)arg1;
-(oneway void)timelineForWidgetKey:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)resetCaches:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(oneway void)reloadTimelinesOfKind:(id)arg1 containedIn:(id)arg2 completion:(/*^block*/id)arg3;
-(oneway void)extensionInfo:(/*^block*/id)arg1;

@end

