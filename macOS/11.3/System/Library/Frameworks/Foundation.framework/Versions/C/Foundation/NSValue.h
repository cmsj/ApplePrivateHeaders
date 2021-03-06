/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (readonly) const char* objCType; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)valueWithRange:(NSRange)arg1 ;
+(id)valueWithWeakObject:(id)arg1 ;
+(id)valueWithPoint:(CGPoint)arg1 ;
+(id)valueWithRect:(CGRect)arg1 ;
+(id)valueWithSize:(CGSize)arg1 ;
+(id)valueWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)value:(const void*)arg1 withObjCType:(const char*)arg2 ;
+(id)valueWithPointer:(const void*)arg1 ;
+(id)valueWithEdgeInsets:(NSEdgeInsets)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(const char*)objCType;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(char)isNSValue__;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(NSRange)rangeValue;
-(id)weakObjectValue;
-(CGPoint)pointValue;
-(CGRect)rectValue;
-(CGSize)sizeValue;
-(id)nonretainedObjectValue;
-(char)_matchType:(const char*)arg1 size:(unsigned long long)arg2 strict:(char)arg3 ;
-(char)isEqualToValue:(id)arg1 ;
-(char)_matchType:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void*)pointerValue;
-(NSEdgeInsets)edgeInsetsValue;
@end

