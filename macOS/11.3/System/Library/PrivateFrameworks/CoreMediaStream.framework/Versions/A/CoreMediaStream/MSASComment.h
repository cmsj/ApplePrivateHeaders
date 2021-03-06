/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/Versions/A/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MSASComment : NSObject <NSSecureCoding> {

	char _isLike;
	char _isCaption;
	char _isBatchComment;
	char _isDeletable;
	char _isMine;
	int _ID;
	NSString* _GUID;
	NSDate* _timestamp;
	NSDate* _clientTimestamp;
	NSString* _personID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _email;
	NSString* _content;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (assign,nonatomic) int ID;                                  //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * clientTimestamp;                //@synthesize clientTimestamp=_clientTimestamp - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) char isDeletable;                        //@synthesize isDeletable=_isDeletable - In the implementation block
@property (assign,nonatomic) char isMine;                             //@synthesize isMine=_isMine - In the implementation block
@property (assign,nonatomic) char isLike;                             //@synthesize isLike=_isLike - In the implementation block
@property (assign,nonatomic) char isCaption;                          //@synthesize isCaption=_isCaption - In the implementation block
@property (assign,nonatomic) char isBatchComment;                     //@synthesize isBatchComment=_isBatchComment - In the implementation block
@property (nonatomic,retain) NSString * content;                      //@synthesize content=_content - In the implementation block
+(char)supportsSecureCoding;
+(id)comment;
+(id)MSASPCommentFromProtocolDictionary:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isDeletable;
-(NSDate *)timestamp;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)content;
-(NSString *)firstName;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)fullName;
-(NSString *)email;
-(NSString *)lastName;
-(NSString *)GUID;
-(int)ID;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)setID:(int)arg1 ;
-(char)isMine;
-(char)isLike;
-(char)isCaption;
-(char)isBatchComment;
-(void)setIsCaption:(char)arg1 ;
-(void)setIsBatchComment:(char)arg1 ;
-(void)setIsDeletable:(char)arg1 ;
-(void)setIsMine:(char)arg1 ;
-(void)setIsLike:(char)arg1 ;
-(NSDate *)clientTimestamp;
-(void)setClientTimestamp:(NSDate *)arg1 ;
@end

