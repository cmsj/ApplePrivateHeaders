/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface AFFuture : NSObject {

	NSObject*<OS_dispatch_group> _group;
	id _value;

}
-(id)initAndGetSetterBlock:(/*^block*/id*)arg1 ;
-(id)waitForValue:(unsigned long long)arg1 ;
@end

