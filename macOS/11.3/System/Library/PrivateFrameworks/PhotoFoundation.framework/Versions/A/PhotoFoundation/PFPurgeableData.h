/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>
#import <libobjc.A.dylib/PFMemoryInfo.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface PFPurgeableData : NSMutableData <PFMemoryInfo> {

	void* _bytes;
	unsigned long long _length;
	unsigned long long _capacity;
	unsigned long long _accessLevel;
	char _copyAccessLevel;
	char _contentsLost;
	char _canCacheOnDisk;
	int _purgeLevel;
	NSObject*<OS_dispatch_queue> _queue;
	char _recycle;
	NSString* _memoryNote;

}

@property (assign) char canCacheOnDisk; 
@property (readonly) unsigned long long accessCount; 
@property (retain) NSString * memoryNote;                           //@synthesize memoryNote=_memoryNote - In the implementation block
@property (assign) char recycle;                                    //@synthesize recycle=_recycle - In the implementation block
@property (readonly) int purgeLevel; 
@property (readonly) int purgeState; 
@property (readonly) unsigned long long capacity; 
@property (readonly) void* rawBytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_checkVMError:(int)arg1 function:(const char*)arg2 ;
+(id)purgeStateToString:(int)arg1 ;
+(id)purgeLevelToString:(int)arg1 ;
+(id)allInstances;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(const void*)bytes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(char)recycle;
-(void*)rawBytes;
-(int)purgeLevel;
-(int)purgeState;
-(unsigned long long)accessCount;
-(NSString *)memoryNote;
-(void)_checkAccess;
-(int)_purgeLevelToOSValue:(int)arg1 ;
-(void)_logPurgeState;
-(void*)_allocateMemory:(unsigned long long)arg1 newCapacity:(unsigned long long*)arg2 ;
-(void)_deallocateMemory:(void*)arg1 capacity:(unsigned long long)arg2 ;
-(char)_markBlockUnpurgeable;
-(char)_restoreBlockPurgeLevel;
-(char)_setBlockFIFO:(int)arg1 ;
-(int)_OSValueToPurgeState:(int)arg1 ;
-(char)canCacheOnDisk;
-(void)setCanCacheOnDisk:(char)arg1 ;
-(char)setPurgeLevel:(int)arg1 ;
-(char)resetLRUValue;
-(char)beginAccess;
-(void)beginAccess:(/*^block*/id)arg1 ;
-(void)endAccess;
-(void)setMemoryNote:(NSString *)arg1 ;
-(void)setRecycle:(char)arg1 ;
@end
