/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSData;

@interface MTContentKeyRequest : NSObject {

	 keyIdentifier;
	 adamId;
	 secureInvalidationDsid;
	 requestData;
	 requestType;
	 offlineRequest;
	??? requestDate;
	 requestID;

}

@property (readonly,nonatomic) NSString * keyIdentifier; 
@property (readonly,nonatomic) NSString * adamId; 
@property (readonly,nonatomic) NSNumber * secureInvalidationDsid; 
@property (copy,nonatomic) NSData * requestData; 
-(id)init;
-(NSString *)keyIdentifier;
-(NSString *)adamId;
-(void)setRequestData:(NSData *)arg1 ;
-(NSData *)requestData;
-(NSNumber *)secureInvalidationDsid;
-(id)copyWith:(long long)arg1 ;
-(id)initWithKeyIdentifier:(id)arg1 adamId:(id)arg2 requestType:(long long)arg3 offlineRequest:(char)arg4 secureInvalidationDsid:(id)arg5 ;
-(id)initFrom:(id)arg1 adamId:(id)arg2 requestType:(long long)arg3 offlineRequest:(char)arg4 ;
@end

