/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/Versions/A/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CPAnalyticsMetricEventRoute : NSObject {

	NSString* _destination;
	NSString* _destinationEventKey;
	NSArray* _propertiesToInclude;

}

@property (nonatomic,readonly) NSString * destination;                      //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSString * destinationEventKey;              //@synthesize destinationEventKey=_destinationEventKey - In the implementation block
@property (nonatomic,readonly) NSArray * propertiesToInclude;               //@synthesize propertiesToInclude=_propertiesToInclude - In the implementation block
-(NSString *)destination;
-(id)initWithConfig:(id)arg1 ;
-(NSString *)destinationEventKey;
-(NSArray *)propertiesToInclude;
@end
