/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchFilter.h>
#import <libobjc.A.dylib/GEOAutocompleteFilter.h>

@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {

	GEOSearchCategory* _category;

}
-(id)init;
-(id)initWithCategory:(id)arg1 ;
-(char)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
-(char)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2 ;
@end

