/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface AXFDispatchGroup : NSObject {

	NSObject*<OS_dispatch_group> __group;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> _group;              //@synthesize _group=__group - In the implementation block
-(void)notifyWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)notifyWithQueue:(id)arg1 workItem:(id)arg2 ;
-(id)init;
-(void)wait;
-(NSObject*<OS_dispatch_group>)_group;
-(char)waitWithTimeout:(long long)arg1 ;
-(void)enter;
-(void)leave;
@end
