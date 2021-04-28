/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSString * string; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(void)_setAttributedDictionaryClass:(Class)arg1 ;
+(id)attributedStringFromMarkupString:(id)arg1 ;
+(id)_localizedAttributedStringWithFormat:(id)arg1 ;
+(id)_localizedAttributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2 ;
+(id)_attributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(_va_list_tag*)arg4 ;
+(id)_attributedStringAttributesFromKnownAttributeKeys:(id)arg1 ;
-(void)cs_writeToFileHandle:(_sFILE*)arg1 ;
-(id)cs_rangesMatchingPredicate:(id)arg1 ;
-(void)cs_writeToFileHandle:(_sFILE*)arg1 supportingANSIEscapeCodes:(char)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)string;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_createAttributedSubstringWithRange:(NSRange)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(char)isEqualToAttributedString:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 replacingCharactersInRanges:(const NSRange*)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4 ;
-(id)attributedStringByWeaklyAddingAttributes:(id)arg1 ;
-(void)enumerateAttributesInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)_attributesAreEqualToAttributesInAttributedString:(id)arg1 ;
-(char)scriptingIsEqualTo:(id)arg1 ;
-(char)scriptingIsLessThanOrEqualTo:(id)arg1 ;
-(char)scriptingIsLessThan:(id)arg1 ;
-(char)scriptingIsGreaterThanOrEqualTo:(id)arg1 ;
-(char)scriptingIsGreaterThan:(id)arg1 ;
-(char)scriptingBeginsWith:(id)arg1 ;
-(char)scriptingEndsWith:(id)arg1 ;
-(char)scriptingContains:(id)arg1 ;
-(id)_firstValueOfAttributeWithKey:(id)arg1 inRange:(NSRange)arg2 ;
-(id)_inflectedAttributedStringWithReplacements:(id)arg1 ;
-(id)_inflectionLanguageForRange:(NSRange)arg1 ;
-(id)_initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(_va_list_tag*)arg4 ;
-(id)_initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 ;
@end
