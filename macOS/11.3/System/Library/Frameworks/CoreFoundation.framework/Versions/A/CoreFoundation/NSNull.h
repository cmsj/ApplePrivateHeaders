/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSNull : NSObject <NSCopying, NSSecureCoding>
+(id)scriptingMissingValueWithDescriptor:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)null;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)_scriptingCount;
-(unsigned long long)_scriptingCountOfValueForKey:(id)arg1 ;
-(void)_scriptingRemoveValueForSpecifier:(id)arg1 ;
-(id)_scriptingNullDescriptor;
-(char)_scriptingMightHandleCommand:(id)arg1 ;
-(char)_scriptingCanHandleCommand:(id)arg1 ;
-(id)_scriptingSetValue:(id)arg1 forSpecifier:(id)arg2 ;
-(char)_scriptingExists;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
@end

