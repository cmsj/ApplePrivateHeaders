/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDPublisherViewResultFilter, NSArray, GEOPublisherViewResultFilterAddress, GEOPublisherViewResultFilterKeyword;

@interface GEOPublisherViewResultFilter : NSObject {

	GEOPDPublisherViewResultFilter* _resultFilter;
	NSArray* _places;

}

@property (nonatomic,readonly) long long filterType; 
@property (nonatomic,readonly) GEOPublisherViewResultFilterAddress * addressFilter; 
@property (nonatomic,readonly) GEOPublisherViewResultFilterKeyword * keywordFilter; 
-(long long)filterType;
-(id)initWithPublisherViewResultFilter:(id)arg1 withPlaces:(id)arg2 ;
-(GEOPublisherViewResultFilterAddress *)addressFilter;
-(GEOPublisherViewResultFilterKeyword *)keywordFilter;
@end

