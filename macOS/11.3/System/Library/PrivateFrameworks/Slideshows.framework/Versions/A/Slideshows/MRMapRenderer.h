/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slideshows/Slideshows-Structs.h>
@interface MRMapRenderer : NSObject
+(id)sharedRenderer;
-(id)init;
-(id)splitToTileRect:(CGRect)arg1 withTileSize:(float)arg2 ;
-(CGImageRef)newTileForRect:(CGRect)arg1 withScale:(int)arg2 wrap:(char)arg3 ;
-(CGImageRef)_imageFromData:(id)arg1 ;
-(id)requestStringForX:(int)arg1 y:(int)arg2 scale:(int)arg3 ;
@end

