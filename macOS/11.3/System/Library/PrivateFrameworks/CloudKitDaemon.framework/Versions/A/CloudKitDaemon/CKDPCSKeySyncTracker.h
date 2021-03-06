/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSString, NSObject, NSDate, NSNumber, NSError;

@interface CKDPCSKeySyncTracker : NSObject {

	char _manatee;
	NSString* _serviceName;
	NSObject*<OS_dispatch_group> _syncGroup;
	NSDate* _completionDate;
	NSNumber* _syncStatus;
	NSError* _syncError;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,retain) NSString * serviceName;                              //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,getter=isManatee,nonatomic) char manatee;                       //@synthesize manatee=_manatee - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> syncGroup;              //@synthesize syncGroup=_syncGroup - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                             //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,retain) NSNumber * syncStatus;                               //@synthesize syncStatus=_syncStatus - In the implementation block
@property (nonatomic,retain) NSError * syncError;                                 //@synthesize syncError=_syncError - In the implementation block
-(unsigned long long)state;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(NSNumber *)syncStatus;
-(void)setSyncStatus:(NSNumber *)arg1 ;
-(NSObject*<OS_dispatch_group>)syncGroup;
-(void)setSyncGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(char)isManatee;
-(NSError *)syncError;
-(void)waitOnSyncWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setManatee:(char)arg1 ;
-(void)setSyncError:(NSError *)arg1 ;
@end

