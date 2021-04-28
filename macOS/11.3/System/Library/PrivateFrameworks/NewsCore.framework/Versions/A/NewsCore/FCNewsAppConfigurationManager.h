/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol FCNewsAppConfigurationManager <NSObject>
@property (nonatomic,readonly) id<FCNewsAppConfiguration> appConfiguration; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration; 
@property (nonatomic,readonly) NSArray * treatmentIDs; 
@property (nonatomic,readonly) NSArray * segmentSetIDs; 
@property (nonatomic,copy,readonly) NSString * feldsparID; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration> fetchedAppConfiguration; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration><FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration; 
@optional
-(NSArray *)treatmentIDs;
-(NSArray *)segmentSetIDs;
-(NSString *)feldsparID;
-(void)fetchAppWidgetConfigurationWithCompletion:(/*^block*/id)arg1;
-(id<FCNewsAppConfiguration>)fetchedAppConfiguration;
-(id<FCNewsAppConfiguration><FCJSONEncodableObjectProviding>)jsonEncodableAppConfiguration;

@required
-(id<FCNewsAppConfiguration>)appConfiguration;
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAppConfigurationIfNeededWithCompletion:(/*^block*/id)arg1;
-(id<FCNewsAppConfiguration>)possiblyUnfetchedAppConfiguration;
-(void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(/*^block*/id)arg2;
-(void)addAppConfigObserver:(id)arg1;
-(void)removeAppConfigObserver:(id)arg1;

@end
