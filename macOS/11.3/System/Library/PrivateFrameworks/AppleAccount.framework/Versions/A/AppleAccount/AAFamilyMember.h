/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface AAFamilyMember : NSObject {

	char _isMe;
	char _isChild;
	char _isSharingPurchases;
	char _isOrganizer;
	char _areParentalControlsEnabled;
	char _isAskToBuyEnabled;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _appleID;
	NSNumber* _personID;
	NSString* _personIDHash;
	NSString* _altDSID;
	NSString* _title;
	NSDate* _joinDate;
	NSString* _iTunesNotLinkedMessage;
	NSString* _linkediTunesAppleID;
	NSNumber* _linkediTunesDSID;

}

@property (nonatomic,copy) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * appleID;                             //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSNumber * personID;                            //@synthesize personID=_personID - In the implementation block
@property (nonatomic,copy) NSString * personIDHash;                        //@synthesize personIDHash=_personIDHash - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                             //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * joinDate;                              //@synthesize joinDate=_joinDate - In the implementation block
@property (assign,nonatomic) char isMe;                                    //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) char isChild;                                 //@synthesize isChild=_isChild - In the implementation block
@property (assign,nonatomic) char isSharingPurchases;                      //@synthesize isSharingPurchases=_isSharingPurchases - In the implementation block
@property (assign,nonatomic) char isOrganizer;                             //@synthesize isOrganizer=_isOrganizer - In the implementation block
@property (nonatomic,copy) NSString * iTunesNotLinkedMessage;              //@synthesize iTunesNotLinkedMessage=_iTunesNotLinkedMessage - In the implementation block
@property (nonatomic,copy) NSString * linkediTunesAppleID;                 //@synthesize linkediTunesAppleID=_linkediTunesAppleID - In the implementation block
@property (nonatomic,copy) NSNumber * linkediTunesDSID;                    //@synthesize linkediTunesDSID=_linkediTunesDSID - In the implementation block
@property (assign,nonatomic) char areParentalControlsEnabled;              //@synthesize areParentalControlsEnabled=_areParentalControlsEnabled - In the implementation block
@property (assign,nonatomic) char isAskToBuyEnabled;                       //@synthesize isAskToBuyEnabled=_isAskToBuyEnabled - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(char)isMe;
-(void)setIsMe:(char)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(char)isOrganizer;
-(NSString *)iTunesNotLinkedMessage;
-(char)isChild;
-(NSString *)personIDHash;
-(void)setPersonIDHash:(NSString *)arg1 ;
-(NSDate *)joinDate;
-(void)setJoinDate:(NSDate *)arg1 ;
-(void)setIsChild:(char)arg1 ;
-(char)isSharingPurchases;
-(void)setIsSharingPurchases:(char)arg1 ;
-(void)setIsOrganizer:(char)arg1 ;
-(void)setITunesNotLinkedMessage:(NSString *)arg1 ;
-(NSString *)linkediTunesAppleID;
-(void)setLinkediTunesAppleID:(NSString *)arg1 ;
-(NSNumber *)linkediTunesDSID;
-(void)setLinkediTunesDSID:(NSNumber *)arg1 ;
-(char)areParentalControlsEnabled;
-(void)setAreParentalControlsEnabled:(char)arg1 ;
-(char)isAskToBuyEnabled;
-(void)setIsAskToBuyEnabled:(char)arg1 ;
@end

