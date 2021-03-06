/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/Versions/A/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class NSString;

@interface _BPSMapInner : NSObject <BPSSubscriber> {

	id<BPSSubscriber> _downstream;
	/*^block*/id _transform;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,copy) id transform;                                //@synthesize transform=_transform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)transform;
-(void)setTransform:(id)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)receiveCompletion:(id)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 transform:(/*^block*/id)arg2 ;
@end

