/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/Versions/A/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHSChronoWidgetServiceServer <NSObject>
@required
-(void)addClient:(id)arg1;
-(void)removeClient:(id)arg1;
-(oneway void)flushPowerlog;
-(oneway void)expireLocationGracePeriods;
-(oneway void)applicationWithBundleIdentifierEnteredForeground:(id)arg1;
-(oneway void)setConfiguredWidgetContainerDescriptors:(id)arg1;
-(void)reloadTimelineForAvocadoWithIdentifier:(id)arg1 inBundleWithIdentifier:(id)arg2 error:(id*)arg3;
-(id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2;
-(id)widgetEnvironmentDataForBundleIdentifier:(id)arg1;
-(oneway void)setMetricsSpecification:(id)arg1;

@end
