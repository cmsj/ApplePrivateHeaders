/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTCoreDataReadable.h>
#import <libobjc.A.dylib/RTCoreDataWritable.h>

@class NSDate, NSString;

@interface RTSettledStateTransition : NSObject <RTCoreDataReadable, RTCoreDataWritable> {

	NSDate* _date;
	long long _transitionFromType;
	long long _transitionToType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long transitionFromType;              //@synthesize transitionFromType=_transitionFromType - In the implementation block
@property (nonatomic,readonly) long long transitionToType;                //@synthesize transitionToType=_transitionToType - In the implementation block
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithSettledStateTransitionMO:(id)arg1 ;
-(id)init;
-(NSDate *)date;
-(id)managedObjectWithContext:(id)arg1 ;
-(long long)transitionToType;
-(long long)transitionFromType;
-(id)initWithDate:(id)arg1 transitionFromType:(long long)arg2 transitionToType:(long long)arg3 ;
@end
