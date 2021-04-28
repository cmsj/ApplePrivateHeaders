/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TUCallServicesClientCapabilitiesActions;
@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding> {

	char _wantsCallDisconnectionOnInvalidation;
	char _wantsCallStopStreamingOnInvalidation;
	char _wantsFrequencyChangeNotifications;
	char _wantsCallNotificationsDisabledWhileSuspended;
	id<TUCallServicesClientCapabilitiesActions> _delegate;

}

@property (assign,nonatomic,__weak) id<TUCallServicesClientCapabilitiesActions> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char wantsCallDisconnectionOnInvalidation;                                //@synthesize wantsCallDisconnectionOnInvalidation=_wantsCallDisconnectionOnInvalidation - In the implementation block
@property (assign,nonatomic) char wantsCallStopStreamingOnInvalidation;                                //@synthesize wantsCallStopStreamingOnInvalidation=_wantsCallStopStreamingOnInvalidation - In the implementation block
@property (assign,nonatomic) char wantsFrequencyChangeNotifications;                                   //@synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications - In the implementation block
@property (assign,nonatomic) char wantsCallNotificationsDisabledWhileSuspended;                        //@synthesize wantsCallNotificationsDisabledWhileSuspended=_wantsCallNotificationsDisabledWhileSuspended - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<TUCallServicesClientCapabilitiesActions>)delegate;
-(void)setDelegate:(id<TUCallServicesClientCapabilitiesActions>)arg1 ;
-(void)save;
-(char)wantsCallDisconnectionOnInvalidation;
-(char)wantsFrequencyChangeNotifications;
-(char)wantsCallStopStreamingOnInvalidation;
-(char)wantsCallNotificationsDisabledWhileSuspended;
-(void)setWantsCallDisconnectionOnInvalidation:(char)arg1 ;
-(void)setWantsCallStopStreamingOnInvalidation:(char)arg1 ;
-(void)setWantsFrequencyChangeNotifications:(char)arg1 ;
-(void)setWantsCallNotificationsDisabledWhileSuspended:(char)arg1 ;
@end
