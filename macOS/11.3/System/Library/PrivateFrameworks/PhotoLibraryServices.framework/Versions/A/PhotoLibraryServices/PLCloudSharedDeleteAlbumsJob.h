/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob {

	NSArray* _albumCloudGUIDsToDelete;
	NSString* _inviterAddress;

}

@property (nonatomic,retain) NSArray * albumCloudGUIDsToDelete;              //@synthesize albumCloudGUIDsToDelete=_albumCloudGUIDsToDelete - In the implementation block
@property (nonatomic,retain) NSString * inviterAddress;                      //@synthesize inviterAddress=_inviterAddress - In the implementation block
+(void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1 ;
+(void)deleteLocalAlbumForMSASAlbumGUID:(id)arg1 inviterAddress:(id)arg2 ;
-(void)run;
-(id)description;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(NSArray *)albumCloudGUIDsToDelete;
-(NSString *)inviterAddress;
-(void)setAlbumCloudGUIDsToDelete:(NSArray *)arg1 ;
-(void)setInviterAddress:(NSString *)arg1 ;
@end

