/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBCodable;

@interface NWActivityEmptyTrigger : NSObject {

	unsigned _awdMetricID;
	PBCodable* _awdReport;

}

@property (nonatomic,retain) PBCodable * awdReport;              //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;               //@synthesize awdMetricID=_awdMetricID - In the implementation block
-(void)setAwdMetricID:(unsigned)arg1 ;
-(unsigned)awdMetricID;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(id)initWithPBCodableData:(id)arg1 ;
@end

