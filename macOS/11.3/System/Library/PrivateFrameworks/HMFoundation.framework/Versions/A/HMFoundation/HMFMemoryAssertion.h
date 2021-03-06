/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFAssertion.h>

@protocol OS_os_transaction;
@class NSObject;

@interface HMFMemoryAssertion : HMFAssertion {

	NSObject*<OS_os_transaction> _internal;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> internal;              //@synthesize internal=_internal - In the implementation block
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(NSObject*<OS_os_transaction>)internal;
-(void)setInternal:(NSObject*<OS_os_transaction>)arg1 ;
-(void)mark;
@end

