/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSStringPredicateOperator.h>

@interface NSMatchingPredicateOperator : NSStringPredicateOperator {

	int _contextLock;
	SCD_Struct_NS51* _regexContext;

}
-(void)dealloc;
-(SEL)selector;
-(char)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 ;
-(id)symbol;
-(char)_shouldEscapeForLike;
-(void)_clearContext;
@end
