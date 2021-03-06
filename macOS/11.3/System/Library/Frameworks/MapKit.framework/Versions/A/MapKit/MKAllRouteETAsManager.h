/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAllRouteETAsManagerDelegate;
@class _MKRouteETAFetcher, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions, MKMapItem;

@interface MKAllRouteETAsManager : NSObject {

	_MKRouteETAFetcher* _etaFetcher;
	id<MKAllRouteETAsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKAllRouteETAsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,copy) GEOTransitOptions * transitOptions; 
@property (nonatomic,copy) GEOCyclingOptions * cyclingOptions; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) MKMapItem * originMapItem; 
-(id)init;
-(id<MKAllRouteETAsManagerDelegate>)delegate;
-(void)setDelegate:(id<MKAllRouteETAsManagerDelegate>)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)originMapItem;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOCyclingOptions *)cyclingOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(void)updateETA;
@end

