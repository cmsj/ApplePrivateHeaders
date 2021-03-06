/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOAnalyticsPipelineProxy.h>

@protocol GEOAnalyticsPipelineProxy;
@class geo_isolater, NSString;

@interface GEOAnalyticsPipelineManager : NSObject <GEOAnalyticsPipelineProxy> {

	id<GEOAnalyticsPipelineProxy> _proxy;
	char _evDirectionsFeedbackAllowed;
	char _directionsFeedbackAllowed;
	char _evDirectionsFeedbackAuth;
	id _evDirectionsFeedbackAllowedListener;
	id _evDirectionsFeedbackAuthListener;
	geo_isolater* _evInfoIsolator;

}

@property (nonatomic,readonly) char evDirectionsFeedbackAuth;               //@synthesize evDirectionsFeedbackAuth=_evDirectionsFeedbackAuth - In the implementation block
@property (assign,nonatomic) char evDirectionsFeedbackAllowed;              //@synthesize evDirectionsFeedbackAllowed=_evDirectionsFeedbackAllowed - In the implementation block
@property (assign,nonatomic) char directionsFeedbackAllowed;                //@synthesize directionsFeedbackAllowed=_directionsFeedbackAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)useProxyClass:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 ;
-(void)shortSessionValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)setShortSessionValues:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(/*^block*/id)arg4 completionQueue:(id)arg5 ;
-(void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(/*^block*/id)arg5 completionQueue:(id)arg6 ;
-(void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)reportDailySettingsStates:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)setEvalMode:(char)arg1 ;
-(void)flushEvalData;
-(void)initiateUploadOfType:(int)arg1 ;
-(void)showEvalDataWithVisitorBlock:(/*^block*/id)arg1 ;
-(id)getEvalStatus;
-(void)runAggregationTasks;
-(char)PlatformDiagAndUsage;
-(char)AppleInternal;
-(char)GEOImproveMaps;
-(char)GEOMapsLocationAuth;
-(char)PlatformDiagAndUsageOrAppleInternal;
-(void)logToDiagAndUsageUnderBugId:(id)arg1 filePrefix:(id)arg2 logData:(id)arg3 ;
-(char)getEvDirectionsFeedbackAuth;
-(char)getEvDirectionsFeedbackAllowed;
-(void)setEvDirectionsFeedbackAllowed:(char)arg1 ;
-(void)toggleEVDirectionsFeedbackAllowed;
-(void)reportMapKitCountType:(int)arg1 ;
-(void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 ;
-(void)reportDailySettingsStates:(id)arg1 ;
-(int)functionalAppGroup;
-(char)evDirectionsFeedbackAllowed;
-(char)directionsFeedbackAllowed;
-(void)setDirectionsFeedbackAllowed:(char)arg1 ;
-(char)evDirectionsFeedbackAuth;
@end

