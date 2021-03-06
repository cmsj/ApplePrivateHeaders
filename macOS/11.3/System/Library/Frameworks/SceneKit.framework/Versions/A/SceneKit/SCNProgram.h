/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding> {

	NSString* _vertexShader;
	NSString* _tessellationControlShader;
	NSString* _tessellationEvaluationShader;
	NSString* _geometryShader;
	NSString* _fragmentShader;
	NSString* _vertexFunctionName;
	NSString* _fragmentFunctionName;
	NSString* _name;
	NSString* _sourceFile;
	NSMutableDictionary* _semanticInfos;
	char _opaque;
	id _library;
	id _delegate;
	NSMutableDictionary* _bufferBindings;

}

@property (nonatomic,copy) NSString * vertexShader; 
@property (nonatomic,copy) NSString * fragmentShader; 
@property (nonatomic,copy) NSString * tessellationControlShader; 
@property (nonatomic,copy) NSString * tessellationEvaluationShader; 
@property (nonatomic,copy) NSString * geometryShader; 
@property (nonatomic,copy) NSString * vertexFunctionName; 
@property (nonatomic,copy) NSString * fragmentFunctionName; 
@property (assign,getter=isOpaque,nonatomic) char opaque; 
@property (assign,nonatomic) id<SCNProgramDelegate> delegate; 
@property (nonatomic,retain) id<MTLLibrary> library; 
+(char)supportsSecureCoding;
+(id)program;
+(id)programWithLibrary:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SCNProgramDelegate>)delegate;
-(void)setDelegate:(id<SCNProgramDelegate>)arg1 ;
-(void)setName:(id)arg1 ;
-(char)isOpaque;
-(void)setOpaque:(char)arg1 ;
-(id<MTLLibrary>)library;
-(id)sourceFile;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(void)setVertexShader:(NSString *)arg1 ;
-(void)setFragmentShader:(NSString *)arg1 ;
-(NSString *)vertexShader;
-(NSString *)fragmentShader;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3 ;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 ;
-(id)semanticForSymbol:(id)arg1 ;
-(void)setVertexFunctionName:(NSString *)arg1 ;
-(void)setFragmentFunctionName:(NSString *)arg1 ;
-(void)handleBindingOfBufferNamed:(id)arg1 frequency:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setTessellationControlShader:(NSString *)arg1 ;
-(void)setTessellationEvaluationShader:(NSString *)arg1 ;
-(void)setGeometryShader:(NSString *)arg1 ;
-(NSString *)tessellationControlShader;
-(NSString *)tessellationEvaluationShader;
-(NSString *)geometryShader;
-(NSString *)vertexFunctionName;
-(NSString *)fragmentFunctionName;
-(void)setSemanticInfos:(id)arg1 ;
-(void)_customEncodingOfSCNProgram:(id)arg1 ;
-(void)_customDecodingOfSCNProgram:(id)arg1 ;
-(void)setSourceFile:(id)arg1 ;
-(int)shadingLanguage;
-(id)_optionsForSymbol:(id)arg1 ;
-(id)_allSymbolsWithSceneKitSemantic;
-(id)_bufferBindings;
@end

