/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXHearingSupport.framework/Versions/A/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVCVirtualTTYDeviceDelegate.h>

@protocol OS_dispatch_queue, TTYCallDelegate;
@class NSObject, TTYConversation, TUCall, AVCVirtualTTYDevice, NSDictionary, NSString;

@interface TTYCall : NSObject <AVCVirtualTTYDeviceDelegate> {

	NSObject*<OS_dispatch_queue> _callQueue;
	id<TTYCallDelegate> _delegate;
	TTYConversation* _conversation;
	TUCall* _call;
	AVCVirtualTTYDevice* _ttyDevice;
	NSDictionary* _substitutions;

}

@property (nonatomic,retain) AVCVirtualTTYDevice * ttyDevice;              //@synthesize ttyDevice=_ttyDevice - In the implementation block
@property (nonatomic,retain) TTYConversation * conversation;               //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) TUCall * call;                                //@synthesize call=_call - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;                 //@synthesize substitutions=_substitutions - In the implementation block
@property (assign,nonatomic) id<TTYCallDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id<TTYCallDelegate>)delegate;
-(void)setDelegate:(id<TTYCallDelegate>)arg1 ;
-(void)start;
-(TTYConversation *)conversation;
-(void)stop;
-(void)setConversation:(TTYConversation *)arg1 ;
-(NSDictionary *)substitutions;
-(TUCall *)call;
-(id)initWithCall:(id)arg1 ;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(void)sendCharacter:(unsigned short)arg1 ;
-(void)device:(id)arg1 didStart:(char)arg2 error:(id)arg3 ;
-(void)deviceDidStop:(id)arg1 ;
-(void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2 ;
-(void)setCall:(TUCall *)arg1 ;
-(void)registerNotifications;
-(void)recreateTTYDevice:(id)arg1 ;
-(AVCVirtualTTYDevice *)ttyDevice;
-(void)setTtyDevice:(AVCVirtualTTYDevice *)arg1 ;
-(void)mediaServerDied;
@end

