/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/_NSModelObservingTracker.h>

@class NSCountedSet;

@interface _NSBalancedModelObservingTracker : _NSModelObservingTracker {

	NSCountedSet* _modelAndProxyKeysSet;

}
-(id)initWithModelObserver:(id)arg1 availableModelAndProxyKeys:(id)arg2 ;
-(void)_dealloc;
-(id)modelAndProxyKeysObserved;
-(void)addObservedKey:(id)arg1 ;
-(void)removeObservedKey:(id)arg1 ;
@end

