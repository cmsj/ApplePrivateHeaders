/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSObject, NSDate, BSSMO;

@interface JoinMO : NSManagedObject

@property (assign,nonatomic) short autojoinPhase; 
@property (assign,nonatomic) short cca; 
@property (nonatomic,retain) NSObject * channelsScanned; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) int dhcpLatencyMs; 
@property (assign,nonatomic) int dhcpLeaseMins; 
@property (assign,nonatomic) char dhcpSuccess; 
@property (assign,nonatomic) char isAutojoin; 
@property (assign,nonatomic) short motionState; 
@property (assign,nonatomic) int reason; 
@property (assign,nonatomic) short rssi; 
@property (assign,nonatomic) short snr; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int subreason; 
@property (assign,nonatomic) char success; 
@property (nonatomic,retain) BSSMO * bss; 
+(id)entityName;
+(id)fetchRequest;
@end
