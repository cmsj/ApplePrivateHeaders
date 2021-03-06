/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ABPerson;

@interface iCloudAddFamilyInvitee : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSString* _nickname;
	ABPerson* _abPerson;
	NSString* _displayString;

}

@property (copy) NSString * firstName;                  //@synthesize firstName=_firstName - In the implementation block
@property (copy) NSString * lastName;                   //@synthesize lastName=_lastName - In the implementation block
@property (copy) NSString * emailAddress;               //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSString * nickname;                   //@synthesize nickname=_nickname - In the implementation block
@property (copy) NSString * displayString;              //@synthesize displayString=_displayString - In the implementation block
@property (assign) ABPerson * abPerson;                 //@synthesize abPerson=_abPerson - In the implementation block
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)displayString;
-(NSString *)lastName;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setAbPerson:(ABPerson *)arg1 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 emailAddress:(id)arg4 abPerson:(id)arg5 displayString:(id)arg6 ;
-(ABPerson *)abPerson;
@end

