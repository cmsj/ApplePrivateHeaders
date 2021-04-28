/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/EKProtocolMutableStructuredLocation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSData, EKPredictedLocationOfInterest, CLLocation, NSDictionary, NSManagedObjectID;

@interface EKStructuredLocation : EKObject <EKProtocolMutableStructuredLocation, NSCopying> {

	NSString* uuid;

}

@property (getter=isImprecise,nonatomic,readonly) char imprecise; 
@property (nonatomic,readonly) EKPredictedLocationOfInterest * predictedLOI; 
@property (nonatomic,readonly) NSString * derivedFrom; 
@property (getter=isPrediction,nonatomic,readonly) char prediction; 
@property (nonatomic,copy) NSString * contactLabel; 
@property (nonatomic,readonly) char isStructured; 
@property (nonatomic,retain) NSString * routing; 
@property (nonatomic,copy,readonly) id<EKProtocolStructuredLocation> backingLocation; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) CLLocation * geoLocation; 
@property (assign,nonatomic) double radius; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSNumber * radiusNumber; 
@property (nonatomic,copy) NSString * abURLString; 
@property (nonatomic,copy) NSString * geoURLString; 
@property (nonatomic,copy) NSString * routeType; 
@property (nonatomic,copy) NSData * mapKitHandle; 
@property (retain,readonly) NSString * uuid; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationWithTitle:(id)arg1 ;
+(Class)frozenClass;
+(char)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5 ;
+(id)uniqueIdentifierForObject:(id)arg1 ;
+(id)knownIdentityKeys;
+(id)knownSingleValueKeys;
+(id)locationWithCalLocation:(id)arg1 ;
+(id)locationWithPlacemark:(id)arg1 ;
+(id)locationWithMapItem:(id)arg1 ;
+(id)displayLabelForContact:(id)arg1 unlocalizedLabel:(id)arg2 ;
-(NSString *)description;
-(NSString *)uuid;
-(void)setTitle:(NSString *)arg1 ;
-(char)_reset;
-(NSString *)address;
-(NSString *)title;
-(void)setAddress:(NSString *)arg1 ;
-(id<EKProtocolStructuredLocation>)backingLocation;
-(void)setRouteType:(NSString *)arg1 ;
-(NSString *)routeType;
-(double)radius;
-(char)isEqualToLocation:(id)arg1 ;
-(CLLocation *)geoLocation;
-(NSData *)mapKitHandle;
-(void)setRadius:(double)arg1 ;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSString *)routing;
-(void)setRouting:(NSString *)arg1 ;
-(NSString *)geoURLString;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5 ;
-(NSNumber *)radiusNumber;
-(EKPredictedLocationOfInterest *)predictedLOI;
-(char)isPrediction;
-(char)isImprecise;
-(NSString *)derivedFrom;
-(void)updateFromMapItem:(id)arg1 ;
-(NSString *)contactLabel;
-(void)setGeoURLString:(NSString *)arg1 ;
-(void)setRadiusNumber:(NSNumber *)arg1 ;
-(id)calLocation;
-(char)isStructured;
-(void)setContactLabel:(NSString *)arg1 ;
@end
