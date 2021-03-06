/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/Versions/A/CoreServicesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServicesStore/CoreServicesStore-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSString, NSPredicate;

@interface _CSVisualizerPredicate : NSPredicate {

	NSString* _title;
	NSString* _searchString;
	unsigned long long _operator;
	NSPredicate* _numericPredicate;

}
+(char)operatorIsNumeric:(unsigned long long)arg1 ;
+(id)constantValueForExpression:(id)arg1 ;
+(id)translateNSPredicate:(id)arg1 error:(id*)arg2 ;
+(id)predicateWithFormatString:(id)arg1 error:(id*)arg2 ;
+(void)getRanges:(vector<_NSRange, std::__1::allocator<_NSRange>>*)arg1 matchingPredicate:(id)arg2 inDescription:(id)arg3 ;
-(id)description;
-(id)debugDescription;
-(char)evaluateWithObject:(id)arg1 ;
-(id)predicateFormat;
-(char)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)initWithExpression:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 operator:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithSearchString:(id)arg1 forTitle:(id)arg2 operator:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)evaluateNumerically:(id)arg1 ;
-(char)getRanges:(vector<_NSRange, std::__1::allocator<_NSRange>>*)arg1 inDescription:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 searchedInRange:(NSRange*)arg5 ;
@end

