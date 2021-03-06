/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlaybackResponse.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse <NSCopying> {

	NSData* _certificateData;
	unsigned long long _kdMovieIdentifier;

}

@property (getter=isOfflineSlotAvailable,nonatomic,readonly) char offlineSlotAvailable; 
@property (nonatomic,copy,readonly) NSData * leaseInfoData; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
@property (nonatomic,copy) NSData * certificateData;                                                 //@synthesize certificateData=_certificateData - In the implementation block
@property (assign,nonatomic) unsigned long long KDMovieIdentifier;                                   //@synthesize kdMovieIdentifier=_kdMovieIdentifier - In the implementation block
@property (nonatomic,readonly) double leaseDuration; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)subscriptionKeyBagData;
-(NSData *)leaseInfoData;
-(void)setCertificateData:(NSData *)arg1 ;
-(NSData *)certificateData;
-(id)itemForItemIdentifier:(id)arg1 ;
-(unsigned long long)KDMovieIdentifier;
-(double)leaseDuration;
-(char)isOfflineSlotAvailable;
-(void)setKDMovieIdentifier:(unsigned long long)arg1 ;
@end

