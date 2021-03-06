/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/Versions/A/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSFilterProducer.h>

@interface _BPSRemoveDuplicatesInner : BPSFilterProducer {

	/*^block*/id _isDuplicate;
	id _last;

}

@property (nonatomic,readonly) id isDuplicate;              //@synthesize isDuplicate=_isDuplicate - In the implementation block
@property (nonatomic,retain) id last;                       //@synthesize last=_last - In the implementation block
-(id)isDuplicate;
-(id)last;
-(void)setLast:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 isDuplicate:(/*^block*/id)arg2 ;
-(id)receiveNewValue:(id)arg1 ;
@end

