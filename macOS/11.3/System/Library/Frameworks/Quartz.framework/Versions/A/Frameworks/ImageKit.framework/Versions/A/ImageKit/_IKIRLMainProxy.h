/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSArray;

@interface _IKIRLMainProxy : NSProxy {

	id _originalObject;
	char _wait;
	NSArray* _modes;

}
-(id)initWithOriginalObject:(id)arg1 modes:(id)arg2 wait:(char)arg3 ;
-(void)cancelPerforms;
-(void)dealloc;
-(char)conformsToProtocol:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)originalObject;
@end

