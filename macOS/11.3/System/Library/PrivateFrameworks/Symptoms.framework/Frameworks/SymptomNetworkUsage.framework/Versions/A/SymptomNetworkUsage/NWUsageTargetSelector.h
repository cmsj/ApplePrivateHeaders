/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/Versions/A/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface NWUsageTargetSelector : NSObject {

	BOOL _hasExplicitTCP;
	BOOL _explicitTCPValue;
	BOOL _hasExplicitUDP;
	BOOL _explicitUDPValue;
	BOOL _hasExplicitChannels;
	BOOL _explicitChannelsValue;
	BOOL _hasExplicitSockets;
	BOOL _explicitSocketsValue;
	BOOL _hasExplicitQUIC;
	BOOL _explicitQUICValue;
	NSDictionary* _suppliedParams;
	unsigned long long _filter;
	unsigned long long _events;

}

@property (retain) NSDictionary * suppliedParams;              //@synthesize suppliedParams=_suppliedParams - In the implementation block
@property (assign) unsigned long long filter;                  //@synthesize filter=_filter - In the implementation block
@property (assign) unsigned long long events;                  //@synthesize events=_events - In the implementation block
-(id)description;
-(unsigned long long)filter;
-(void)setFilter:(unsigned long long)arg1 ;
-(unsigned long long)events;
-(void)setEvents:(unsigned long long)arg1 ;
-(id)initWithSelection:(id)arg1 ;
-(id)initWithMultipleSelections:(id)arg1 ;
-(BOOL)applySelection:(id)arg1 ;
-(BOOL)shouldAddProvider:(int)arg1 ;
-(NSDictionary *)suppliedParams;
-(void)setSuppliedParams:(NSDictionary *)arg1 ;
@end

