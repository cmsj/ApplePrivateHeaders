/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastServices.framework/Versions/A/PodcastServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastServices/PODContentChangeEntityData.h>
#import <libobjc.A.dylib/PODSecureCoding.h>

@class PODPlaylist, NSArray, NSString;

@interface PODPlaylistChangeEntityData : PODContentChangeEntityData <PODSecureCoding> {

	PODPlaylist* _playlist;
	NSArray* _episodes;

}

@property (nonatomic,readonly) PODPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,readonly) NSArray * episodes;                  //@synthesize episodes=_episodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PODPlaylist *)playlist;
-(NSArray *)episodes;
-(id)initWithPlaylist:(id)arg1 episodes:(id)arg2 ;
@end

