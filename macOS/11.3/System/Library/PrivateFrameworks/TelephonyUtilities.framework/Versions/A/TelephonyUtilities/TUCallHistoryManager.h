/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUCallHistoryManagerDataSource;
@interface TUCallHistoryManager : NSObject {

	id<TUCallHistoryManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<TUCallHistoryManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)dealloc;
-(id)init;
-(id<TUCallHistoryManagerDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2 ;
@end

