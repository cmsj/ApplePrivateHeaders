/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/Versions/A/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPZoneTrackerDelegate;
@interface WPZoneTracker : WPClient {

	char _wantEntry;
	char _wantExit;
	id<WPZoneTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPZoneTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char wantEntry;                                         //@synthesize wantEntry=_wantEntry - In the implementation block
@property (assign,nonatomic) char wantExit;                                          //@synthesize wantExit=_wantExit - In the implementation block
-(id)description;
-(void)invalidate;
-(id<WPZoneTrackerDelegate>)delegate;
-(void)setDelegate:(id<WPZoneTrackerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)failedToRegisterZones:(id)arg1 withError:(id)arg2 ;
-(void)enteredZone:(id)arg1 manufacturerData:(id)arg2 ;
-(void)exitedZone:(id)arg1 ;
-(void)fetchedCurrentlyTrackedZones:(id)arg1 ;
-(char)wantExit;
-(void)setWantEntry:(char)arg1 ;
-(void)setWantExit:(char)arg1 ;
-(char)wantEntry;
-(void)registerForZoneChangesMatching:(id)arg1 ;
-(void)unregisterForZoneChanges:(id)arg1 ;
-(void)unregisterAllZoneChanges;
-(void)getCurrentTrackedZones;
@end
