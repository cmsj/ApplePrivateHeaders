/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MLMultiArray : NSObject <NSSecureCoding> {

	MultiArrayBuffer* _pArray;
	char _managingData;
	/*^block*/id _deallocator;
	NSArray* _shape;
	NSArray* _strides;

}

@property (nonatomic,readonly) unsigned long long numberOfBytesPerElement; 
@property (getter=isManagingData,nonatomic,readonly) char managingData; 
@property (getter=isContiguous,nonatomic,readonly) char contiguous; 
@property (nonatomic,readonly) void* dataPointer; 
@property (nonatomic,readonly) long long dataType; 
@property (nonatomic,readonly) NSArray * shape;                                         //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) NSArray * strides;                                       //@synthesize strides=_strides - In the implementation block
@property (nonatomic,readonly) long long count; 
+(char)supportsSecureCoding;
+(id)stringForDataType:(long long)arg1 ;
+(char)fillIndexVector:(vector<unsigned long, std::__1::allocator<unsigned long>>*)arg1 fromArray:(id)arg2 error:(id*)arg3 ;
+(id)arrayFromIndexVector:(const vector<unsigned long, std::__1::allocator<unsigned long>>*)arg1 ;
+(int)cppStorageOrder:(long long)arg1 ;
+(char)getShapeOfArrayOfSameLengthArrays:(id)arg1 numberOfRows:(unsigned long long*)arg2 numberOfColumns:(unsigned long long*)arg3 error:(id*)arg4 ;
+(id)doubleMultiArrayWithCopyOfMultiArray:(id)arg1 ;
+(id)doubleVectorWithValues:(id)arg1 ;
+(id)doubleMultiArrayWithShape:(id)arg1 valueArray:(id)arg2 error:(id*)arg3 ;
+(id)doubleMatrixWithValues:(id)arg1 error:(id*)arg2 ;
+(id)float32MatrixWithValues:(id)arg1 error:(id*)arg2 ;
+(char)validateMultiArrays:(id)arg1 forConcatenatingAlongAxis:(long long)arg2 normalizedAxis:(unsigned long long*)arg3 reason:(id*)arg4 ;
+(id)multiArrayByConcatenatingMultiArrays:(id)arg1 alongAxis:(long long)arg2 dataType:(long long)arg3 ;
+(CVBufferRef)pixelBufferGray8FromMultiArrayHW:(id)arg1 error:(id*)arg2 ;
+(CVBufferRef)pixelBufferBGRA8FromMultiArrayCHW:(id)arg1 channelOrderIsBGR:(char)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(long long)count;
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(long long)dataType;
-(char)isContiguous;
-(id)initWithShape:(id)arg1 dataType:(long long)arg2 error:(id*)arg3 ;
-(id)initWithDataPointer:(void*)arg1 shape:(id)arg2 dataType:(long long)arg3 strides:(id)arg4 deallocator:(/*^block*/id)arg5 error:(id*)arg6 ;
-(id)numberAtOffset:(unsigned long long)arg1 ;
-(void)setNumber:(id)arg1 atOffset:(unsigned long long)arg2 ;
-(unsigned long long)offsetForKeyedSubscript:(id)arg1 ;
-(void*)dataPointer;
-(NSArray *)shape;
-(NSArray *)strides;
-(unsigned long long)numberOfBytesPerElement;
-(id)initWithShape:(id)arg1 dataType:(long long)arg2 storageOrder:(long long)arg3 error:(id*)arg4 ;
-(char)isEqualToMultiArray:(id)arg1 ;
-(char)isManagingData;
-(char)isContiguousInOrder:(long long)arg1 ;
-(double*)doublePointer;
-(float*)float32Pointer;
-(id)initWithMultiArrayBuffer:(MultiArrayBuffer*)arg1 ;
-(id)initWithShape:(id)arg1 dataType:(long long)arg2 storageOrder:(long long)arg3 bufferAlignment:(unsigned long long)arg4 ;
-(char)copyIntoMultiArray:(id)arg1 error:(id*)arg2 ;
-(char)vectorizeIntoMultiArray:(id)arg1 storageOrder:(long long)arg2 error:(id*)arg3 ;
-(char)fillWithNumber:(id)arg1 ;
-(char)setRangeWithRawData:(id)arg1 destIndex:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)numberArray;
-(id)sliceAtOrigin:(id)arg1 shape:(id)arg2 squeeze:(char)arg3 error:(id*)arg4 ;
-(id)squeeze;
-(id)squeezeDimensions:(id)arg1 error:(id*)arg2 ;
-(id)multiArrayViewExpandingDimensionsAtAxis:(long long)arg1 ;
-(void*)multiArrayBuffer;
-(id)debugQuickLookObject;
-(char)renderToOneComponent8PixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(char)renderTo32BGRAPixelBuffer:(CVBufferRef)arg1 channelOrderIsBGR:(char)arg2 error:(id*)arg3 ;
-(char)renderToCVPixelBuffer:(CVBufferRef)arg1 channelOrderIsBGR:(char)arg2 error:(id*)arg3 ;
@end

