/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RMAsset, NSError;

@interface RMResolvedAsset : NSObject {

	RMAsset* _asset;
	NSError* _error;

}

@property (nonatomic,readonly) RMAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(RMAsset *)asset;
-(id)initWithAsset:(id)arg1 error:(id)arg2 ;
@end

