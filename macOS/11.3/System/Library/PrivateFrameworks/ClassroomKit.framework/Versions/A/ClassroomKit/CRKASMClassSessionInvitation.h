/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKDictionaryCodable.h>

@class NSDictionary, NSUUID, NSString, DMFControlSessionIdentifier;

@interface CRKASMClassSessionInvitation : NSObject <CRKDictionaryCodable> {

	NSUUID* _invitationIdentifier;
	NSString* _instructorIdentifier;
	DMFControlSessionIdentifier* _sessionIdentifier;

}

@property (nonatomic,readonly) NSUUID * invitationIdentifier;                                //@synthesize invitationIdentifier=_invitationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * instructorIdentifier;                         //@synthesize instructorIdentifier=_instructorIdentifier - In the implementation block
@property (nonatomic,readonly) DMFControlSessionIdentifier * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
-(DMFControlSessionIdentifier *)sessionIdentifier;
-(NSUUID *)invitationIdentifier;
-(id)initWithInvitationIdentifier:(id)arg1 instructorIdentifier:(id)arg2 sessionIdentifier:(id)arg3 ;
-(NSString *)instructorIdentifier;
-(id)initWithSessionIdentifier:(id)arg1 instructorIdentifier:(id)arg2 ;
@end

