/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOVenueIdentifier.h>
@class NSArray;


@protocol GEOVenueIdentifier <NSObject>
@property (getter=_hasVenueID,nonatomic,readonly) char hasVenueID; 
@property (nonatomic,readonly) unsigned long long venueID; 
@property (getter=_hasFeatureID,nonatomic,readonly) char hasFeatureID; 
@property (nonatomic,readonly) unsigned long long featureID; 
@property (getter=_hasBusinessID,nonatomic,readonly) char hasBusinessID; 
@property (nonatomic,readonly) unsigned long long businessID; 
@property (nonatomic,readonly) NSArray * componentIdentifiers; 
@required
-(unsigned long long)businessID;
-(NSArray *)componentIdentifiers;
-(unsigned long long)venueID;
-(unsigned long long)featureID;
-(id)placeDataVenueIdentifier;
-(id)placeDataVenueIdentifierForVenue;
-(char)_hasVenueID;
-(char)_hasFeatureID;
-(char)_hasBusinessID;

@end


@class NSArray, NSString;

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier> {

	char _hasVenueID;
	unsigned long long _venueID;
	char _hasFeatureID;
	unsigned long long _featureID;
	char _hasBusinessID;
	unsigned long long _businessID;
	NSArray* _componentIdentifiers;
	NSArray* _originalIdentifiers;

}

@property (getter=_hasVenueID,nonatomic,readonly) char hasVenueID;                    //@synthesize hasVenueID=_hasVenueID - In the implementation block
@property (nonatomic,readonly) unsigned long long venueID;                            //@synthesize venueID=_venueID - In the implementation block
@property (getter=_hasFeatureID,nonatomic,readonly) char hasFeatureID;                //@synthesize hasFeatureID=_hasFeatureID - In the implementation block
@property (nonatomic,readonly) unsigned long long featureID;                          //@synthesize featureID=_featureID - In the implementation block
@property (getter=_hasBusinessID,nonatomic,readonly) char hasBusinessID;              //@synthesize hasBusinessID=_hasBusinessID - In the implementation block
@property (nonatomic,readonly) unsigned long long businessID;                         //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) NSArray * componentIdentifiers;                        //@synthesize componentIdentifiers=_componentIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentIdentifiersFromVenueIdentifiers:(id)arg1 ;
-(id)init;
-(unsigned long long)businessID;
-(id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 ;
-(NSArray *)componentIdentifiers;
-(unsigned long long)venueID;
-(unsigned long long)featureID;
-(id)placeDataVenueIdentifier;
-(id)initWithVenueIdentifiers:(id)arg1 ;
-(id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifiers:(id)arg4 ;
-(id)placeDataVenueIdentifierForVenue;
-(char)_hasVenueID;
-(char)_hasFeatureID;
-(char)_hasBusinessID;
-(id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2 ;
-(id)initWithVenueID:(unsigned long long)arg1 ;
@end

