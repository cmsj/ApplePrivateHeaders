/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface EspressoProfilingNetworkInfo : NSObject {

	NSMutableArray* _layers;
	NSString* _network_at_path;

}

@property (retain) NSMutableArray * layers;                 //@synthesize layers=_layers - In the implementation block
@property (retain) NSString * network_at_path;              //@synthesize network_at_path=_network_at_path - In the implementation block
-(NSMutableArray *)layers;
-(void)setLayers:(NSMutableArray *)arg1 ;
-(NSString *)network_at_path;
-(void)setNetwork_at_path:(NSString *)arg1 ;
@end

