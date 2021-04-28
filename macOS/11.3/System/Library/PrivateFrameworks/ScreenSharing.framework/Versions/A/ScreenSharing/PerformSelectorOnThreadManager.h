/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSMachPortDelegate.h>

@class NSMutableDictionary, NSArray, RDMutex, NSMutableArray, NSString;

@interface PerformSelectorOnThreadManager : NSObject <NSMachPortDelegate> {

	NSMutableDictionary* _threadToPortMap;
	NSArray* _modes;
	RDMutex* _lock;
	NSMutableArray* _commandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3 ;
-(void)handlePortMessage:(id)arg1 ;
-(id)makeKeyForThread:(id)arg1 ;
-(void)registerCurrentThread;
-(void)unregisterCurrentThread;
-(void)threadWrapper:(id)arg1 ;
-(void)performSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 onThread:(id)arg4 ;
@end
