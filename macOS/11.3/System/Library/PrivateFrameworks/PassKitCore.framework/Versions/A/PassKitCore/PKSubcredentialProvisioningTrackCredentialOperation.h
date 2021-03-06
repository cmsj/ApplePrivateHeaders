/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKSubcredentialProvisioningPairingSessionOperation.h>

@class PKAppletSubcredential, NSData;

@interface PKSubcredentialProvisioningTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {

	BOOL _performingOperation;
	BOOL _hasTrackedCredential;
	BOOL _firstTransactionCompleted;
	PKAppletSubcredential* _subcredential;
	NSData* _trackingAttestation;
	/*^block*/id _completionHandler;

}
-(void)performOperation;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)trackCredentialWithAttestation;
@end

