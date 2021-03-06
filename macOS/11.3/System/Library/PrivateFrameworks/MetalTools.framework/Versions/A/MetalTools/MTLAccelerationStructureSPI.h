/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTLAccelerationStructureDescriptor;


@protocol MTLAccelerationStructureSPI <MTLAccelerationStructure>
@property (nonatomic,readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) id<MTLBuffer> buffer; 
@property (nonatomic,readonly) unsigned long long bufferOffset; 
@property (nonatomic,retain) MTLAccelerationStructureDescriptor * descriptor; 
@optional
-(MTLAccelerationStructureDescriptor *)descriptor;
-(void)setDescriptor:(id)arg1;

@required
-(unsigned long long)uniqueIdentifier;
-(id<MTLBuffer>)buffer;
-(unsigned long long)bufferOffset;

@end

