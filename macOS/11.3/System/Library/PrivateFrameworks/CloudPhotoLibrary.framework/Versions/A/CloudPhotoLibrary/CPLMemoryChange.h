/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, CPLMemoryAssetList, NSData, NSDate;

@interface CPLMemoryChange : CPLRecordChange {

	char _favorite;
	char _rejected;
	char _userCreated;
	NSString* _title;
	NSString* _subtitle;
	long long _category;
	long long _subcategory;
	CPLMemoryAssetList* _assetList;
	NSData* _assetListPredicate;
	NSDate* _creationDate;
	NSData* _graphData;
	long long _graphVersion;
	NSData* _movieData;
	double _score;
	long long _notificationState;
	NSData* _blacklistedFeature;
	long long _playCount;
	long long _shareCount;
	long long _viewCount;

}

@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long category;                                 //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) long long subcategory;                              //@synthesize subcategory=_subcategory - In the implementation block
@property (nonatomic,copy) CPLMemoryAssetList * assetList;                       //@synthesize assetList=_assetList - In the implementation block
@property (nonatomic,copy) NSData * assetListPredicate;                          //@synthesize assetListPredicate=_assetListPredicate - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSData * graphData;                                   //@synthesize graphData=_graphData - In the implementation block
@property (assign,nonatomic) long long graphVersion;                             //@synthesize graphVersion=_graphVersion - In the implementation block
@property (assign,getter=isFavorite,nonatomic) char favorite;                    //@synthesize favorite=_favorite - In the implementation block
@property (assign,getter=isRejected,nonatomic) char rejected;                    //@synthesize rejected=_rejected - In the implementation block
@property (assign,getter=isUserCreated,nonatomic) char userCreated;              //@synthesize userCreated=_userCreated - In the implementation block
@property (nonatomic,copy) NSData * movieData;                                   //@synthesize movieData=_movieData - In the implementation block
@property (assign,nonatomic) double score;                                       //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) long long notificationState;                        //@synthesize notificationState=_notificationState - In the implementation block
@property (nonatomic,copy) NSData * blacklistedFeature;                          //@synthesize blacklistedFeature=_blacklistedFeature - In the implementation block
@property (assign,nonatomic) long long playCount;                                //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) long long shareCount;                               //@synthesize shareCount=_shareCount - In the implementation block
@property (assign,nonatomic) long long viewCount;                                //@synthesize viewCount=_viewCount - In the implementation block
+(id)_createTestMemoryWithAssets:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(double)score;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(long long)viewCount;
-(void)setScore:(double)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setUserCreated:(char)arg1 ;
-(char)isUserCreated;
-(void)setPlayCount:(long long)arg1 ;
-(long long)playCount;
-(char)isFavorite;
-(void)setFavorite:(char)arg1 ;
-(char)supportsDeletion;
-(char)isRejected;
-(void)setViewCount:(long long)arg1 ;
-(long long)shareCount;
-(void)setShareCount:(long long)arg1 ;
-(long long)subcategory;
-(long long)notificationState;
-(NSData *)movieData;
-(NSData *)assetListPredicate;
-(NSData *)blacklistedFeature;
-(void)setRejected:(char)arg1 ;
-(void)setSubcategory:(long long)arg1 ;
-(void)setMovieData:(NSData *)arg1 ;
-(void)setNotificationState:(long long)arg1 ;
-(void)setBlacklistedFeature:(NSData *)arg1 ;
-(void)setAssetListPredicate:(NSData *)arg1 ;
-(void)setAssetList:(CPLMemoryAssetList *)arg1 ;
-(CPLMemoryAssetList *)assetList;
-(void)setGraphVersion:(long long)arg1 ;
-(void)setGraphData:(NSData *)arg1 ;
-(long long)graphVersion;
-(NSData *)graphData;
-(char)supportsDirectDeletion;
-(id)propertiesDescription;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
@end

