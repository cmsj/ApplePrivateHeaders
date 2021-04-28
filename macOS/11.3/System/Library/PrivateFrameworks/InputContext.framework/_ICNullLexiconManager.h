/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ICLexiconManaging.h>

@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {

	NSMutableArray* _contactObservers;

}
-(id)init;
-(void)warmUp;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(void)unloadLexicons;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(void)hibernate;
-(id)loadLexicons:(/*^block*/id)arg1 ;
@end
