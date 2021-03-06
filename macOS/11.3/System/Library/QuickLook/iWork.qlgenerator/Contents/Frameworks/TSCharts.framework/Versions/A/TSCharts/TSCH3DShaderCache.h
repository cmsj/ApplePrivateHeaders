/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCH3DProtectResourceDelegate;
@class NSMutableArray;

@interface TSCH3DShaderCache : NSObject {

	id<TSCH3DProtectResourceDelegate> _protectResourceDelegate;
	NSMutableArray* _shaderCache;

}

@property (assign,nonatomic,__weak) id<TSCH3DProtectResourceDelegate> protectResourceDelegate;              //@synthesize protectResourceDelegate=_protectResourceDelegate - In the implementation block
-(void)dealloc;
-(id)description;
-(id)init;
-(void)flush;
-(id)shaderForShaderContext:(id)arg1 initializeProgramBlock:(/*^block*/id)arg2 ;
-(void)p_unprotectAllCacheItems;
-(void)p_ensureCacheLimit;
-(void)setProtectResourceDelegate:(id<TSCH3DProtectResourceDelegate>)arg1 ;
-(void)debug_verifyUniqueShadersInCache;
-(id<TSCH3DProtectResourceDelegate>)protectResourceDelegate;
@end

