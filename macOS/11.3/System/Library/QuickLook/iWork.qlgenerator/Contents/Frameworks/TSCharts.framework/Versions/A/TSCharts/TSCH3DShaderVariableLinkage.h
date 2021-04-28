/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DShaderVariable;

@interface TSCH3DShaderVariableLinkage : NSObject {

	TSCH3DShaderVariable* _variable;
	TSCH3DShaderType _linked;
	TSCH3DShaderVariableScopes _scope;
	TSCH3DShaderVariableScopes _declaredScope;
	char _isUsed;

}

@property (nonatomic,readonly) TSCH3DShaderVariable * variable;                       //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) TSCH3DShaderType shaderType; 
@property (nonatomic,readonly) TSCH3DShaderType linked;                               //@synthesize linked=_linked - In the implementation block
@property (nonatomic,readonly) TSCH3DShaderVariableScopes scope;                      //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) char isLinked; 
@property (nonatomic,readonly) char notLinked; 
@property (nonatomic,readonly) TSCH3DShaderVariableScopes declaredScope;              //@synthesize declaredScope=_declaredScope - In the implementation block
@property (assign,nonatomic) char isUsed;                                             //@synthesize isUsed=_isUsed - In the implementation block
@property (nonatomic,readonly) char isSpecial; 
@property (nonatomic,readonly) char isUniform; 
@property (nonatomic,readonly) char hasAttribute; 
@property (nonatomic,readonly) char isAttribute; 
@property (nonatomic,readonly) char isVertexVarying; 
@property (nonatomic,readonly) char isFragment; 
@property (nonatomic,readonly) char hasFragment; 
@property (nonatomic,readonly) char canHaveFragment; 
@property (nonatomic,readonly) char isVertex; 
@property (nonatomic,readonly) char hasVertex; 
@property (nonatomic,readonly) char scopeHasFragment; 
@property (nonatomic,readonly) char scopedInAll; 
@property (nonatomic,readonly) char isFragmentLinkable; 
@property (nonatomic,readonly) char isVertexLinkable; 
@property (nonatomic,readonly) unsigned long long hasGlobal; 
+(id)linkageWithVariable:(id)arg1 ;
-(id)description;
-(TSCH3DShaderVariable *)variable;
-(char)isUniform;
-(TSCH3DShaderVariableScopes)scope;
-(char)hasAttribute;
-(void)unlink;
-(void)setIsUsed:(char)arg1 ;
-(char)isLinked;
-(char)isFragment;
-(void)setLinkage:(TSCH3DShaderType)arg1 ;
-(char)isUsed;
-(char)isAttribute;
-(id)initWithVariable:(id)arg1 ;
-(TSCH3DShaderType)shaderType;
-(char)isSpecial;
-(TSCH3DShaderVariableScopes)declaredScope;
-(char)hasBody:(TSCH3DShaderType)arg1 ;
-(void)addShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 ;
-(void)addLinkage:(TSCH3DShaderType)arg1 ;
-(void)addDeclaredShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 ;
-(char)notLinked;
-(char)hasFragment;
-(char)canHaveFragment;
-(char)isVarying:(TSCH3DShaderType)arg1 ;
-(char)hasVertex;
-(char)scopedInAll;
-(char)isFragmentLinkable;
-(char)isVertexLinkable;
-(TSCH3DShaderType)linked;
-(char)updateLinkage:(TSCH3DShaderType)arg1 ;
-(void)addBodyScope:(TSCH3DShaderType)arg1 ;
-(id)nameForShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 ;
-(id)variableDeclarationInShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 isMetal:(char)arg3 ;
-(void)setShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 ;
-(id)globalNameForShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 ;
-(id)variableQualifiersWithStorageQualifier:(id)arg1 isMetal:(char)arg2 ;
-(char)declaredInShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 ;
-(char)isVertexVarying;
-(char)scopeHasFragment;
-(char)isVertex;
-(char)isGlobalScope:(TSCH3DShaderVariableScopeType)arg1 ;
-(unsigned long long)hasGlobal;
-(char)hasShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 ;
-(id)resolveGlobalNameForShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 defaultTo:(id)arg3 ;
-(char)hasVarying;
-(char)updateShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 ;
-(void)removeShader:(TSCH3DShaderType)arg1 scope:(TSCH3DShaderVariableScopeType)arg2 ;
-(void)removeLinkage:(TSCH3DShaderType)arg1 ;
-(char)hasLinkage:(TSCH3DShaderType)arg1 ;
@end
