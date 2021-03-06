/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityKit.framework/Versions/A/AccessibilityKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class AXKApplicationController;

@interface _AXKApplicationOperation : NSOperation {

	AXKApplicationController* __applicationController;
	/*^block*/id __work;
	id __result;

}

@property (assign,setter=_setApplicationController:,nonatomic,__weak) AXKApplicationController * _applicationController;              //@synthesize _applicationController=__applicationController - In the implementation block
@property (setter=_setWork:,nonatomic,copy) id _work;                                                                                 //@synthesize _work=__work - In the implementation block
@property (setter=_setResult:,nonatomic,retain) id _result;                                                                           //@synthesize _result=__result - In the implementation block
-(id)description;
-(id)_result;
-(void)main;
-(id)_work;
-(AXKApplicationController *)_applicationController;
-(id)initWithWorkBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 applicationController:(id)arg3 ;
-(void)_setResult:(id)arg1 ;
-(void)_setApplicationController:(id)arg1 ;
-(void)_setWork:(/*^block*/id)arg1 ;
@end

