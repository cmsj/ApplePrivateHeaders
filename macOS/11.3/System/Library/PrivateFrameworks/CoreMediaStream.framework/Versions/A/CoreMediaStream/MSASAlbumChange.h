/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/Versions/A/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MSASInvitation;

@interface MSASAlbumChange : NSObject {

	char _wasDeleted;
	NSString* _GUID;
	NSString* _ownerEmail;
	NSString* _ownerPersonID;
	NSString* _ownerFullName;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	NSString* _URLString;
	MSASInvitation* _invitation;
	NSString* _name;

}

@property (nonatomic,copy) NSString * ownerEmail;                      //@synthesize ownerEmail=_ownerEmail - In the implementation block
@property (nonatomic,copy) NSString * ownerPersonID;                   //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,copy) NSString * ownerFullName;                   //@synthesize ownerFullName=_ownerFullName - In the implementation block
@property (nonatomic,copy) NSString * ownerFirstName;                  //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,copy) NSString * ownerLastName;                   //@synthesize ownerLastName=_ownerLastName - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;               //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * URLString;                     //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char wasDeleted;                          //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (nonatomic,retain) MSASInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)GUID;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)URLString;
-(NSString *)ownerPersonID;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(void)setInvitation:(MSASInvitation *)arg1 ;
-(MSASInvitation *)invitation;
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(NSString *)ownerFullName;
-(NSString *)ownerEmail;
-(void)setURLString:(NSString *)arg1 ;
-(char)wasDeleted;
-(void)setWasDeleted:(char)arg1 ;
-(void)setOwnerEmail:(NSString *)arg1 ;
-(void)setOwnerFullName:(NSString *)arg1 ;
-(void)setOwnerFirstName:(NSString *)arg1 ;
-(void)setOwnerLastName:(NSString *)arg1 ;
@end
