/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSEvent;

@interface CLSEventResult : NSObject {

	float _confidence;
	CLSEvent* _event;

}

@property (nonatomic,retain) CLSEvent * event;              //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2 ;
-(id)description;
-(CLSEvent *)event;
-(float)confidence;
-(void)setEvent:(CLSEvent *)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(char)isSameEventAsResult:(id)arg1 ;
-(void)mergeWithResult:(id)arg1 ;
@end

