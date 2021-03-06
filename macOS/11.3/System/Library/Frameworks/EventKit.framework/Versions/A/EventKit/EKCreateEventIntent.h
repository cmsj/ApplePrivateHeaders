/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>

@class NSString, INObject, CLPlacemark, NSNumber;

@interface EKCreateEventIntent : INIntent

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) INObject * startDate; 
@property (nonatomic,copy) INObject * endDate; 
@property (nonatomic,copy) NSString * locationName; 
@property (nonatomic,copy) CLPlacemark * geolocation; 
@property (nonatomic,copy) NSString * locationAddress; 
@property (nonatomic,copy) NSNumber * allDay; 
@end

