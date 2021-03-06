/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/IPAAutoSettings.h>

@interface PASmartColorAutoSettings : IPAAutoSettings {

	double _p75;
	double _p98;
	double _autoValue;
	double _g98;

}

@property (assign,nonatomic) double p75;                    //@synthesize p75=_p75 - In the implementation block
@property (assign,nonatomic) double p98;                    //@synthesize p98=_p98 - In the implementation block
@property (assign,nonatomic) double autoValue;              //@synthesize autoValue=_autoValue - In the implementation block
@property (assign,nonatomic) double g98;                    //@synthesize g98=_g98 - In the implementation block
-(id)init;
-(char)_applyArchiveDictionary:(id)arg1 ;
-(void)_archiveIntoDictionary:(id)arg1 ;
-(double)autoValue;
-(void)setG98:(double)arg1 ;
-(void)setAutoValue:(double)arg1 ;
-(void)setP98:(double)arg1 ;
-(void)setP75:(double)arg1 ;
-(double)p75;
-(double)p98;
-(double)g98;
@end

