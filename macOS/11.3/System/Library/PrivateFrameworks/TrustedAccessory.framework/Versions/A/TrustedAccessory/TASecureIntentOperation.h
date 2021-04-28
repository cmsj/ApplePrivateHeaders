/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedAccessory.framework/Versions/A/TrustedAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedAccessory/TAOperation.h>

@protocol TASecureIntentOperationDelegate;
@class NSData;

@interface TASecureIntentOperation : TAOperation {

	char _stopOnIntent;
	NSData* _credentialSet;
	id<TASecureIntentOperationDelegate> _delegate;

}

@property (nonatomic,copy) NSData * credentialSet;                                             //@synthesize credentialSet=_credentialSet - In the implementation block
@property (assign,nonatomic) char stopOnIntent;                                                //@synthesize stopOnIntent=_stopOnIntent - In the implementation block
@property (assign,nonatomic,__weak) id<TASecureIntentOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TASecureIntentOperationDelegate>)delegate;
-(void)setDelegate:(id<TASecureIntentOperationDelegate>)arg1 ;
-(char)startWithError:(id*)arg1 ;
-(NSData *)credentialSet;
-(void)setCredentialSet:(NSData *)arg1 ;
-(void)notification:(unsigned)arg1 withData:(id)arg2 ;
-(char)stopOnIntent;
-(void)setStopOnIntent:(char)arg1 ;
@end
