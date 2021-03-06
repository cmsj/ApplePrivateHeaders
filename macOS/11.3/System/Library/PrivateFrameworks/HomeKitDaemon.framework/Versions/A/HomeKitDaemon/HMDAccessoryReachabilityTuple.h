/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject {

	char _previouslySentReachability;
	char _currentReachability;
	NSString* _accessoryUUID;

}

@property (nonatomic,retain) NSString * accessoryUUID;                     //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (assign,nonatomic) char previouslySentReachability;              //@synthesize previouslySentReachability=_previouslySentReachability - In the implementation block
@property (assign,nonatomic) char currentReachability;                     //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)tupleWithAccessoryUUID:(id)arg1 reachable:(char)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)accessoryUUID;
-(char)currentReachability;
-(void)setCurrentReachability:(char)arg1 ;
-(void)setAccessoryUUID:(NSString *)arg1 ;
-(void)setPreviouslySentReachability:(char)arg1 ;
-(char)previouslySentReachability;
@end

