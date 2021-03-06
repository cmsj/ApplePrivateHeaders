/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <libobjc.A.dylib/MZMediaManagement.h>

@class NSMutableDictionary, NSString;

@interface MRTrivialAssetManager : NSObject <MZMediaManagement> {

	NSMutableDictionary* mCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(double)startTimeForAssetAtPath:(id)arg1 ;
-(double)stopTimeForAssetAtPath:(id)arg1 ;
-(CGSize)resolutionForAssetAtPath:(id)arg1 ;
-(id)absolutePathForAssetAtPath:(id)arg1 ;
-(CGImageRef)CGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(char)arg4 now:(char)arg5 ;
-(id)absolutePathForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(CGImageRef)thumbnailCGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(IOSurfaceRef)IOSurfaceForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 ;
-(char)isSupportedMovieForAssetAtPath:(id)arg1 ;
-(id)attributeForAssetAtPath:(id)arg1 forKey:(id)arg2 ;
-(id)infoForAssetAtPath:(id)arg1 ;
@end

