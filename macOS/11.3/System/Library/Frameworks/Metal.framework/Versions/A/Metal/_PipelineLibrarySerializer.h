/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PipelineLibrarySerializer : NSObject {

	void* _binarySerializer;

}
-(id)addSpecializedFunction:(id)arg1 descriptor:(const void*)arg2 ;
-(id)addRenderPipelineDescriptor:(const void*)arg1 ;
-(id)addComputePipelineDescriptor:(const void*)arg1 ;
-(unsigned long long)writeToMemory:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)totalSize;
-(unsigned long long)addLibrary:(void*)arg1 ;
@end
