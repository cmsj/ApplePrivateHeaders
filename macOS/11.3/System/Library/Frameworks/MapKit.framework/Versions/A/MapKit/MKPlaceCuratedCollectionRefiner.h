/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapServiceCuratedCollectionTicket, MKMapServiceCuratedCollectionItemsTicket;
@class MKMapItemIdentifier;

@interface MKPlaceCuratedCollectionRefiner : NSObject {

	MKMapItemIdentifier* _collectionIdentifier;
	id<MKMapServiceCuratedCollectionTicket> _identifierRefinementTicket;
	id<MKMapServiceCuratedCollectionItemsTicket> _mapItemRefinementTicket;

}
-(id)initWithCollectionIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2 ;
-(void)_resolveMapItemsWithCollection:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCollectionIdentifier:(unsigned long long)arg1 ;
-(void)fetchWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

