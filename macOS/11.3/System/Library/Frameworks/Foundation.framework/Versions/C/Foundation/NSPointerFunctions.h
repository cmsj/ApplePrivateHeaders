/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSPointerFunctions : NSObject <NSCopying>

@property (assign) /*function pointer*/void* hashFunction; 
@property (assign) /*function pointer*/void* isEqualFunction; 
@property (assign) /*function pointer*/void* sizeFunction; 
@property (assign) /*function pointer*/void* descriptionFunction; 
@property (assign) /*function pointer*/void* relinquishFunction; 
@property (assign) /*function pointer*/void* acquireFunction; 
@property (assign) char usesStrongWriteBarrier; 
@property (assign) char usesWeakReadAndWriteBarriers; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)pointerFunctionsWithOptions:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)setHashFunction:(/*function pointer*/void*)arg1 ;
-(void)setIsEqualFunction:(/*function pointer*/void*)arg1 ;
-(void)setSizeFunction:(/*function pointer*/void*)arg1 ;
-(void)setDescriptionFunction:(/*function pointer*/void*)arg1 ;
-(void)setAcquireFunction:(/*function pointer*/void*)arg1 ;
-(void)setRelinquishFunction:(/*function pointer*/void*)arg1 ;
-(void)setUsesStrongWriteBarrier:(char)arg1 ;
-(void)setUsesWeakReadAndWriteBarriers:(char)arg1 ;
-(/*function pointer*/void*)sizeFunction;
-(/*function pointer*/void*)hashFunction;
-(/*function pointer*/void*)isEqualFunction;
-(/*function pointer*/void*)descriptionFunction;
-(/*function pointer*/void*)acquireFunction;
-(/*function pointer*/void*)relinquishFunction;
-(char)usesStrongWriteBarrier;
-(char)usesWeakReadAndWriteBarriers;
@end

