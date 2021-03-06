/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSCurationDebugObject.h>

@class NSSet, NSString;

@interface CLSCurationDebugCluster : CLSCurationDebugObject {

	NSSet* _debugClusters;
	NSSet* _unclusteredDebugItems;
	NSString* _reason;

}

@property (nonatomic,retain) NSSet * unclusteredDebugItems;              //@synthesize unclusteredDebugItems=_unclusteredDebugItems - In the implementation block
@property (readonly) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
-(NSString *)reason;
-(id)dictionaryRepresentation;
-(id)timestamp;
-(void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3 ;
-(NSSet *)unclusteredDebugItems;
-(id)initWithDebugItems:(id)arg1 reason:(id)arg2 ;
-(id)allDebugItems;
-(void)setDebugClusters:(id)arg1 ;
-(void)addDebugClusters:(id)arg1 ;
-(void)setUnclusteredDebugItems:(NSSet *)arg1 ;
@end

