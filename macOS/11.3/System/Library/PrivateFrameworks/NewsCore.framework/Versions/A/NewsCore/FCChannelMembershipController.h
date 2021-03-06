/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCChannelMembershipRecordSource;

@interface FCChannelMembershipController : NSObject {

	FCChannelMembershipRecordSource* _recordSource;

}

@property (nonatomic,readonly) FCChannelMembershipRecordSource * recordSource;              //@synthesize recordSource=_recordSource - In the implementation block
-(FCChannelMembershipRecordSource *)recordSource;
-(id)channelMembershipsFromHeldRecords:(id)arg1 ;
-(id)initWithChannelMembershipRecordSource:(id)arg1 ;
-(void)fetchChannelMembershipsForIDs:(id)arg1 maximumCachedAge:(double)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)cachedChannelMembershipsForIDs:(id)arg1 ;
@end

