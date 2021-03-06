/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpanMatcher.framework/Versions/A/SpanMatcher
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TinyCDB, NSString;

@interface PCTDFA : NSObject {

	TinyCDB* _edgeTable;
	TinyCDB* _dataTable;
	TinyCDB* _finalTable;
	NSString* _startState;
	NSString* _path;

}

@property (nonatomic,retain) NSString * startState;              //@synthesize startState=_startState - In the implementation block
@property (nonatomic,retain) NSString * path;                    //@synthesize path=_path - In the implementation block
-(id)init;
-(NSString *)path;
-(void)setMode:(int)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(int)getMode;
-(NSString *)startState;
-(void)setStartState:(NSString *)arg1 ;
-(id)edgesFromState:(id)arg1 ;
-(void)addFinalState:(id)arg1 ;
-(char)isFinalState:(id)arg1 ;
-(void)addEdge:(id)arg1 fromState:(id)arg2 toState:(id)arg3 ;
-(id)initAtPath:(id)arg1 ;
-(void)setDataFor:(id)arg1 to:(id)arg2 ;
-(id)followingStateFrom:(id)arg1 withSymbol:(id)arg2 ;
-(id)dataFor:(id)arg1 ;
@end

