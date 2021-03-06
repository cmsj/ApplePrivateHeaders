/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@interface QCSCN_CARendererRegistry : NSObject {

	CFDictionaryRef _registry;

}
+(id)sharedRegistry;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)CARendererForCGLContextObj:(void*)arg1 layer:(id)arg2 ;
-(void)rendererDidChange:(id)arg1 ;
-(void)removeCARenderersForCGLContextObj:(void*)arg1 ;
-(void)removeCARenderersForLayer:(id)arg1 ;
@end

