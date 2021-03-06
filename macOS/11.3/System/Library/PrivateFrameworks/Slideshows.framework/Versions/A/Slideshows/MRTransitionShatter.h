/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MRTransition.h>

@class NSDictionary, NSMutableArray;

@interface MRTransitionShatter : MRTransition {

	char mIsLoaded;
	NSDictionary* mLayout;
	NSMutableArray* mMasks;

}
+(void)initialize;
+(id)shatterDescriptions;
-(void)unload;
-(id)initWithTransitionID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_renderSublayer:(id)arg1 layerCount:(long long)arg2 sourceIsText:(char)arg3 targetIsText:(char)arg4 currentShader:(id)arg5 sourceSize:(CGSize)arg6 targetSize:(CGSize)arg7 atTime:(double)arg8 inContext:(id)arg9 withArguments:(id)arg10 ;
@end

