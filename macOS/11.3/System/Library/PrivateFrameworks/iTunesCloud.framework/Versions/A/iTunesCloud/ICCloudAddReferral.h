/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICCloudAddReferral : NSObject <NSSecureCoding> {

	NSString* _playlistGlobalID;
	long long _albumAdamID;

}

@property (nonatomic,copy,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long albumAdamID;                         //@synthesize albumAdamID=_albumAdamID - In the implementation block
+(char)supportsSecureCoding;
+(id)referralWithPlaylistGlobalID:(id)arg1 ;
+(id)referralWithAlbumAdamID:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)playlistGlobalID;
-(long long)albumAdamID;
@end

