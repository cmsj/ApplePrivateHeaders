/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString, NSDictionary;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob {

	long long _jobType;
	NSArray* _msASComments;
	NSString* _commentGUID;
	NSString* _assetGUID;
	NSString* _albumGUID;
	NSDictionary* _mstreamdInfoDictionary;

}

@property (assign,nonatomic) long long jobType;                                  //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSArray * msASComments;                             //@synthesize msASComments=_msASComments - In the implementation block
@property (nonatomic,retain) NSString * commentGUID;                             //@synthesize commentGUID=_commentGUID - In the implementation block
@property (nonatomic,retain) NSString * assetGUID;                               //@synthesize assetGUID=_assetGUID - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                               //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSDictionary * mstreamdInfoDictionary;              //@synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary - In the implementation block
+(void)assetsdLocallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 libraryServicesManager:(id)arg5 ;
+(void)publishCommentToServer:(id)arg1 ;
+(void)deleteSharedCommentFromServer:(id)arg1 ;
+(void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 ;
+(void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2 ;
-(void)run;
-(id)description;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
-(NSString *)albumGUID;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(char)shouldArchiveXPCToDisk;
-(NSDictionary *)mstreamdInfoDictionary;
-(void)setMstreamdInfoDictionary:(NSDictionary *)arg1 ;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(NSArray *)msASComments;
-(NSString *)commentGUID;
-(NSString *)assetGUID;
-(void)executeProcessServerNotificationOfCommentChanges;
-(void)executePublishCommentToServer;
-(void)executeDeleteCommentFromServer;
-(void)setMsASComments:(NSArray *)arg1 ;
-(void)setCommentGUID:(NSString *)arg1 ;
-(void)setAssetGUID:(NSString *)arg1 ;
@end

