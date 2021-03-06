/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NSCGSDisplayConfiguration : NSObject {

	unsigned long long _reconfigureSeed;
	unsigned long long _acceleratorSeed;
	unsigned _changeSeed;
	double _flipOffset;
	NSArray* _uniqueDisplays;

}

@property (readonly) double flipOffset;                          //@synthesize flipOffset=_flipOffset - In the implementation block
@property (readonly) unsigned changeSeed;                        //@synthesize changeSeed=_changeSeed - In the implementation block
@property (copy,readonly) NSArray * uniqueDisplays;              //@synthesize uniqueDisplays=_uniqueDisplays - In the implementation block
+(id)currentConfiguration;
+(void)addChangeObserver:(/*^block*/id)arg1 ;
+(void)updateAndNotifyIfNeeded;
+(char)displaysWillChange;
-(void)dealloc;
-(id)description;
-(double)flipOffset;
-(NSArray *)uniqueDisplays;
-(id)initWithUniqueDisplays:(id)arg1 changeSeed:(unsigned)arg2 flipOffset:(double)arg3 reconfigureSeed:(unsigned long long)arg4 acceleratorSeed:(unsigned long long)arg5 ;
-(unsigned)changeSeed;
-(char)isEqualToDisplayConfiguration:(id)arg1 ;
-(char)_validateChanges:(unsigned long long)arg1 fromDisplayConfiguration:(id)arg2 ;
@end

