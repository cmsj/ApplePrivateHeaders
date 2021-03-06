/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Versions/A/ExchangeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle;

@interface EXSDataConsumerPlugin : NSObject {

	Class _dataConsumerClass;
	NSBundle* _bundle;
	long long _interestedDataclass;
	long long _interestedFolderType;

}

@property (nonatomic,retain) NSBundle * bundle;                           //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) long long interestedDataclass;               //@synthesize interestedDataclass=_interestedDataclass - In the implementation block
@property (assign,nonatomic) long long interestedFolderType;              //@synthesize interestedFolderType=_interestedFolderType - In the implementation block
@property (nonatomic,readonly) Class dataConsumerClass;                   //@synthesize dataConsumerClass=_dataConsumerClass - In the implementation block
+(id)log;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(Class)dataConsumerClass;
-(char)interestedInEnabledDataclasses:(unsigned long long)arg1 ;
-(long long)interestedFolderType;
-(id)newInstanceForAccount:(id)arg1 withDataManager:(id)arg2 dispatchWorkloop:(id)arg3 ;
-(void)setInterestedDataclass:(long long)arg1 ;
-(void)setInterestedFolderType:(long long)arg1 ;
-(long long)interestedDataclass;
@end

