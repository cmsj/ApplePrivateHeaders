/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/AddressBookCore-Structs.h>
#import <Foundation/NSPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate;

@interface ABCNPredicate : NSPredicate <NSCopying> {

	NSPredicate* _abcn_predicate;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(char)evaluateWithObject:(id)arg1 ;
-(id)predicateFormat;
-(char)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 ;
-(id)cn_predicate;
-(id)cn_coreDataPredicate;
@end
