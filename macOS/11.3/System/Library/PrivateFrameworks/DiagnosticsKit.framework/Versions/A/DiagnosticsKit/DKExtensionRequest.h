/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/Versions/A/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKExtensionHostAdapterDelegate.h>
#import <libobjc.A.dylib/DKRequest.h>

@protocol DKRequestDelegate, NSCopying, DKExtensionAttributes, DKExtensionHostAdapter, OS_dispatch_semaphore;
@class NSObject, NSString;

@interface DKExtensionRequest : NSObject <DKExtensionHostAdapterDelegate, DKRequest> {

	char _canceled;
	char _completed;
	char _interrupted;
	id<DKRequestDelegate> _delegate;
	id _hostServicesDelegate;
	id<NSCopying> _requestIdentifier;
	id<NSCopying> _extensionRequestIdentifier;
	id _context;
	id<DKExtensionAttributes> _extensionAttributes;
	id<DKExtensionHostAdapter> _hostAdapter;
	id _payload;
	NSObject*<OS_dispatch_semaphore> _connectSemaphore;

}

@property (nonatomic,retain) id<DKExtensionAttributes> extensionAttributes;                  //@synthesize extensionAttributes=_extensionAttributes - In the implementation block
@property (nonatomic,retain) id<NSCopying> extensionRequestIdentifier;                       //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (assign,getter=isCanceled,nonatomic) char canceled;                                //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,retain) id<DKExtensionHostAdapter> hostAdapter;                         //@synthesize hostAdapter=_hostAdapter - In the implementation block
@property (assign,getter=isCompleted,nonatomic) char completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) id payload;                                                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> connectSemaphore;              //@synthesize connectSemaphore=_connectSemaphore - In the implementation block
@property (assign,getter=isInterrupted,nonatomic) char interrupted;                          //@synthesize interrupted=_interrupted - In the implementation block
@property (assign,nonatomic,__weak) id hostServicesDelegate;                                 //@synthesize hostServicesDelegate=_hostServicesDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DKRequestDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<NSCopying> requestIdentifier;                              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(id)requestWithExtensionAttributes:(id)arg1 ;
-(NSString *)description;
-(id<DKRequestDelegate>)delegate;
-(void)setDelegate:(id<DKRequestDelegate>)arg1 ;
-(void)cancel;
-(void)interrupt;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)complete;
-(void)setPayload:(id)arg1 ;
-(id)payload;
-(char)isInterrupted;
-(void)cancelWithError:(id)arg1 ;
-(void)setCompleted:(char)arg1 ;
-(id<NSCopying>)requestIdentifier;
-(char)isCanceled;
-(char)isCompleted;
-(void)setInterrupted:(char)arg1 ;
-(void)setCanceled:(char)arg1 ;
-(id<DKExtensionAttributes>)extensionAttributes;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(id)connectWithError:(id*)arg1 ;
-(void)completeWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelExtensionRequest;
-(id)hostServicesDelegate;
-(void)setHostServicesDelegate:(id)arg1 ;
-(id)initWithExtensionAttributes:(id)arg1 ;
-(void)beginWithPayload:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)connectSemaphore;
-(void)_finishWithResult:(id)arg1 error:(id)arg2 ;
-(id<DKExtensionHostAdapter>)hostAdapter;
-(void)_cancelTimedOutWithInfo:(id)arg1 ;
-(char)_extensionContext:(id)arg1 hasEntitlement:(id)arg2 ;
-(void)setHostAdapter:(id<DKExtensionHostAdapter>)arg1 ;
-(void)_dismissViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)setExtensionAttributes:(id<DKExtensionAttributes>)arg1 ;
-(void)setConnectSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end
