/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHImageDecoderOptions : NSObject {

	char _shouldLoadGainMap;
	char _applyOrientationTransform;
	char _optimizeForDrawing;
	char _highPriority;
	char _waitUntilComplete;
	long long _maximumLongSideLength;
	long long _resizeMode;

}

@property (assign,nonatomic) char shouldLoadGainMap;                       //@synthesize shouldLoadGainMap=_shouldLoadGainMap - In the implementation block
@property (assign,nonatomic) long long maximumLongSideLength;              //@synthesize maximumLongSideLength=_maximumLongSideLength - In the implementation block
@property (assign,nonatomic) long long resizeMode;                         //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) char applyOrientationTransform;               //@synthesize applyOrientationTransform=_applyOrientationTransform - In the implementation block
@property (assign,nonatomic) char optimizeForDrawing;                      //@synthesize optimizeForDrawing=_optimizeForDrawing - In the implementation block
@property (assign,nonatomic) char highPriority;                            //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) char waitUntilComplete;                       //@synthesize waitUntilComplete=_waitUntilComplete - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)waitUntilComplete;
-(void)setHighPriority:(char)arg1 ;
-(char)highPriority;
-(char)shouldLoadGainMap;
-(void)setShouldLoadGainMap:(char)arg1 ;
-(long long)maximumLongSideLength;
-(void)setMaximumLongSideLength:(long long)arg1 ;
-(long long)resizeMode;
-(void)setResizeMode:(long long)arg1 ;
-(char)applyOrientationTransform;
-(void)setApplyOrientationTransform:(char)arg1 ;
-(char)optimizeForDrawing;
-(void)setOptimizeForDrawing:(char)arg1 ;
-(void)setWaitUntilComplete:(char)arg1 ;
@end

