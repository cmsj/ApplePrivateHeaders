/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString;

@interface NEIKEv2Rekey : NSObject <NSObject> {

	int _ikeLifetimeMinutes;
	int _childLifetimeMinutes;
	/*^block*/id _ikeRekeyHandler;
	/*^block*/id _childRekeyHandler;

}

@property (assign) int ikeLifetimeMinutes;                          //@synthesize ikeLifetimeMinutes=_ikeLifetimeMinutes - In the implementation block
@property (assign) int childLifetimeMinutes;                        //@synthesize childLifetimeMinutes=_childLifetimeMinutes - In the implementation block
@property (copy) id ikeRekeyHandler;                                //@synthesize ikeRekeyHandler=_ikeRekeyHandler - In the implementation block
@property (copy) id childRekeyHandler;                              //@synthesize childRekeyHandler=_childRekeyHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startIKETimer:(int)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(void)startChildTimer:(int)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(id)ikeRekeyHandler;
-(id)childRekeyHandler;
-(void)invokeIKERekeyHandler;
-(void)invokeChildRekeyHandler;
-(int)ikeLifetimeMinutes;
-(void)setIkeLifetimeMinutes:(int)arg1 ;
-(int)childLifetimeMinutes;
-(void)setChildLifetimeMinutes:(int)arg1 ;
-(void)setIkeRekeyHandler:(id)arg1 ;
-(void)setChildRekeyHandler:(id)arg1 ;
-(void)dealloc;
-(void)clearTimers;
@end

