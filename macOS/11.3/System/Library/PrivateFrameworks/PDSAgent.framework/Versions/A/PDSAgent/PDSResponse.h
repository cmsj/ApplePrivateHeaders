/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/Versions/A/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PDSResponse : NSObject {

	long long _status;
	NSDictionary* _statusByUser;
	long long _ttl;

}

@property (nonatomic,readonly) long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDictionary * statusByUser;              //@synthesize statusByUser=_statusByUser - In the implementation block
@property (nonatomic,readonly) long long ttl;                            //@synthesize ttl=_ttl - In the implementation block
-(id)description;
-(long long)status;
-(long long)ttl;
-(NSDictionary *)statusByUser;
-(id)initWithStatus:(long long)arg1 statusByUser:(id)arg2 ttl:(long long)arg3 ;
@end

