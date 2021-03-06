/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ABAccountRepository, NSString;

@interface ABSummaryOperation : NSOperation {

	ABAccountRepository* _accountRepository;
	NSString* _accountIdentifier;

}
-(void)dealloc;
-(void)main;
-(id)initWithAccountRepository:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)makeAccount;
-(id)makeAddressBookForAccount:(id)arg1 ;
-(id)makeSummaryOfAddressBook:(id)arg1 ;
-(void)exportSummary:(id)arg1 accountName:(id)arg2 ;
-(id)outputURLWithAccountName:(id)arg1 ;
@end

