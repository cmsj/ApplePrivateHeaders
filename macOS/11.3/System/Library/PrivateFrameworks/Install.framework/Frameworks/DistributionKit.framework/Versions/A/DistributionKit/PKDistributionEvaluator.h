/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Frameworks/DistributionKit.framework/Versions/A/DistributionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DistributionKit/DistributionKit-Structs.h>
#import <libobjc.A.dylib/PKDistributionValueNodeCallerTrackingDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class IFJS_Context, NSObject, PKDistributionValueNode, PKDistributionScript, NSMutableSet, NSString;

@interface PKDistributionEvaluator : NSObject <PKDistributionValueNodeCallerTrackingDelegate> {

	OpaqueJSContextRef _context;
	IFJS_Context* _globalObject;
	NSObject*<OS_dispatch_queue> _evaluationQueue;
	NSObject*<OS_dispatch_group> _evaluationGroup;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	PKDistributionValueNode* _nodeBeingEvaluated;
	PKDistributionScript* _unevaluatedTopScript;
	NSMutableSet* _registeredNodes;
	char _isTerminating;
	char _isEnabled;

}

@property (assign) char enabled;                                    //@synthesize isEnabled=_isEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)waitUntilQuiescent;
-(void)registerNodeForCallerTracking:(id)arg1 ;
-(void)evaluateNode:(id)arg1 ;
-(void)evaluateNode:(id)arg1 notifyBlock:(/*^block*/id)arg2 ;
-(id)_evaluateNode:(id)arg1 returningError:(id*)arg2 ;
-(id)_evaluateScript:(id)arg1 forNode:(id)arg2 error:(id*)arg3 ;
-(id)callingNode;
-(id)initWithEvaluationQueue:(id)arg1 topScript:(id)arg2 ;
-(id)evaluateSingleNodeBlocking:(id)arg1 returningError:(id*)arg2 modifyingContext:(/*^block*/id)arg3 ;
-(id)evaluateExpression:(id)arg1 returningError:(id*)arg2 ;
-(void)finalize;
-(void)dealloc;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)terminate;
-(id)notifyQueue;
-(void)setNotifyQueue:(id)arg1 ;
-(OpaqueJSContextRef)jsContext;
-(id)globalObject;
@end

