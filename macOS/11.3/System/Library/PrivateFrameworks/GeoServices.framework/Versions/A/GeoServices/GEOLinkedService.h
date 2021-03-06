/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDLinkedService, NSArray, NSTimeZone, NSString, GEOFeatureStyleAttributes;

@interface GEOLinkedService : NSObject {

	GEOPDLinkedService* _linkedService;
	NSArray* _cachedBusinessHours;
	char _checkedForBusinessHoursAlready;
	NSTimeZone* _timeZone;
	NSArray* _businessHours;
	NSString* _localizedCategoryName;
	GEOFeatureStyleAttributes* _styleAttributes;

}

@property (nonatomic,retain) NSTimeZone * timeZone;                                    //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSArray * businessHours;                                  //@synthesize businessHours=_businessHours - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;                         //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
@property (nonatomic,retain) GEOFeatureStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(NSArray *)businessHours;
-(void)setBusinessHours:(NSArray *)arg1 ;
-(id)initWithGEOPDLinkedService:(id)arg1 timeZone:(id)arg2 ;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(void)setStyleAttributes:(GEOFeatureStyleAttributes *)arg1 ;
@end

