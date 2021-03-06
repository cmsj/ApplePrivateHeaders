/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSData;

@interface SGMatchinfoData : NSObject {

	NSNumber* _entityId;
	NSNumber* _detailEntityId;
	NSData* _matchinfoData;

}

@property (nonatomic,readonly) NSNumber * entityId;                    //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,readonly) NSNumber * detailEntityId;              //@synthesize detailEntityId=_detailEntityId - In the implementation block
@property (nonatomic,readonly) NSData * matchinfoData;                 //@synthesize matchinfoData=_matchinfoData - In the implementation block
+(id)matchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)entityId;
-(id)initWithMatchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3 ;
-(char)isEqualToMatchinfoData:(id)arg1 ;
-(NSNumber *)detailEntityId;
-(NSData *)matchinfoData;
@end

