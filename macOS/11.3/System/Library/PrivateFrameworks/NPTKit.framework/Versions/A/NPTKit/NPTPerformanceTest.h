/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/Versions/A/NPTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NPTKit/NPTKit-Structs.h>
#import <NPTKit/NPTPingDelegate.h>
#import <NPTKit/NPTDownloadDelegate.h>
#import <NPTKit/NPTUploadDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_activity;
@class NPTDownload, NPTUpload, NPTPing, NSMutableDictionary, NSString, NSObject, NPTPerformanceTestConfiguration, NPTResults, NSDictionary;

@interface NPTPerformanceTest : NSObject <NPTPingDelegate, NPTDownloadDelegate, NPTUploadDelegate, NSSecureCoding, NSCopying> {

	NPTDownload* download;
	NPTUpload* upload;
	NPTPing* ping;
	NSMutableDictionary* restoredMetadata;
	NSString* uuid;
	NSObject*<OS_nw_activity> performanceTestActivity;
	NSMutableDictionary* snapshots;
	char _inTimedMode;
	id _delegate;
	NPTPerformanceTestConfiguration* _configuration;
	NPTResults* _results;
	NSDictionary* __additionalMetadata;

}

@property (nonatomic,retain) NPTResults * results;                                         //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) char inTimedMode;                                             //@synthesize inTimedMode=_inTimedMode - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NPTPerformanceTestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,retain) NSDictionary * _additionalMetadata;                           //@synthesize _additionalMetadata=__additionalMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)performanceTestWithConfiguration:(id)arg1 ;
+(id)performanceTestWithDefaultConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NPTResults *)results;
-(void)setResults:(NPTResults *)arg1 ;
-(void)save;
-(id)initWithConfiguration:(id)arg1 ;
-(NPTPerformanceTestConfiguration *)configuration;
-(void)setConfiguration:(NPTPerformanceTestConfiguration *)arg1 ;
-(NSDictionary *)metadata;
-(NSDictionary *)_additionalMetadata;
-(void)uploadWillStart;
-(char)inTimedMode;
-(void)upload:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)upload:(id)arg1 didReceiveSpeedMetric:(id)arg2 ;
-(void)upload:(id)arg1 didFinishWithResults:(id)arg2 ;
-(void)getCDNDebugInfoWithTimeoutDuration:(double)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)set_additionalMetadata:(NSDictionary *)arg1 ;
-(void)startUploadWithCompletion:(/*^block*/id)arg1 ;
-(void)startDownloadWithCompletion:(/*^block*/id)arg1 ;
-(void)startPingWithCompletion:(/*^block*/id)arg1 ;
-(id)getFlattenedDictionary;
-(id)timestampMasked;
-(id)convertDateToISO8601String:(id)arg1 ;
-(id)timestampMaskedString;
-(void)pingWillStartPinging;
-(void)pingDidFinishWithResults:(id)arg1 ;
-(void)pingDidFinishWithError:(id)arg1 ;
-(void)downloadWillStart;
-(void)download:(id)arg1 didReceiveSpeedMetric:(id)arg2 ;
-(void)download:(id)arg1 didFinishWithResults:(id)arg2 ;
-(void)download:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTestWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelAllNetworking;
-(void)setInTimedMode:(char)arg1 ;
@end

