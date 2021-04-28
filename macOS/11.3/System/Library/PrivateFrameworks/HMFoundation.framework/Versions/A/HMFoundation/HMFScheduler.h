/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue;

@interface HMFScheduler : HMFObject {

	NSOperationQueue* _operationQueue;

}
+(id)defaultScheduler;
+(id)mainScheduler;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)performBlock:(/*^block*/id)arg1 ;
-(id)performOperation:(id)arg1 ;
-(id)performWithQualityOfService:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 qualityOfService:(long long)arg4 ;
@end
