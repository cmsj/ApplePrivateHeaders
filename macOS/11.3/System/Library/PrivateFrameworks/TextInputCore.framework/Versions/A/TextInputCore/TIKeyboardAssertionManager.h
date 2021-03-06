/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardAssertionManaging.h>

@protocol TIKeyboardAssertionManagerDelegate;
@class NSHashTable, NSString;

@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging> {

	char _hasAssertions;
	char _pendingUpdate;
	char _hasBackgroundActivityAssertions;
	id<TIKeyboardAssertionManagerDelegate> _delegate;
	NSHashTable* _assertions;
	long long _backgroundActivityAssertions;

}

@property (assign,nonatomic) char hasAssertions;                                           //@synthesize hasAssertions=_hasAssertions - In the implementation block
@property (assign,nonatomic) char pendingUpdate;                                           //@synthesize pendingUpdate=_pendingUpdate - In the implementation block
@property (nonatomic,readonly) NSHashTable * assertions;                                   //@synthesize assertions=_assertions - In the implementation block
@property (assign,nonatomic) char hasBackgroundActivityAssertions;                         //@synthesize hasBackgroundActivityAssertions=_hasBackgroundActivityAssertions - In the implementation block
@property (assign,nonatomic) long long backgroundActivityAssertions;                       //@synthesize backgroundActivityAssertions=_backgroundActivityAssertions - In the implementation block
@property (assign,nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedAssertionManager;
+(void)setSharedAssertionManager:(id)arg1 ;
-(id)init;
-(id<TIKeyboardAssertionManagerDelegate>)delegate;
-(void)setDelegate:(id<TIKeyboardAssertionManagerDelegate>)arg1 ;
-(NSHashTable *)assertions;
-(void)performUpdate;
-(char)hasAssertions;
-(void)releaseBackgroundActivityAssertion;
-(void)addAssertionForObject:(id)arg1 ;
-(void)removeAssertionForObject:(id)arg1 ;
-(void)retainBackgroundActivityAssertion;
-(char)hasBackgroundActivityAssertions;
-(void)scheduleUpdate;
-(void)performBackgroundActivityUpdate;
-(void)setHasAssertions:(char)arg1 ;
-(char)pendingUpdate;
-(void)setPendingUpdate:(char)arg1 ;
-(void)setHasBackgroundActivityAssertions:(char)arg1 ;
-(long long)backgroundActivityAssertions;
-(void)setBackgroundActivityAssertions:(long long)arg1 ;
@end

