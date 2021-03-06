/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSDescriptionFormatting
@required
-(id)appendObject:(id)arg1 withName:(id)arg2;
-(id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(char)arg3;
-(void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(char)arg3;
-(id)appendBool:(char)arg1 withName:(id)arg2;
-(id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(char)arg3;
-(id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
-(id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
-(id)appendCString:(const char*)arg1 withName:(id)arg2;
-(void)appendProem:(id)arg1 block:(/*^block*/id)arg2;
-(void)appendString:(id)arg1 withName:(id)arg2;
-(id)appendBool:(char)arg1 withName:(id)arg2 ifEqualTo:(char)arg3;
-(id)appendFlag:(long long)arg1 withName:(id)arg2;
-(id)appendInteger:(long long)arg1 withName:(id)arg2;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
-(id)appendInt:(int)arg1 withName:(id)arg2;
-(id)appendUnsignedInt:(unsigned)arg1 withName:(id)arg2;
-(id)appendInt64:(long long)arg1 withName:(id)arg2;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
-(id)appendFloat:(double)arg1 withName:(id)arg2;
-(id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(char)arg3;
-(id)appendPointer:(void*)arg1 withName:(id)arg2;
-(id)appendPoint:(CGPoint)arg1 withName:(id)arg2;
-(id)appendSize:(CGSize)arg1 withName:(id)arg2;
-(id)appendRect:(CGRect)arg1 withName:(id)arg2;
-(id)appendSelector:(SEL)arg1 withName:(id)arg2;
-(id)appendQueue:(id)arg1 withName:(id)arg2;
-(id)appendClass:(Class)arg1 withName:(id)arg2;
-(id)appendVersionedPID:(long long)arg1 withName:(id)arg2;
-(void)appendCustomFormatWithName:(id)arg1 block:(/*^block*/id)arg2;

@end

