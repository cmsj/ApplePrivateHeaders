/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpanMatcher.framework/Versions/A/SpanMatcher
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CTDFAState : NSObject {

	id _CTdata;
	NSMutableDictionary* _CTinternalEdges;
	char _final;

}

@property (nonatomic,readonly) id data; 
@property (assign,nonatomic) char final;              //@synthesize final=_final - In the implementation block
-(id)description;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)edges;
-(void)setFinal:(char)arg1 ;
-(char)final;
-(void)addEdgeWithSymbol:(id)arg1 toState:(id)arg2 ;
-(id)followingStateWithSymbol:(id)arg1 ;
@end

