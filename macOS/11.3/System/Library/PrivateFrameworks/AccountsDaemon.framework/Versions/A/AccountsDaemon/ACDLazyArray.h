/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsDaemon/AccountsDaemon-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSArray;

@interface ACDLazyArray : NSArray {

	os_unfair_lock_s _initializationLock;
	/*^block*/id _initializationBlock;
	NSArray* _underlyingArray;

}
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInitializer:(/*^block*/id)arg1 ;
@end

