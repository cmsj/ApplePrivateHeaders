/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject {

	GEOSearchAttributionInfo* _info;
	NSArray* _attributionURLs;
	NSString* _yelpID;
	NSString* _poiID;

}

@property (nonatomic,readonly) NSString * providerID; 
@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSArray * attributionURLs;                      //@synthesize attributionURLs=_attributionURLs - In the implementation block
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) NSString * webBaseActionURL; 
@property (nonatomic,readonly) char shouldOpenInAppStore; 
@property (nonatomic,readonly) char requiresAttributionInCallout; 
@property (nonatomic,readonly) NSString * appAdamID; 
+(id)attributionWithDataAttribution:(id)arg1 searchInfo:(id)arg2 class:(Class)arg3 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(NSArray *)attributionApps;
-(NSArray *)attributionURLs;
-(NSString *)providerID;
-(NSString *)appAdamID;
-(NSString *)webBaseActionURL;
-(char)shouldOpenInAppStore;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 ;
-(NSString *)providerName;
-(id)providerLogoPathForScale:(double)arg1 ;
-(id)providerSnippetLogoPathForScale:(double)arg1 ;
-(char)requiresAttributionInCallout;
-(id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(char)arg3 ;
@end

