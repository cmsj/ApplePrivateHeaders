/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpanMatcher.framework/Versions/A/SpanMatcher
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface CTFuzzyMatch : NSObject {

	long long _CTdistance;
	NSArray* _CTdata;
	NSString* _CTvalue;

}

@property (nonatomic,readonly) long long distance; 
@property (nonatomic,readonly) NSArray * data; 
@property (nonatomic,copy,readonly) NSString * value; 
-(id)description;
-(id)init;
-(NSArray *)data;
-(NSString *)value;
-(long long)distance;
-(id)initWithStringValue:(id)arg1 withDistance:(long long)arg2 andData:(id)arg3 ;
@end

