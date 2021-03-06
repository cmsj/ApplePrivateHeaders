/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRHitZoneForVisualFeedback : NSObject {

	char _hasEnded;
	double _timestamp;
	float* _vertices;
	unsigned long long _countOfVertices;

}

@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasEnded;                           //@synthesize hasEnded=_hasEnded - In the implementation block
@property (readonly) float* vertices;                                 //@synthesize vertices=_vertices - In the implementation block
@property (readonly) unsigned long long countOfVertices;              //@synthesize countOfVertices=_countOfVertices - In the implementation block
-(void)dealloc;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(char)hasEnded;
-(float*)vertices;
-(void)setHasEnded:(char)arg1 ;
-(unsigned long long)countOfVertices;
-(void)set2DVertices:(const float*)arg1 countOfVertices:(unsigned long long)arg2 ;
@end

