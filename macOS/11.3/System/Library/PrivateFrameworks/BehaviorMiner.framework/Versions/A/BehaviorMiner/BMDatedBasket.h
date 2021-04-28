/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/Versions/A/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSSet;

@interface BMDatedBasket : NSObject {

	NSDate* _date;
	NSSet* _basket;

}

@property (nonatomic,copy,readonly) NSDate * date;               //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSSet * basket;              //@synthesize basket=_basket - In the implementation block
+(id)undated:(id)arg1 ;
-(NSDate *)date;
-(NSSet *)basket;
-(id)initWithBasket:(id)arg1 Date:(id)arg2 ;
@end
