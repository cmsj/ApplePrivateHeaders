/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBMessage;

@interface TRIPBBoolArray : NSObject <NSCopying> {

	TRIPBMessage* _autocreator;
	char* _values;
	unsigned long long _count;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)array;
+(id)arrayWithCapacity:(unsigned long long)arg1 ;
+(id)arrayWithValue:(char)arg1 ;
+(id)arrayWithValueArray:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAll;
-(void)addValue:(char)arg1 ;
-(char)valueAtIndex:(unsigned long long)arg1 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(char)arg2 ;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
-(void)addValuesFromArray:(id)arg1 ;
-(id)initWithValues:(const char*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithValueArray:(id)arg1 ;
-(void)internalResizeToCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addValues:(const char*)arg1 count:(unsigned long long)arg2 ;
-(void)insertValue:(char)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 ;
-(void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2 ;
@end

