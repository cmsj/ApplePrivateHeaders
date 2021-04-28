/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/Versions/A/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class NSMutableDictionary, AVAsset, NSMutableArray, NSDictionary, NSArray;

@interface IrisVideoMetadataExtractor : NSObject {

	char saveAllMetadata;
	char processedFile;
	NSMutableDictionary* videoTrackMetadataDict;
	AVAsset* inMovieAsset;
	NSMutableArray* desiredIrisKeysArray;
	NSDictionary* allMetadata;
	NSArray* _framesMetadataArray;

}

@property (retain) AVAsset * inMovieAsset; 
@property (retain) NSMutableArray * desiredIrisKeysArray; 
@property (readonly) NSArray * framesMetadataArray;                             //@synthesize framesMetadataArray=_framesMetadataArray - In the implementation block
@property (readonly) NSMutableDictionary * videoTrackMetadataDict; 
@property (assign) char processedFile; 
@property (assign) char saveAllMetadata; 
@property (readonly) NSDictionary * allMetadata; 
-(id)init;
-(NSDictionary *)allMetadata;
-(void)setInMovieAsset:(AVAsset *)arg1 ;
-(int)processVideoTrack:(id)arg1 ;
-(int)processStillFrameTimeForAsset:(id)arg1 toDictionary:(id)arg2 ;
-(void)AddFrameDictionary:(id)arg1 withCMTime:(SCD_Struct_Au1)arg2 toArray:(id)arg3 ;
-(int)AddInfoFromMetadata:(id)arg1 withTimeStamp:(SCD_Struct_Au1)arg2 toArray:(id)arg3 ;
-(NSMutableDictionary *)videoTrackMetadataDict;
-(AVAsset *)inMovieAsset;
-(NSMutableArray *)desiredIrisKeysArray;
-(void)setDesiredIrisKeysArray:(NSMutableArray *)arg1 ;
-(char)processedFile;
-(void)setProcessedFile:(char)arg1 ;
-(NSArray *)framesMetadataArray;
-(int)processFile;
-(char)saveAllMetadata;
-(void)setSaveAllMetadata:(char)arg1 ;
@end
