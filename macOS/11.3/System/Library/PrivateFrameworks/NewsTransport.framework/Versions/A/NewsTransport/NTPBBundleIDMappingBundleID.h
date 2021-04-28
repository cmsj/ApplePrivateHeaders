/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBBundleIDMappingBundleID : PBCodable <NSCopying> {

	NSString* _bundleId;
	NSMutableArray* _channelTags;
	NSMutableArray* _sectionTags;
	NSMutableArray* _topicTags;

}

@property (nonatomic,retain) NSString * bundleId;                       //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicTags;                //@synthesize topicTags=_topicTags - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelTags;              //@synthesize channelTags=_channelTags - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionTags;              //@synthesize sectionTags=_sectionTags - In the implementation block
+(Class)topicTagsType;
+(Class)channelTagsType;
+(Class)sectionTagsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)addTopicTags:(id)arg1 ;
-(void)addChannelTags:(id)arg1 ;
-(void)addSectionTags:(id)arg1 ;
-(void)clearTopicTags;
-(unsigned long long)topicTagsCount;
-(id)topicTagsAtIndex:(unsigned long long)arg1 ;
-(void)clearChannelTags;
-(unsigned long long)channelTagsCount;
-(id)channelTagsAtIndex:(unsigned long long)arg1 ;
-(void)clearSectionTags;
-(unsigned long long)sectionTagsCount;
-(id)sectionTagsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)topicTags;
-(void)setTopicTags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)channelTags;
-(void)setChannelTags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sectionTags;
-(void)setSectionTags:(NSMutableArray *)arg1 ;
@end
