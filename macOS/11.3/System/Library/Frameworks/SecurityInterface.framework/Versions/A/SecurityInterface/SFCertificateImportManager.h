/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityInterface/SecurityInterface-Structs.h>
#import <SecurityInterface/SFCertificateTrustPanel.h>

@interface SFCertificateImportManager : SFCertificateTrustPanel {

	id _reserved_SFCertificateImportManager;

}
+(id)sharedCertificateImportManager;
-(void*)_clientContextInfo;
-(void)_bringUpTrustSheetForNextCertificate;
-(void)_errSheetDidDismiss:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(int)_addCert:(SecCertificateRef)arg1 certData:(id)arg2 commonName:(id)arg3 ;
-(void)_addCertAndEndSheet:(SecCertificateRef)arg1 certData:(id)arg2 commonName:(id)arg3 ;
-(void)_setRef:(id*)arg1 toObj:(id)arg2 ;
-(id)initWithCertificates:(id)arg1 toKeychain:(SecKeychainRef)arg2 parentWindow:(id)arg3 policy:(SecPolicyRef)arg4 ;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)setDelegate:(id)arg1 ;
-(void)setParentWindow:(id)arg1 ;
-(void)setPolicy:(SecPolicyRef)arg1 ;
-(void)setCertificates:(id)arg1 ;
-(void)setContextInfo:(void*)arg1 ;
-(void)setDidEndSelector:(SEL)arg1 ;
-(void)import;
-(id)_clientDelegate;
-(void)_sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)setDestinationKeychain:(SecKeychainRef)arg1 ;
-(void)importCertificates:(id)arg1 toKeychain:(SecKeychainRef)arg2 parentWindow:(id)arg3 policy:(SecPolicyRef)arg4 modalDelegate:(id)arg5 didEndSelector:(SEL)arg6 contextInfo:(void*)arg7 ;
-(SEL)_clientDidEndSelector;
@end

