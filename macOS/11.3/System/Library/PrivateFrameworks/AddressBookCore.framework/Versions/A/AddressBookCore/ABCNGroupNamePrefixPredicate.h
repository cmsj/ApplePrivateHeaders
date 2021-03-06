/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABCNPredicate.h>

@class NSString;

@interface ABCNGroupNamePrefixPredicate : ABCNPredicate {

	NSString* _prefix;

}

@property (nonatomic,copy,readonly) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
-(void)dealloc;
-(NSString *)prefix;
-(id)initWithPrefix:(id)arg1 ;
-(id)cn_coreDataPredicate;
@end

