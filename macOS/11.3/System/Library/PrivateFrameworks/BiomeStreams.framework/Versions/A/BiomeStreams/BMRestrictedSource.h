/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BMSource.h>

@class BMStoreSource;

@interface BMRestrictedSource : BMSource {

	BMStoreSource* _storeSource;

}
-(void)sendEvent:(id)arg1 ;
-(void)sendEvent:(id)arg1 timestamp:(double)arg2 ;
-(id)initWithStoreSource:(id)arg1 ;
@end

