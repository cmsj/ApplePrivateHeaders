/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PFPriorityQueueExtensionBlockInfo : NSObject {

	unsigned _qos;
	/*^block*/id _block;
	unsigned long long _priority;

}

@property (readonly) id block;                                 //@synthesize block=_block - In the implementation block
@property (readonly) unsigned qos;                             //@synthesize qos=_qos - In the implementation block
@property (readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
-(id)block;
-(unsigned)qos;
-(unsigned long long)priority;
-(id)initWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3 ;
@end
