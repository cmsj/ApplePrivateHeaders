/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@class NSPipe, NSFileHandle, NSString, NSMutableDictionary;

@interface IFRunnerProxy : NSObject {

	int runnerPid;
	NSPipe* runnerPipe;
	NSFileHandle* writeHandle;
	AuthorizationOpaqueRefRef authorizationRef;
	char freeAuthorizationWhenDone;
	char securityInitialized;
	NSString* runnerConnectionName;
	NSMutableDictionary* authorizationKeys;

}
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
+(char)authorizedAsAdmin;
+(char)_repairRunnerToolAtPath:(id)arg1 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(AuthorizationOpaqueRefRef)authorizationRef;
-(id)initWithAuthorizationNoCopy:(AuthorizationOpaqueRefRef)arg1 freeWhenDone:(char)arg2 ;
-(int)requestKeyForRights:(int)arg1 askUser:(char)arg2 ;
-(void)_runBlockOnThread:(id)arg1 withBlock:(/*^block*/id)arg2 waitUntilDone:(char)arg3 ;
-(void)__runBlock:(/*^block*/id)arg1 ;
-(void)requestKeyForRights:(int)arg1 askUser:(char)arg2 withCompletion:(/*^block*/id)arg3 onNotifyThread:(id)arg4 ;
-(id)_runnerObject;
-(char)connectToRunner;
-(oneway void)setRunnerConnectionName:(id)arg1 ;
-(oneway void)setRunnerPid:(int)arg1 ;
@end
