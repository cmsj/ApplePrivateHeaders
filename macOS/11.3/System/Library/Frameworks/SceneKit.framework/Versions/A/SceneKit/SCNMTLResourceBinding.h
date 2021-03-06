/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLArgumentEncoder;
#import <SceneKit/SceneKit-Structs.h>
@class NSMutableArray, MTLArgument, NSString;

@interface SCNMTLResourceBinding : NSObject {

	char _needsRenderResource;
	SCD_Struct_SC70 _indices;
	SCD_Struct_SC70 _samplerIndices;
	NSMutableArray* _usedResources;
	id _bindBlock;
	MTLArgument* _argument;
	id<MTLArgumentEncoder> _argumentEncoder;

}

@property (nonatomic,retain) MTLArgument * argument;                              //@synthesize argument=_argument - In the implementation block
@property (nonatomic,retain) id<MTLArgumentEncoder> argumentEncoder;              //@synthesize argumentEncoder=_argumentEncoder - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSMutableArray * usedResources; 
@property (assign,nonatomic) char needsRenderResource; 
@property (nonatomic,copy) id bindBlock;                                          //@synthesize bindBlock=_bindBlock - In the implementation block
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(unsigned long long)type;
-(MTLArgument *)argument;
-(id)bindBlock;
-(char)needsRenderResource;
-(id<MTLArgumentEncoder>)argumentEncoder;
-(NSMutableArray *)usedResources;
-(void)setNeedsRenderResource:(char)arg1 ;
-(void)setBindBlock:(id)arg1 ;
-(void)setArgument:(MTLArgument *)arg1 ;
-(void)setArgumentEncoder:(id<MTLArgumentEncoder>)arg1 ;
@end

