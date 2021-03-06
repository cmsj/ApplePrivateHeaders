/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKIDSMessageBroadcastHandling.h>

@protocol CRKCertificateExchangeBroadcastHandlerDelegate, CRKIDSPrimitives, CRKAppleIDProviding;
@interface CRKCertificateExchangeBroadcastHandler : NSObject <CRKIDSMessageBroadcastHandling> {

	id<CRKCertificateExchangeBroadcastHandlerDelegate> _delegate;
	id<CRKIDSPrimitives> _IDSPrimitives;
	id<CRKAppleIDProviding> _appleIDProvider;

}

@property (nonatomic,readonly) id<CRKIDSPrimitives> IDSPrimitives;                                            //@synthesize IDSPrimitives=_IDSPrimitives - In the implementation block
@property (nonatomic,readonly) id<CRKAppleIDProviding> appleIDProvider;                                       //@synthesize appleIDProvider=_appleIDProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCertificateExchangeBroadcastHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CRKCertificateExchangeBroadcastHandlerDelegate>)delegate;
-(void)setDelegate:(id<CRKCertificateExchangeBroadcastHandlerDelegate>)arg1 ;
-(void)processMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 ;
-(id<CRKAppleIDProviding>)appleIDProvider;
-(id<CRKIDSPrimitives>)IDSPrimitives;
-(id)initWithIDSPrimitives:(id)arg1 appleIDProvider:(id)arg2 ;
@end

