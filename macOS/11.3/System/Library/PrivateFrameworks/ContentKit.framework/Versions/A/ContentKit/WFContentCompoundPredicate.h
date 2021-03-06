/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentPredicate.h>
#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class NSArray, NSSet;

@interface WFContentCompoundPredicate : WFContentPredicate <WFContentPropertyContainer> {

	unsigned long long _compoundPredicateType;
	NSArray* _subpredicates;

}

@property (readonly) unsigned long long compoundPredicateType;              //@synthesize compoundPredicateType=_compoundPredicateType - In the implementation block
@property (copy,readonly) NSArray * subpredicates;                          //@synthesize subpredicates=_subpredicates - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
-(id)description;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(NSArray *)subpredicates;
-(unsigned long long)compoundPredicateType;
-(NSSet *)containedProperties;
-(void)evaluateWithObject:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

