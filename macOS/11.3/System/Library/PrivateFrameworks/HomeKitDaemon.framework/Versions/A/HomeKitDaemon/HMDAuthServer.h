/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HMDAuthServerDelegate;
@interface HMDAuthServer : HMFObject {

	id<HMDAuthServerDelegate> _delegate;

}

@property (__weak,readonly) id<HMDAuthServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HMDAuthServerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)sendPPIDInfoRequest:(id)arg1 model:(id)arg2 token:(id)arg3 authFeatures:(unsigned long long)arg4 uuid:(id)arg5 context:(id)arg6 ;
-(void)getPPIDInfo:(id)arg1 model:(id)arg2 cert:(id)arg3 context:(id)arg4 ;
-(void)sendActivationRequest:(id)arg1 uuid:(id)arg2 context:(id)arg3 ;
-(void)sendActivationConfirmation:(id)arg1 uuid:(id)arg2 context:(id)arg3 ;
@end

