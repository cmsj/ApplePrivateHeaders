/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/Versions/A/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSString, DKReporterRegistry, DKReportPlanner, DKExtensionDiscovery, NSObject;

@interface DKReportManager : NSObject {

	char _cancelled;
	NSArray* _availableReportGenerators;
	NSString* _bundleIdentifier;
	DKReporterRegistry* _registry;
	DKReportPlanner* _planner;
	DKExtensionDiscovery* _discovery;
	NSObject*<OS_dispatch_queue> _reportManagerQueue;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) DKReporterRegistry * registry;                                //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) DKReportPlanner * planner;                                    //@synthesize planner=_planner - In the implementation block
@property (nonatomic,retain) DKExtensionDiscovery * discovery;                             //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reportManagerQueue;              //@synthesize reportManagerQueue=_reportManagerQueue - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;                            //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSArray * availableReportGenerators;                          //@synthesize availableReportGenerators=_availableReportGenerators - In the implementation block
-(id)init;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(DKExtensionDiscovery *)discovery;
-(void)setDiscovery:(DKExtensionDiscovery *)arg1 ;
-(DKReportPlanner *)planner;
-(DKReporterRegistry *)registry;
-(void)setRegistry:(DKReporterRegistry *)arg1 ;
-(NSObject*<OS_dispatch_queue>)reportManagerQueue;
-(id)sendRequestsForGroup:(id)arg1 concurrent:(char)arg2 failOnError:(char)arg3 error:(id*)arg4 ;
-(NSArray *)availableReportGenerators;
-(void)reportWithComponentPredicateManifest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportersWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelAllReports;
-(void)setAvailableReportGenerators:(NSArray *)arg1 ;
-(void)setPlanner:(DKReportPlanner *)arg1 ;
-(void)setReportManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

