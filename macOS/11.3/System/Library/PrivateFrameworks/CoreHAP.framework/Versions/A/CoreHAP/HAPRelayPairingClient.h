/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayPairingClientDelegate;
@class NSURL;

@interface HAPRelayPairingClient : HMFObject {

	id<HAPRelayPairingClientDelegate> _delegate;
	NSURL* _accessoryBagURL;

}

@property (__weak) id<HAPRelayPairingClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * accessoryBagURL;                     //@synthesize accessoryBagURL=_accessoryBagURL - In the implementation block
-(id<HAPRelayPairingClientDelegate>)delegate;
-(void)open;
-(void)close;
-(void)setDelegate:(id<HAPRelayPairingClientDelegate>)arg1 ;
-(NSURL *)accessoryBagURL;
-(void)requestControllerIdentifier;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2 ;
@end

