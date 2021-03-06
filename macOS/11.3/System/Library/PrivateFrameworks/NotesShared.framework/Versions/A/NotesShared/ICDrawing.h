/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSUUID, TTVectorMultiTimestamp, NSDate, NSOrderedSet;

@interface ICDrawing : NSObject <NSCopying> {

	NSMutableOrderedSet* _commands;
	NSMutableOrderedSet* _visibleCommands;
	long long _orientation;
	CGRect _unrotatedBoundsInCommandSpace;
	CGRect _commandBounds;
	NSUUID* _replicaUUID;
	TTVectorMultiTimestamp* _timestamp;
	NSDate* _orientationTimestamp;
	CGSize _unrotatedSize;

}

@property (nonatomic,retain) TTVectorMultiTimestamp * timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * orientationTimestamp;                     //@synthesize orientationTimestamp=_orientationTimestamp - In the implementation block
@property (nonatomic,readonly) NSUUID * replicaUUID;                            //@synthesize replicaUUID=_replicaUUID - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * commands;                         //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * visibleCommands; 
@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) CGSize unrotatedSize;                              //@synthesize unrotatedSize=_unrotatedSize - In the implementation block
@property (nonatomic,readonly) char canChangeTransientOrientation; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGRect unrotatedBoundsInCommandSpace;              //@synthesize unrotatedBoundsInCommandSpace=_unrotatedBoundsInCommandSpace - In the implementation block
@property (nonatomic,readonly) CGRect fullBounds; 
+(CGSize)defaultSize;
+(CGSize)defaultPixelSize;
+(CGSize)fullSize:(CGSize)arg1 forOrientation:(long long)arg2 ;
+(CGAffineTransform)orientationTransform:(long long)arg1 size:(CGSize)arg2 ;
+(void)sortCommands:(id)arg1 ;
+(CGAffineTransform)defaultSizeOrientationTransform:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setOrientation:(long long)arg1 ;
-(TTVectorMultiTimestamp *)timestamp;
-(CGRect)bounds;
-(long long)orientation;
-(NSOrderedSet *)commands;
-(void)setTimestamp:(TTVectorMultiTimestamp *)arg1 ;
-(NSUUID *)replicaUUID;
-(id)initWithReplicaID:(id)arg1 ;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(CGAffineTransform)orientationTransform;
-(unsigned long long)mergeWithDrawing:(id)arg1 ;
-(id)initWithDrawing:(id)arg1 ;
-(unsigned)saveToArchive:(Drawing*)arg1 withPathData:(char)arg2 ;
-(CGRect)fullBounds;
-(CGSize)fullSize;
-(id)initWithData:(id)arg1 version:(unsigned)arg2 andReplicaID:(id)arg3 ;
-(id)serializeWithPathData:(char)arg1 toVersion:(unsigned*)arg2 ;
-(id)initWithArchive:(const Drawing*)arg1 version:(unsigned)arg2 andReplicaID:(id)arg3 ;
-(id)mutableCommands;
-(void)setOrientationTimestamp:(NSDate *)arg1 ;
-(void)setUnrotatedBoundsInCommandSpace:(CGRect)arg1 ;
-(NSDate *)orientationTimestamp;
-(CGRect)unrotatedBoundsInCommandSpace;
-(id)serializeWithPathData:(char)arg1 ;
-(void)invalidateBounds;
-(CGRect)commandBounds;
-(CGSize)unrotatedSize;
-(NSOrderedSet *)visibleCommands;
-(CGRect)calculateCommandBounds;
-(char)canChangeTransientOrientation;
-(void)setCommandIDForInsertion:(id)arg1 ;
-(id)visibleCommandForInsertingCommand:(id)arg1 ;
-(void)addNewCommand:(id)arg1 ;
-(ICDrawingCommandID)commandIDForNewCommand;
-(void)sortCommands;
-(id)initWithCommands:(id)arg1 fromDrawing:(id)arg2 ;
-(void)takeOrientationFrom:(id)arg1 ;
-(char)setTransientOrientation:(long long)arg1 ;
-(id)insertNewTestCommand;
-(id)setCommand:(id)arg1 hidden:(char)arg2 ;
-(void)setUnrotatedSize:(CGSize)arg1 ;
@end

