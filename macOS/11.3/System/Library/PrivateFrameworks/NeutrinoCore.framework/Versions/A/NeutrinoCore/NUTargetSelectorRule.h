/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURule.h>

@interface NUTargetSelectorRule : NURule {

	/*function pointer*/void* _predicate;
	/*function pointer*/void* _action;
	id _target;
	SEL _predicateSelector;
	SEL _actionSelector;

}

@property (nonatomic,__weak,readonly) id target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL predicateSelector;              //@synthesize predicateSelector=_predicateSelector - In the implementation block
@property (nonatomic,readonly) SEL actionSelector;                 //@synthesize actionSelector=_actionSelector - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)target;
-(char)evaluatePredicateWithSystem:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(id)initWithTarget:(id)arg1 predicate:(SEL)arg2 action:(SEL)arg3 ;
-(char)_defaultPredicate:(id)arg1 ;
-(void)_defaultAction:(id)arg1 ;
-(SEL)predicateSelector;
-(SEL)actionSelector;
@end

