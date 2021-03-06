/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPKeychainCircleProxy.h>

@protocol CDPDCircleProxy;
@class KCPairingChannel, NSString;

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy> {

	KCPairingChannel* _pairingChannel;
	BOOL _complete;
	id<CDPDCircleProxy> _circleProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isComplete;
-(id)initiatingPayload:(id*)arg1 ;
-(id)processIncomingPayload:(id)arg1 error:(id*)arg2 ;
-(char)supportsInteractiveAuth;
-(char)requiresInitialSync;
-(id)initWithCircleProxy:(id)arg1 ;
@end

