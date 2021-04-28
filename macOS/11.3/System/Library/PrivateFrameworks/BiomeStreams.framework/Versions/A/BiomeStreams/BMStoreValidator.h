/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BPSBiomeStorePublisher;

@interface BMStoreValidator : NSObject {

	NSString* _identifier;
	BPSBiomeStorePublisher* _publisher;

}
-(id)init;
-(id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(int)isChronologicallyValidWithPublisher:(id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(int)isChronologicallyValidFromTimestamp:(double)arg1 ;
-(int)isChronologicallyValidFromBookmark:(id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(int)isChronologicallyValidFromTimestamp:(double)arg1 shouldContinue:(/*^block*/id)arg2 ;
@end
