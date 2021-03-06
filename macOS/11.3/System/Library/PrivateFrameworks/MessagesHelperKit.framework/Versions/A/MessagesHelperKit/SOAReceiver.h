/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessagesHelperKit.framework/Versions/A/MessagesHelperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SOAReceiverProtocol.h>

@class SOAController, NSString;

@interface SOAReceiver : NSObject <SOAReceiverProtocol> {

	SOAController* _controller;

}

@property (__weak) SOAController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(SOAController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)setController:(SOAController *)arg1 ;
-(void)setupComplete;
-(void)setDefaultsObject:(id)arg1 forKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addDefaultsObject:(id)arg1 toCollection:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeDefaultsObject:(id)arg1 fromCollection:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setDefaultsObject:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeDefaultsObjectForKey:(id)arg1 inCollection:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)connectionDied:(id)arg1 ;
@end

