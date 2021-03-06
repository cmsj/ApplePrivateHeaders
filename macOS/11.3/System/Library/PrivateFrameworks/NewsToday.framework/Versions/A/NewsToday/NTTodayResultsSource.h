/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTTodayResultsSource.h>

@protocol NTTodayResultsSource <NSObject>
@required
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1;
-(void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(id)placeholderResultsWithOperationInfo:(id)arg1;

@end


@protocol NTTodayResultsFetchDescriptor, NTReadablePrivateDataStorage, FCContentContext;
@class FCAsyncSerialQueue, NSObject, NSString;

@interface NTTodayResultsSource : NSObject <NTTodayResultsSource> {

	char _flushingHasBeenEnabled;
	id<NTTodayResultsFetchDescriptor> _fetchDescriptor;
	id<NTReadablePrivateDataStorage> _privateDataStorage;
	id<FCContentContext> _contentContext;
	FCAsyncSerialQueue* _serialQueue;
	NSObject* _latestResultRecordsHoldToken;

}

@property (nonatomic,copy,readonly) id<NTTodayResultsFetchDescriptor> fetchDescriptor;               //@synthesize fetchDescriptor=_fetchDescriptor - In the implementation block
@property (nonatomic,readonly) id<NTReadablePrivateDataStorage> privateDataStorage;                  //@synthesize privateDataStorage=_privateDataStorage - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                                  //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * serialQueue;                                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,getter=hasFlushingBeenEnabled,nonatomic) char flushingHasBeenEnabled;              //@synthesize flushingHasBeenEnabled=_flushingHasBeenEnabled - In the implementation block
@property (nonatomic,retain) NSObject * latestResultRecordsHoldToken;                                //@synthesize latestResultRecordsHoldToken=_latestResultRecordsHoldToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)placeholderResultsWithFetchDescriptor:(id)arg1 contentContext:(id)arg2 operationInfo:(id)arg3 ;
-(id)init;
-(FCAsyncSerialQueue *)serialQueue;
-(id<FCContentContext>)contentContext;
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchTodayModuleDescriptorsWithContentRequests:(id)arg1 requireRefreshedAppConfig:(char)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchLatestResultsWithOperationInfo:(id)arg1 prefetchedContent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<NTTodayResultsFetchDescriptor>)fetchDescriptor;
-(id<NTReadablePrivateDataStorage>)privateDataStorage;
-(char)hasFlushingBeenEnabled;
-(void)setFlushingHasBeenEnabled:(char)arg1 ;
-(void)setLatestResultRecordsHoldToken:(NSObject *)arg1 ;
-(void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)placeholderResultsWithOperationInfo:(id)arg1 ;
-(id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 fetchQueue:(id)arg4 ;
-(NSObject *)latestResultRecordsHoldToken;
@end

