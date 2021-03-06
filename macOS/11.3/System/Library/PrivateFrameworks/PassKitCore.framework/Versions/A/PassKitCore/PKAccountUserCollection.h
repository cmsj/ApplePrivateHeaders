/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSSet, PKAccountUser;

@interface PKAccountUserCollection : NSObject <NSSecureCoding> {

	NSDictionary* _accountUsersByAltDSID;
	char _coOwner;
	NSSet* _accountUsers;
	PKAccountUser* _currentAccountUser;

}

@property (nonatomic,readonly) NSSet * accountUsers;                            //@synthesize accountUsers=_accountUsers - In the implementation block
@property (nonatomic,readonly) PKAccountUser * currentAccountUser;              //@synthesize currentAccountUser=_currentAccountUser - In the implementation block
@property (getter=isCoOwner,nonatomic,readonly) char coOwner;                   //@synthesize coOwner=_coOwner - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PK26*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isCoOwner;
-(void)_updateWithAccountUsers:(id)arg1 ;
-(char)_isEqualToAccountUserCollection:(id)arg1 ;
-(id)accountUserWithAltDSID:(id)arg1 ;
-(id)initWithAccountUsers:(id)arg1 ;
-(id)accountUserForTransaction:(id)arg1 ;
-(id)accountUsersExcludingCurrentAccountUser;
-(id)activeAccountUsersExcludingCurrentAccountUser;
-(id)activeAccountUsers;
-(NSSet *)accountUsers;
-(PKAccountUser *)currentAccountUser;
@end

