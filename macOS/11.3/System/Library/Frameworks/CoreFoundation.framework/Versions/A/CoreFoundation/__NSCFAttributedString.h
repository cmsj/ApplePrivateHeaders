/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@interface __NSCFAttributedString : NSMutableAttributedString
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)string;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(Class)classForCoder;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(char)isEqualToAttributedString:(id)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)setAttributedString:(id)arg1 ;
@end

