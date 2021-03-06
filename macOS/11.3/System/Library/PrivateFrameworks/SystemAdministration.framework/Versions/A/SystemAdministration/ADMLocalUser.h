/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADMSystem, ODRecord, NSString, NSData, NSUUID;

@interface ADMLocalUser : NSObject {

	ADMSystem* _system;
	ODRecord* _record;

}

@property (retain,readonly) ODRecord * record; 
@property (copy,readonly) NSString * redactedDescription; 
@property (retain,readonly) NSData * dataForClonedUser; 
@property (retain,readonly) ODRecord * record;                         //@synthesize record=_record - In the implementation block
@property (retain,readonly) ADMSystem * system;                        //@synthesize system=_system - In the implementation block
@property (readonly) char isAdmin; 
@property (readonly) char isOwner; 
@property (readonly) char isAllowedSecureToken; 
@property (readonly) char hasSecureToken; 
@property (retain,readonly) NSUUID * uuid; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * fullname; 
@property (retain,readonly) NSData * picture; 
@property (copy,readonly) NSString * passwordHint; 
+(id)localUserWithRecord:(id)arg1 onSystem:(id)arg2 ;
-(char)hasSecureToken;
-(id)initWithRecord:(id)arg1 onSystem:(id)arg2 ;
-(char)isAllowedSecureToken;
-(NSData *)dataForClonedUser;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)redactedDescription;
-(NSUUID *)uuid;
-(ADMSystem *)system;
-(ODRecord *)record;
-(char)isOwner;
-(NSString *)fullname;
-(char)isAdmin;
-(NSData *)picture;
-(NSString *)passwordHint;
@end

