/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (assign,nonatomic) char acceptPodcastCollections; 
@property (assign,nonatomic) char acceptPodcastStations; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSString * query; 
+(id)basicPodcastAppSearch;
+(id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setMaxResults:(long long)arg1 ;
-(long long)maxResults;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)mutatingCommand;
-(char)acceptPodcastCollections;
-(void)setAcceptPodcastCollections:(char)arg1 ;
-(char)acceptPodcastStations;
-(void)setAcceptPodcastStations:(char)arg1 ;
@end

