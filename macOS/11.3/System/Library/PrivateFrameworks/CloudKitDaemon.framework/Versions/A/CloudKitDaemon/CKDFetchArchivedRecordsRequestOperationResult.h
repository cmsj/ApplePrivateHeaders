/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CKDFetchArchivedRecordsRequestOperationResult : NSObject {

	NSData* _resultServerChangeTokenData;
	long long _status;

}

@property (nonatomic,retain) NSData * resultServerChangeTokenData;              //@synthesize resultServerChangeTokenData=_resultServerChangeTokenData - In the implementation block
@property (assign,nonatomic) long long status;                                  //@synthesize status=_status - In the implementation block
-(id)init;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSData *)resultServerChangeTokenData;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
@end

