/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWCinematicFramingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	unsigned _cinematicFramingMaxPeopleDetected;
	NSString* _cinematicFramingROIHeatMap;
	NSString* _clientApplicationID;
	unsigned _cinematicFramingControlMode;

}

@property (assign,nonatomic) unsigned cinematicFramingMaxPeopleDetected;              //@synthesize cinematicFramingMaxPeopleDetected=_cinematicFramingMaxPeopleDetected - In the implementation block
@property (nonatomic,copy) NSString * cinematicFramingROIHeatMap;                     //@synthesize cinematicFramingROIHeatMap=_cinematicFramingROIHeatMap - In the implementation block
@property (nonatomic,copy) NSString * clientApplicationID;                            //@synthesize clientApplicationID=_clientApplicationID - In the implementation block
@property (assign,nonatomic) unsigned cinematicFramingControlMode;                    //@synthesize cinematicFramingControlMode=_cinematicFramingControlMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(id)eventName;
-(unsigned)cinematicFramingControlMode;
-(void)setCinematicFramingControlMode:(unsigned)arg1 ;
-(id)eventDictionary;
-(NSString *)clientApplicationID;
-(void)setClientApplicationID:(NSString *)arg1 ;
-(unsigned)cinematicFramingMaxPeopleDetected;
-(void)setCinematicFramingMaxPeopleDetected:(unsigned)arg1 ;
-(NSString *)cinematicFramingROIHeatMap;
-(void)setCinematicFramingROIHeatMap:(NSString *)arg1 ;
@end
