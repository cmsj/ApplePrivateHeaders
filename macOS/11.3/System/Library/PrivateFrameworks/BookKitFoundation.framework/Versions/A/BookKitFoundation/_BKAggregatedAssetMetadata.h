/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookKitFoundation.framework/Versions/A/BookKitFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, BKAssetMetadata, NSDictionary, NSData, _BKAggregatedAssetData;

@interface _BKAggregatedAssetMetadata : NSObject {

	NSURL* _url;
	BKAssetMetadata* _opfMetadata;
	BKAssetMetadata* _iTunesMetadata;
	BKAssetMetadata* _preloadedMetadata;
	NSDictionary* _sinfOptions;
	NSData* _coverImageData;
	_BKAggregatedAssetData* _aggregateData;

}

@property (nonatomic,retain) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) BKAssetMetadata * opfMetadata;                       //@synthesize opfMetadata=_opfMetadata - In the implementation block
@property (nonatomic,retain) BKAssetMetadata * iTunesMetadata;                    //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
@property (nonatomic,retain) BKAssetMetadata * preloadedMetadata;                 //@synthesize preloadedMetadata=_preloadedMetadata - In the implementation block
@property (nonatomic,retain) NSDictionary * sinfOptions;                          //@synthesize sinfOptions=_sinfOptions - In the implementation block
@property (nonatomic,retain) NSData * coverImageData;                             //@synthesize coverImageData=_coverImageData - In the implementation block
@property (nonatomic,retain) _BKAggregatedAssetData * aggregateData;              //@synthesize aggregateData=_aggregateData - In the implementation block
@property (nonatomic,readonly) BKAssetMetadata * combinedMetadata; 
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BKAssetMetadata *)iTunesMetadata;
-(void)setITunesMetadata:(BKAssetMetadata *)arg1 ;
-(NSData *)coverImageData;
-(void)setCoverImageData:(NSData *)arg1 ;
-(BKAssetMetadata *)combinedMetadata;
-(BKAssetMetadata *)opfMetadata;
-(id)initWithURL:(id)arg1 opfMetadata:(id)arg2 aggregateData:(id)arg3 ;
-(void)setPreloadedMetadata:(BKAssetMetadata *)arg1 ;
-(void)setSinfOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)sinfOptions;
-(void)_populatePackageHashOnMetadata:(id)arg1 ;
-(BKAssetMetadata *)preloadedMetadata;
-(_BKAggregatedAssetData *)aggregateData;
-(void)setOpfMetadata:(BKAssetMetadata *)arg1 ;
-(void)setAggregateData:(_BKAggregatedAssetData *)arg1 ;
@end
