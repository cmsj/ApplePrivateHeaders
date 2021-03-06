/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTMapsSupportManager, RTMapItemProviderMapsSupportParameters, NSString;

@interface RTMapItemProviderMapsSupport : RTMapItemProviderBase <RTMapItemProvider> {

	RTMapsSupportManager* _mapsSupportManager;
	RTMapItemProviderMapsSupportParameters* _parameters;

}

@property (nonatomic,retain) RTMapsSupportManager * mapsSupportManager;                               //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (nonatomic,copy,readonly) RTMapItemProviderMapsSupportParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTMapItemProviderMapsSupportParameters *)parameters;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapsSupportManager:(id)arg3 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(RTMapsSupportManager *)mapsSupportManager;
-(void)setMapsSupportManager:(RTMapsSupportManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapsSupportManager:(id)arg3 parameters:(id)arg4 ;
-(double)confidenceFromMapItemSource:(unsigned long long)arg1 ;
@end

