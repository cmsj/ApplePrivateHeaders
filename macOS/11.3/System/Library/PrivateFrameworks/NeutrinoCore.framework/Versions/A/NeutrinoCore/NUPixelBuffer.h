/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUBuffer.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol NUBuffer;
@class NUBufferStorage, NUPixelFormat, NSString;

@interface NUPixelBuffer : NSObject <NUBuffer, NSCopying, NSMutableCopying> {

	NUBufferStorage* _storage;
	id<NUBuffer> _buffer;

}

@property (nonatomic,readonly) SCD_Struct_NU8 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) const void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_NU8)size;
-(void)dealloc;
-(const void*)bytes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NUPixelFormat *)format;
-(long long)rowBytes;
-(id)debugQuickLookObject;
-(const void*)bytesAtPoint:(SCD_Struct_NU8)arg1 ;
-(id)privateInit;
@end

