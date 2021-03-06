/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/Versions/A/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapLayoutItem.h>

@class NSOrderedSet, NSMutableOrderedSet, NSString;

@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem> {

	NSMutableOrderedSet* _layoutGeotaggables;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,retain) NSMutableOrderedSet * layoutGeotaggables;              //@synthesize layoutGeotaggables=_layoutGeotaggables - In the implementation block
@property (assign) CLLocationCoordinate2D coordinate;                               //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * geotaggables; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(NSOrderedSet *)geotaggables;
-(char)isEqualToLayoutItem:(id)arg1 ;
-(void)addGeotaggable:(id)arg1 ;
-(void)addGeotaggables:(id)arg1 ;
-(NSMutableOrderedSet *)layoutGeotaggables;
-(void)setLayoutGeotaggables:(NSMutableOrderedSet *)arg1 ;
@end

