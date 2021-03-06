/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEventContainerIDs.h>

@class NSString;

@interface SSVMutablePlayActivityEventContainerIDs : SSVPlayActivityEventContainerIDs

@property (assign,nonatomic) long long adamID; 
@property (nonatomic,copy) NSString * cloudAlbumID; 
@property (assign,nonatomic) unsigned long long cloudPlaylistID; 
@property (nonatomic,copy) NSString * globalPlaylistID; 
@property (nonatomic,copy) NSString * playlistVersionHash; 
@property (nonatomic,copy) NSString * stationHash; 
@property (nonatomic,copy) NSString * stationStringID; 
@property (assign,nonatomic) long long stationID; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAdamID:(long long)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(void)setCloudAlbumID:(NSString *)arg1 ;
-(void)setCloudPlaylistID:(unsigned long long)arg1 ;
-(void)setPlaylistVersionHash:(NSString *)arg1 ;
@end

