/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@class NSString;

@interface EspressoDataFrameStorageExecutorMatchingBufferSet : NSObject {

	unsigned long long _index;
	NSString* _name;
	CVBufferRef _computed_pb;
	SCD_Struct_ET45* _reference_buffer;
	SCD_Struct_ET45* _computed_buffer;
	SCD_Struct_ET45* _groundtruth_buffer;

}

@property (assign) unsigned long long index;                         //@synthesize index=_index - In the implementation block
@property (retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign) SCD_Struct_ET45* reference_buffer;                //@synthesize reference_buffer=_reference_buffer - In the implementation block
@property (assign) SCD_Struct_ET45* computed_buffer;                 //@synthesize computed_buffer=_computed_buffer - In the implementation block
@property (assign) CVBufferRef computed_pb;                          //@synthesize computed_pb=_computed_pb - In the implementation block
@property (assign) SCD_Struct_ET45* groundtruth_buffer;              //@synthesize groundtruth_buffer=_groundtruth_buffer - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(SCD_Struct_ET45*)computed_buffer;
-(CVBufferRef)computed_pb;
-(SCD_Struct_ET45*)reference_buffer;
-(void)setReference_buffer:(SCD_Struct_ET45*)arg1 ;
-(void)setComputed_buffer:(SCD_Struct_ET45*)arg1 ;
-(void)setComputed_pb:(CVBufferRef)arg1 ;
-(SCD_Struct_ET45*)groundtruth_buffer;
-(void)setGroundtruth_buffer:(SCD_Struct_ET45*)arg1 ;
@end

