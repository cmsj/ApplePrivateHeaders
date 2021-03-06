/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAWLWatchListChannelDetails, NSURL, NSString;

@interface SAWLWatchListPlayable : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAWLWatchListChannelDetails * channelDetails; 
@property (assign,nonatomic) char entitled; 
@property (assign,nonatomic) char installed; 
@property (nonatomic,copy) NSURL * playURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListPlayable;
+(id)watchListPlayableWithDictionary:(id)arg1 context:(id)arg2 ;
-(char)installed;
-(id)groupIdentifier;
-(void)setInstalled:(char)arg1 ;
-(char)entitled;
-(id)encodedClassName;
-(SAWLWatchListChannelDetails *)channelDetails;
-(void)setChannelDetails:(SAWLWatchListChannelDetails *)arg1 ;
-(void)setEntitled:(char)arg1 ;
-(NSURL *)playURL;
-(void)setPlayURL:(NSURL *)arg1 ;
@end

