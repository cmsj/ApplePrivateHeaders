/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, CKUserIdentityLookupInfo;

@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding> {

	char _shouldGrantWriteAccess;
	NSUUID* _participantClientIdentifier;
	CKUserIdentityLookupInfo* _lookupInfo;

}

@property (readonly) CKUserIdentityLookupInfo * lookupInfo;                  //@synthesize lookupInfo=_lookupInfo - In the implementation block
@property (copy,readonly) NSUUID * participantClientIdentifier;              //@synthesize participantClientIdentifier=_participantClientIdentifier - In the implementation block
@property (assign) char shouldGrantWriteAccess;                              //@synthesize shouldGrantWriteAccess=_shouldGrantWriteAccess - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKUserIdentityLookupInfo *)lookupInfo;
-(id)attributeDescriptions;
-(id)initWithParticipantClientIdentifier:(id)arg1 lookupInfo:(id)arg2 ;
-(NSUUID *)participantClientIdentifier;
-(char)shouldGrantWriteAccess;
-(void)setShouldGrantWriteAccess:(char)arg1 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 emailAddress:(id)arg2 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 phoneNumber:(id)arg2 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 cloudShareID:(id)arg2 ;
@end

