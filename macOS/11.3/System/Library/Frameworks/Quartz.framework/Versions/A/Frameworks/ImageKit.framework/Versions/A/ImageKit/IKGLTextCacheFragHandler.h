/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKCacheFragHandler;

@interface IKGLTextCacheFragHandler : NSObject {

	IKCacheFragHandler* _fragHandler;
	int _maxLineHeight;
	CGSize _currentSize;
	CGRect _usedSpace;

}
-(id)fragHandler;
-(char)canAllocateSize:(CGSize)arg1 ;
-(CGRect)allocateSize:(CGSize)arg1 ;
-(char)freeRect:(CGRect)arg1 ;
-(void)_convertRect:(CGRect)arg1 toPos:(unsigned*)arg2 andLen:(unsigned*)arg3 ;
-(CGRect)_convertPos:(unsigned)arg1 AndLen:(unsigned)arg2 ;
-(void)_resetFragHandlerWithSize:(CGSize)arg1 ;
-(void)resetCacheWithSize:(CGSize)arg1 ;
-(CGRect)boundingRectOfUsedSpace;
-(void)dealloc;
-(void)reset;
-(id)initWithSize:(CGSize)arg1 ;
-(void)setMaxLineHeight:(int)arg1 ;
-(int)maxLineHeight;
@end

