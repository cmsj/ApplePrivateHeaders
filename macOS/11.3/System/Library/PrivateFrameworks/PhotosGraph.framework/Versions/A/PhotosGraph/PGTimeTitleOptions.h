/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSLocale;

@interface PGTimeTitleOptions : NSObject {

	char _filterDates;
	char _usePeopleSubtitleFormatWithYears;
	NSSet* _momentNodes;
	NSSet* _locationNodes;
	unsigned long long _allowedFormats;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSSet * momentNodes;                                //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSSet * locationNodes;                              //@synthesize locationNodes=_locationNodes - In the implementation block
@property (assign,nonatomic) unsigned long long allowedFormats;                  //@synthesize allowedFormats=_allowedFormats - In the implementation block
@property (assign,nonatomic) char filterDates;                                   //@synthesize filterDates=_filterDates - In the implementation block
@property (assign,nonatomic) char usePeopleSubtitleFormatWithYears;              //@synthesize usePeopleSubtitleFormatWithYears=_usePeopleSubtitleFormatWithYears - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                  //@synthesize locale=_locale - In the implementation block
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSSet *)momentNodes;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(NSSet *)locationNodes;
-(void)setLocationNodes:(NSSet *)arg1 ;
-(unsigned long long)allowedFormats;
-(void)setAllowedFormats:(unsigned long long)arg1 ;
-(char)filterDates;
-(void)setFilterDates:(char)arg1 ;
-(char)usePeopleSubtitleFormatWithYears;
-(void)setUsePeopleSubtitleFormatWithYears:(char)arg1 ;
@end

