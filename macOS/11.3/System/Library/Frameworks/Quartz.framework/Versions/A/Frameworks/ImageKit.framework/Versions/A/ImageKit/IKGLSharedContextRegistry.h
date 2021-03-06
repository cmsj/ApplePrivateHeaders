/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKGLSharedContextRegistry : NSObject {

	CFDictionaryRef _sharedContexts;
	CFDictionaryRef _contexts;
	CFSetRef _dirtyContexts;
	SCD_Struct_IK34* _lastResult;
	void* _lastOwner;
	CGLContextObject* _lastContext;

}
+(id)sharedInstance;
-(void)removeOwner:(void*)arg1 ;
-(SCD_Struct_IK34*)glImageInfoInContext:(CGLContextObject*)arg1 owner:(void*)arg2 createIfNeeded:(char)arg3 ;
-(void)makeContextReady:(CGLContextObject*)arg1 ;
-(void)removeTexturesInContext:(CGLContextObject*)arg1 owner:(void*)arg2 ;
-(void)declareContext:(CGLContextObject*)arg1 isSharedWith:(CGLContextObject*)arg2 ;
-(void)_associate:(CGLContextObject*)arg1 with:(CGLContextObject*)arg2 ;
-(void)_moveTexturesFromContext:(CGLContextObject*)arg1 toContext:(CGLContextObject*)arg2 ;
-(void)_removeTexturesInContext:(CGLContextObject*)arg1 ;
-(void)removeSharedTexturesWithOwner:(void*)arg1 ;
-(void)_checkSharedDictionaryConsistency;
-(char)isContext:(CGLContextObject*)arg1 sharedWith:(CGLContextObject*)arg2 ;
-(void)didCreateTexture:(unsigned)arg1 inContext:(CGLContextObject*)arg2 ;
-(void)didDeleteTexture:(unsigned)arg1 inContext:(CGLContextObject*)arg2 ;
-(void)willUseTexture:(unsigned)arg1 inContext:(CGLContextObject*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeContext:(CGLContextObject*)arg1 ;
-(CFDictionaryRef)sharedContexts;
-(void)markDirty:(CGLContextObject*)arg1 ;
@end

