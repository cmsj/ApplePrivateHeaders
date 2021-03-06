/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol NSAnimatablePropertyContainer;
@class NSObject;

@interface _NSObjectAnimator : NSProxy {

	NSObject*<NSAnimatablePropertyContainer> _target;

}
+(Class)_animatorClassForTargetClass:(Class)arg1 ;
-(void)dealloc;
-(Class)class;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isMemberOfClass:(Class)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(Class)superclass;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(id)animator;
@end

