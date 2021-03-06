/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, NSString, NSArray, NSMutableArray, IMHandle;

@interface IMMe : NSObject {

	CNContact* _cnContact;
	NSString* _cnNickname;
	NSString* _cnFirstName;
	NSString* _cnFullName;
	NSString* _cnLastName;
	NSArray* _cnEmails;
	NSMutableArray* _cnIMHandles;
	NSMutableArray* _loginIMHandles;

}

@property (nonatomic,readonly) NSString * guid; 
@property (nonatomic,readonly) CNContact * cnContact;                //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,readonly) NSString * nickname; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSArray * emails; 
@property (nonatomic,readonly) IMHandle * bestIMHandle; 
@property (nonatomic,readonly) NSArray * imHandles; 
+(id)me;
+(id)fallbackUserName;
+(id)firstNameFromFallbackUserName;
+(id)lastNameFromFallbackUserName;
+(id)imHandleForService:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)nickname;
-(NSString *)firstName;
-(NSString *)fullName;
-(NSString *)email;
-(NSString *)lastName;
-(NSString *)guid;
-(NSArray *)emails;
-(CNContact *)cnContact;
-(char)removeLoginIMHandle:(id)arg1 ;
-(char)addLoginIMHandle:(id)arg1 ;
-(char)removeIMHandle:(id)arg1 ;
-(char)addIMHandle:(id)arg1 ;
-(void)myPictureChanged;
-(void)rebuildIMHandles;
-(void)setCNContact:(id)arg1 ;
-(NSArray *)imHandles;
-(id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2 ;
-(void)resetABPerson;
-(id)loginIMHandles;
-(char)isIMHandleLoginIMHandle:(id)arg1 ;
-(IMHandle *)bestIMHandle;
@end

