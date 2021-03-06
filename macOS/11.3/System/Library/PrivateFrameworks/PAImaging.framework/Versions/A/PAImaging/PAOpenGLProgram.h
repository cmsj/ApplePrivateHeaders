/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface PAOpenGLProgram : NSObject {

	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _vertexShaderSource;
	NSString* _fragmentShaderSource;
	NSString* _geometryShaderSource;
	unsigned _geometryVertexOutCount;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _executables;

}

@property (nonatomic,copy) NSString * vertexShaderSource;                  //@synthesize vertexShaderSource=_vertexShaderSource - In the implementation block
@property (nonatomic,copy) NSString * fragmentShaderSource;                //@synthesize fragmentShaderSource=_fragmentShaderSource - In the implementation block
@property (nonatomic,copy) NSString * geometryShaderSource;                //@synthesize geometryShaderSource=_geometryShaderSource - In the implementation block
@property (assign,nonatomic) unsigned geometryVertexOutCount;              //@synthesize geometryVertexOutCount=_geometryVertexOutCount - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setLocation:(unsigned)arg1 forAttribute:(id)arg2 ;
-(void)_setLocation:(unsigned)arg1 forAttribute:(id)arg2 ;
-(unsigned)locationForAttribute:(id)arg1 ;
-(unsigned)_locationForAttribute:(id)arg1 ;
-(void)forEachAttribute:(/*^block*/id)arg1 ;
-(void)_forEachAttribute:(/*^block*/id)arg1 ;
-(id)instantiateOnDevice:(id)arg1 ;
-(id)_executableForDevice:(id)arg1 ;
-(id)_lookupExecutableForDevice:(id)arg1 ;
-(void)_setExecutable:(id)arg1 forDevice:(id)arg2 ;
-(id)_newExecutableForDevice:(id)arg1 ;
-(NSString *)vertexShaderSource;
-(void)setVertexShaderSource:(NSString *)arg1 ;
-(NSString *)geometryShaderSource;
-(void)setGeometryShaderSource:(NSString *)arg1 ;
-(NSString *)fragmentShaderSource;
-(void)setFragmentShaderSource:(NSString *)arg1 ;
-(unsigned)geometryVertexOutCount;
-(void)setGeometryVertexOutCount:(unsigned)arg1 ;
@end

