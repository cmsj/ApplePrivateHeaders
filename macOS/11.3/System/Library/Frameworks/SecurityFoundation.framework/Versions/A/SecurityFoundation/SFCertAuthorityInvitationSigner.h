/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@interface SFCertAuthorityInvitationSigner : NSObject {

	SecIdentityRef _signingIdentity;

}
-(int)verifyInvitation:(id)arg1 invitationDictionary:(id*)arg2 trustRefOnErr:(_SecTrust*)arg3 signerIdentity:(_SecIdentity*)arg4 ;
-(int)verifyInvitationFile:(id)arg1 invitationDictionary:(id*)arg2 trustRefOnErr:(_SecTrust*)arg3 signerIdentity:(_SecIdentity*)arg4 ;
-(void)_setSigningIdentity:(SecIdentityRef)arg1 ;
-(int)signInvitationFile:(id)arg1 outPath:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(id)_copyAvailableSigningIdentities;
@end

