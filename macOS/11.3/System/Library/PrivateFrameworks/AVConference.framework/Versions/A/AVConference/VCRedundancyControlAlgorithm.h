/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCRedundancyControlAlgorithm <NSObject>
@property (nonatomic,readonly) unsigned redundancyPercentage; 
@property (nonatomic,readonly) double redundancyInterval; 
@optional
-(SCD_Struct_VC50*)getFecLevelPerFrameSizeVector;

@required
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV33)arg1;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;

@end
