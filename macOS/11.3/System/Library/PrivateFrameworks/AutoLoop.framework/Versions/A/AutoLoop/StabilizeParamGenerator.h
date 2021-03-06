/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/Versions/A/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class AutoLoopStabilizer;

@interface StabilizeParamGenerator : NSObject {

	AutoLoopStabilizer* stabilizer;

}

@property (nonatomic,retain) AutoLoopStabilizer * stabilizer; 
-(id)initWithStabilizer:(id)arg1 ;
-(id)generateStabilizeParams;
-(void)ICGetIdentityHomographies:(void*)arg1 toStabilizeParams:(id)arg2 withImageBounds:(CGSize)arg3 firstFrameIndex:(unsigned long long)arg4 lastFrameIndex:(unsigned long long)arg5 ;
-(void)CopyCoordinateShiftedHomographies:(void*)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 toStabilizeParams:(id)arg4 withImageBounds:(CGSize)arg5 ;
-(void)setStabilizer:(AutoLoopStabilizer *)arg1 ;
-(AutoLoopStabilizer *)stabilizer;
-(id)generatePassThruForAsset:(id)arg1 trimStart:(SCD_Struct_Au1)arg2 trimLength:(SCD_Struct_Au1)arg3 ;
-(id)generateTrivialPassThruForFrameTimes:(vector<CMTime, std::__1::allocator<CMTime>>*)arg1 totalDuration:(SCD_Struct_Au1)arg2 ;
@end

