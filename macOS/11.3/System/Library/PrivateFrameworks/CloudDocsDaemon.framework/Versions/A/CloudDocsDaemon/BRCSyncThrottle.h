/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCThrottle.h>

@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle {

	NSPredicate* _predicate;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(char)_validateThrottleParams:(id)arg1 ;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(char)matchesItem:(id)arg1 nsecsToRetry:(unsigned long long*)arg2 now:(unsigned long long)arg3 ;
@end
