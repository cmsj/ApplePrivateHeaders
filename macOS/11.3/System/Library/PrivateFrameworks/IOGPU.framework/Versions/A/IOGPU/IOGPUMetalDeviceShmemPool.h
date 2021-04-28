/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/Versions/A/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOGPU/IOGPU-Structs.h>
@interface IOGPUMetalDeviceShmemPool : NSObject {

	IOGPUMetalDeviceShmemPoolPrivate* _priv;

}
-(void)dealloc;
-(void)purge;
-(void)setShmemSize:(unsigned)arg1 ;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned)arg3 shmemType:(int)arg4 options:(id)arg5 ;
-(unsigned)shmemSize;
-(int)availableCount;
-(void)prune;
@end
