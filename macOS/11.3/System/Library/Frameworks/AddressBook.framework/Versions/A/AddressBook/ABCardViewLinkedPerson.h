/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCardViewLinkedPerson : NSObject <NSCopying> {

	NSString* _fullName;
	NSString* _accountName;
	char _unified;
	NSString* _identifier;
	char _showName;
	char _isPreferredForName;

}

@property (nonatomic,copy,readonly) NSString * fullName;                 //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (readonly) char unified;                                       //@synthesize unified=_unified - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) char showName;                                      //@synthesize showName=_showName - In the implementation block
@property (readonly) char isPreferredForName;                            //@synthesize isPreferredForName=_isPreferredForName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)accountName;
-(char)showName;
-(NSString *)fullName;
-(char)isPreferredForName;
-(char)unified;
-(id)initWithFullName:(id)arg1 accountName:(id)arg2 unified:(char)arg3 identifier:(id)arg4 showName:(char)arg5 isPreferredForName:(char)arg6 ;
@end

