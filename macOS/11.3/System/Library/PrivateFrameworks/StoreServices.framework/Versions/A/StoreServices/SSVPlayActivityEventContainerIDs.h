/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SSVPlayActivityEventContainerIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _adamID;
	NSString* _cloudAlbumID;
	unsigned long long _cloudPlaylistID;
	NSString* _globalPlaylistID;
	NSString* _playlistVersionHash;
	long long _stationID;
	NSString* _stationHash;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) long long adamID;                                 //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cloudAlbumID;                     //@synthesize cloudAlbumID=_cloudAlbumID - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudPlaylistID;               //@synthesize cloudPlaylistID=_cloudPlaylistID - In the implementation block
@property (nonatomic,copy,readonly) NSString * globalPlaylistID;                 //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,copy,readonly) NSString * playlistVersionHash;              //@synthesize playlistVersionHash=_playlistVersionHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationHash;                      //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationStringID;                  //@synthesize stationStringID=_stationStringID - In the implementation block
@property (nonatomic,readonly) long long stationID;                              //@synthesize stationID=_stationID - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)adamID;
-(long long)stationID;
-(NSString *)cloudAlbumID;
-(NSString *)stationStringID;
-(NSString *)stationHash;
-(NSString *)globalPlaylistID;
-(unsigned long long)cloudPlaylistID;
-(NSString *)playlistVersionHash;
-(id)_copyWithClass:(Class)arg1 ;
@end

