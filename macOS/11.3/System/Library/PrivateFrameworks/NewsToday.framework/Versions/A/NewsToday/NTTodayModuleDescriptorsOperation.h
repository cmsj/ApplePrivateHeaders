/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, NTReadablePrivateDataStorage;
@class NSArray;

@interface NTTodayModuleDescriptorsOperation : FCOperation {

	char _requireRefreshedAppConfig;
	NSArray* _contentRequests;
	id<FCContentContext> _contentContext;
	id<NTReadablePrivateDataStorage> _privateDataStorage;
	/*^block*/id _descriptorsCompletion;

}

@property (nonatomic,copy) NSArray * contentRequests;                                          //@synthesize contentRequests=_contentRequests - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                              //@synthesize contentContext=_contentContext - In the implementation block
@property (assign,nonatomic) char requireRefreshedAppConfig;                                   //@synthesize requireRefreshedAppConfig=_requireRefreshedAppConfig - In the implementation block
@property (nonatomic,retain) id<NTReadablePrivateDataStorage> privateDataStorage;              //@synthesize privateDataStorage=_privateDataStorage - In the implementation block
@property (nonatomic,copy) id descriptorsCompletion;                                           //@synthesize descriptorsCompletion=_descriptorsCompletion - In the implementation block
-(id)init;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(void)setContentRequests:(NSArray *)arg1 ;
-(id<NTReadablePrivateDataStorage>)privateDataStorage;
-(void)setPrivateDataStorage:(id<NTReadablePrivateDataStorage>)arg1 ;
-(void)setRequireRefreshedAppConfig:(char)arg1 ;
-(void)setDescriptorsCompletion:(id)arg1 ;
-(id)descriptorsCompletion;
-(char)requireRefreshedAppConfig;
-(NSArray *)contentRequests;
@end

