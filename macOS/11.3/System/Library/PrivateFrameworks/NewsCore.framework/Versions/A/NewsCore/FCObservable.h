/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FCObservable : NSObject {

	id _value;
	NSMutableArray* _observers;
	unsigned long long _token;

}

@property (nonatomic,retain) NSMutableArray * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) unsigned long long token;                //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) id value;                                //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(id)init;
-(id)value;
-(void)setValue:(id)arg1 ;
-(unsigned long long)token;
-(NSMutableArray *)observers;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(void)setToken:(unsigned long long)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)next:(id)arg1 ;
-(id)observe:(/*^block*/id)arg1 ;
-(void)quietNext:(id)arg1 ;
@end

