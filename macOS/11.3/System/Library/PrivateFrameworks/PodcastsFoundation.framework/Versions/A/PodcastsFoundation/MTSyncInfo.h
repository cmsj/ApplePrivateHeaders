/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, MTEpisode, MTPlaylist, MTPodcast;

@interface MTSyncInfo : NSManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) long long syncID; 
@property (assign,nonatomic) int entityType; 
@property (assign,nonatomic) int syncability; 
@property (assign,nonatomic) long long insertionRevision; 
@property (assign,nonatomic) long long updateRevision; 
@property (assign,nonatomic) long long artworkUpdateRevision; 
@property (assign,nonatomic,__weak) MTEpisode * episode; 
@property (assign,nonatomic,__weak) MTPlaylist * playlist; 
@property (assign,nonatomic,__weak) MTPodcast * podcast; 
+(id)predicateForHasNoInverseRelation;
+(id)predicateForIsCurrentlySyncable:(char)arg1 ;
@end

