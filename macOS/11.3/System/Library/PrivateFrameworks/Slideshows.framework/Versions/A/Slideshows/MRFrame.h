/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <libobjc.A.dylib/MRLoadable.h>
#import <libobjc.A.dylib/MRRenderable.h>

@class NSDictionary, MRSlideProvider, MRImage, NSString;

@interface MRFrame : NSObject <MRLoadable, MRRenderable> {

	NSDictionary* mDescription;
	MRSlideProvider* mSlideProvider;
	MRImage* mInputImage;
	MRImage* mOutputImage;
	NSString* mFrameID;
	NSDictionary* mAttributes;
	NSDictionary* mFlattenedAttributes;
	CGSize mPixelSize;

}

@property (nonatomic,retain) MRImage * inputImage; 
@property (readonly) NSString * frameID; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (nonatomic,readonly) char isNative3D; 
@property (nonatomic,readonly) char isOpaque; 
@property (nonatomic,readonly) char isAlphaFriendly; 
@property (nonatomic,readonly) char isInfinite; 
+(id)retainedFrameWithFrameID:(id)arg1 forSlideProvider:(id)arg2 ;
-(void)dealloc;
-(void)cleanup;
-(NSDictionary *)attributes;
-(void)unload;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(char)isOpaque;
-(char)isInfinite;
-(CGSize)pixelSize;
-(void)cancelLoading;
-(NSString *)frameID;
-(MRImage *)inputImage;
-(void)setInputImage:(MRImage *)arg1 ;
-(id)initWithFrameID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(char)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)isNative3D;
-(char)isAlphaFriendly;
-(void)retainBySlideProvider:(id)arg1 ;
-(void)releaseBySlideProvider:(id)arg1 ;
-(char)isRetainedBySlideProvider;
@end

