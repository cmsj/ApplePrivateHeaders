/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/Versions/A/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError, ADDESRecordsManager, NSArray;

@interface ADSearchObject : NSObject {

	NSString* _sponsoredSearchRequestData;
	NSString* _routingInfoData;
	NSString* _deviceRequestID;
	NSString* _userTargetingID;
	NSError* _error;
	ADDESRecordsManager* _desRecordManager;
	NSArray* _advertisements;
	NSArray* _organics;
	NSArray* _organicsIds;

}

@property (nonatomic,retain) NSString * sponsoredSearchRequestData;               //@synthesize sponsoredSearchRequestData=_sponsoredSearchRequestData - In the implementation block
@property (nonatomic,retain) NSString * routingInfoData;                          //@synthesize routingInfoData=_routingInfoData - In the implementation block
@property (nonatomic,retain) NSString * deviceRequestID;                          //@synthesize deviceRequestID=_deviceRequestID - In the implementation block
@property (nonatomic,retain) NSString * userTargetingID;                          //@synthesize userTargetingID=_userTargetingID - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) ADDESRecordsManager * desRecordManager;              //@synthesize desRecordManager=_desRecordManager - In the implementation block
@property (nonatomic,retain) NSArray * advertisements;                            //@synthesize advertisements=_advertisements - In the implementation block
@property (nonatomic,retain) NSArray * organics;                                  //@synthesize organics=_organics - In the implementation block
@property (nonatomic,retain) NSArray * organicsIds;                               //@synthesize organicsIds=_organicsIds - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setDeviceRequestID:(NSString *)arg1 ;
-(NSString *)deviceRequestID;
-(NSArray *)advertisements;
-(ADDESRecordsManager *)desRecordManager;
-(void)setDesRecordManager:(ADDESRecordsManager *)arg1 ;
-(long long)selectAdResponse;
-(NSArray *)organicsIds;
-(void)setOrganicsIds:(NSArray *)arg1 ;
-(NSArray *)organics;
-(id)initWithSponsoredSearchRequestData:(id)arg1 routingInfoData:(id)arg2 deviceRequestID:(id)arg3 userTargetingID:(id)arg4 error:(id)arg5 ;
-(void)setAdvertisements:(NSArray *)arg1 ;
-(void)setOrganics:(NSArray *)arg1 ;
-(void)orderedAds:(/*^block*/id)arg1 ;
-(NSString *)sponsoredSearchRequestData;
-(void)setSponsoredSearchRequestData:(NSString *)arg1 ;
-(NSString *)routingInfoData;
-(void)setRoutingInfoData:(NSString *)arg1 ;
-(NSString *)userTargetingID;
-(void)setUserTargetingID:(NSString *)arg1 ;
@end
