/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Catalyst/Catalyst-Structs.h>
@class CATRemoteConnection;

@interface CATRemoteConnectionTrustDecision : NSObject {

	CATRemoteConnection* mConnection;
	AB mHasResponded;
	id _trust;

}

@property (readonly) id trust;              //@synthesize trust=_trust - In the implementation block
-(void)dealloc;
-(id)trust;
-(id)initWithConnection:(id)arg1 trust:(SecTrustRef)arg2 ;
-(void)respondWithDecisionToAllowUntrustedConnection:(char)arg1 ;
@end
