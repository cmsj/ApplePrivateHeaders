/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Restore.framework/Versions/A/Restore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
#import <Restore/Restore-Structs.h>
@class NSTimer, NSObject, NSMutableDictionary;

@interface RestoreHelper : NSObject {

	NSTimer* _startTimer;
	/*function pointer*/void* _statusFn;
	/*function pointer*/void* _completionFn;
	void* _context;
	NSObject*<OS_xpc_object> _connection;
	NSMutableDictionary* _operation;
	AuthorizationOpaqueRefRef _authRef;
	SCD_Struct_Re1 _authorization;

}
-(void)dealloc;
-(id)init;
-(int)updateStatus:(id)arg1 ;
-(char)isAuthenticated;
-(int)authenticate;
-(int)doCommand:(id)arg1 withStatusFn:(/*function pointer*/void*)arg2 completionFn:(/*function pointer*/void*)arg3 andContext:(void*)arg4 ;
-(int)doCommand:(id)arg1 withStatusFn:(/*function pointer*/void*)arg2 andContext:(void*)arg3 ;
-(void)executeCompleted:(int)arg1 ;
-(void)asrAgentConnectionCallback:(id)arg1 ;
-(void)commTimeout:(id)arg1 ;
-(int)askForPassword;
-(int)authWithFlags:(unsigned)arg1 ;
@end
