/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MTLSimImplementation.framework/Versions/A/MTLSimImplementation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MTLSimImplementation/MTLDeserializerAllocator.h>

@protocol OS_dispatch_data;
@class NSObject;

@interface MTLSimReplyAllocator : NSObject <MTLDeserializerAllocator> {

	NSObject*<OS_dispatch_data> _data;

}

@property (readonly) NSObject*<OS_dispatch_data> data;              //@synthesize data=_data - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_data>)data;
-(char*)allocateOperationBytes:(unsigned long long)arg1 ;
@end

