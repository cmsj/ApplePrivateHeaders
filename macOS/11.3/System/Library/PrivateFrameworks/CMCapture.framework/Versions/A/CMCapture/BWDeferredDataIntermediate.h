/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWDeferredIntermediate.h>

@class NSData;

@interface BWDeferredDataIntermediate : BWDeferredIntermediate {

	NSData* _archive;

}
-(void)dealloc;
-(int)setArchive:(id)arg1 ;
-(id)fetchAndRetain:(int*)arg1 ;
-(id)fetchWithCustomClassesAndRetain:(id)arg1 err:(int*)arg2 ;
-(int)_setURL:(id)arg1 prefetchQueue:(id)arg2 ;
@end
