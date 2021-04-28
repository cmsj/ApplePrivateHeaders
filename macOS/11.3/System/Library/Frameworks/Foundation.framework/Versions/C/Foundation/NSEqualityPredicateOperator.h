/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSEqualityPredicateOperator : NSPredicateOperator {

	char _negate;
	unsigned long long _options;

}
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(id)predicateFormat;
-(char)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(void)_setOptions:(unsigned long long)arg1 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(char)arg3 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(char)arg3 options:(unsigned long long)arg4 ;
-(char)isNegation;
-(void)setNegation:(char)arg1 ;
@end
