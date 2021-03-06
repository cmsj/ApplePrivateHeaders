/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSSet, PHAsset;

@interface PGKeyAssetCurationOptions : NSObject <NSCopying> {

	char _focusOnPeople;
	char _complete;
	char _allowContextualTrip;
	char _useSummarizer;
	char _useContextualCurationOnly;
	char _prefilterAssetsWithFaces;
	char _promoteAutoplayableItems;
	CLLocation* _referenceLocation;
	NSSet* _referencePersonUUIDs;
	unsigned long long _precision;
	double _prefilterAssetsWithFacesThreshold;
	PHAsset* _referenceAsset;

}

@property (nonatomic,retain) CLLocation * referenceLocation;                        //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,retain) NSSet * referencePersonUUIDs;                          //@synthesize referencePersonUUIDs=_referencePersonUUIDs - In the implementation block
@property (assign,nonatomic) unsigned long long precision;                          //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) char complete;                                         //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) char focusOnPeople;                                    //@synthesize focusOnPeople=_focusOnPeople - In the implementation block
@property (assign,nonatomic) char allowContextualTrip;                              //@synthesize allowContextualTrip=_allowContextualTrip - In the implementation block
@property (assign,nonatomic) char useSummarizer;                                    //@synthesize useSummarizer=_useSummarizer - In the implementation block
@property (assign,nonatomic) char prefilterAssetsWithFaces;                         //@synthesize prefilterAssetsWithFaces=_prefilterAssetsWithFaces - In the implementation block
@property (assign,nonatomic) double prefilterAssetsWithFacesThreshold;              //@synthesize prefilterAssetsWithFacesThreshold=_prefilterAssetsWithFacesThreshold - In the implementation block
@property (assign,nonatomic) char useContextualCurationOnly;                        //@synthesize useContextualCurationOnly=_useContextualCurationOnly - In the implementation block
@property (assign,nonatomic) char promoteAutoplayableItems;                         //@synthesize promoteAutoplayableItems=_promoteAutoplayableItems - In the implementation block
@property (nonatomic,readonly) PHAsset * referenceAsset;                            //@synthesize referenceAsset=_referenceAsset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)dictionaryRepresentation;
-(char)complete;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setComplete:(char)arg1 ;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
-(CLLocation *)referenceLocation;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(PHAsset *)referenceAsset;
-(void)setAllowContextualTrip:(char)arg1 ;
-(id)initWithReferenceAsset:(id)arg1 ;
-(void)setFocusOnPeople:(char)arg1 ;
-(void)setReferencePersonUUIDs:(NSSet *)arg1 ;
-(char)focusOnPeople;
-(NSSet *)referencePersonUUIDs;
-(char)allowContextualTrip;
-(char)useSummarizer;
-(void)setUseSummarizer:(char)arg1 ;
-(char)useContextualCurationOnly;
-(void)setUseContextualCurationOnly:(char)arg1 ;
-(char)prefilterAssetsWithFaces;
-(void)setPrefilterAssetsWithFaces:(char)arg1 ;
-(double)prefilterAssetsWithFacesThreshold;
-(void)setPrefilterAssetsWithFacesThreshold:(double)arg1 ;
-(char)promoteAutoplayableItems;
-(void)setPromoteAutoplayableItems:(char)arg1 ;
@end

