/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/Versions/A/HomeKitEventRouter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSData;

@interface HMEEvent : NSObject {

	NSArray* _accessControls;
	NSDictionary* _accessControlsByType;
	unsigned long long _combineType;
	NSData* _eventData;

}

@property (nonatomic,copy,readonly) NSData * eventData;                     //@synthesize eventData=_eventData - In the implementation block
@property (copy,readonly) NSData * encodedData; 
@property (copy,readonly) NSArray * accessControls;                         //@synthesize accessControls=_accessControls - In the implementation block
@property (copy,readonly) NSDictionary * accessControlsByType;              //@synthesize accessControlsByType=_accessControlsByType - In the implementation block
@property (readonly) unsigned long long combineType;                        //@synthesize combineType=_combineType - In the implementation block
+(id)eventFromProtobuff:(id)arg1 ;
-(id)description;
-(NSData *)encodedData;
-(NSData *)eventData;
-(NSArray *)accessControls;
-(id)initWithEventData:(id)arg1 accessControls:(id)arg2 ;
-(id)_initWithEventData:(id)arg1 accessControls:(id)arg2 combineType:(unsigned long long)arg3 ;
-(id)initWithEventData:(id)arg1 accessControls:(id)arg2 combineType:(unsigned long long)arg3 ;
-(id)initWithEventData:(id)arg1 ;
-(id)initWithSubclassedEventAccessControls:(id)arg1 combineType:(unsigned long long)arg2 ;
-(id)pbEvent;
-(NSDictionary *)accessControlsByType;
-(unsigned long long)combineType;
@end

