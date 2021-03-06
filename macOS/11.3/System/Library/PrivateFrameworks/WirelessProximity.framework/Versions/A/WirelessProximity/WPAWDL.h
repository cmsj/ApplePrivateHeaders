/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/Versions/A/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPAWDLDelegate;
@interface WPAWDL : WPClient {

	char _useSmallerAirDrop;
	id<WPAWDLDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPAWDLDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char useSmallerAirDrop;                                    //@synthesize useSmallerAirDrop=_useSmallerAirDrop - In the implementation block
+(id)hashEmail:(id)arg1 ;
+(id)generateDataFromEmails:(id)arg1 ;
-(void)invalidate;
-(id<WPAWDLDelegate>)delegate;
-(void)setDelegate:(id<WPAWDLDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(char)useSmallerAirDrop;
-(void)startConnectionlessAWDLServiceAdvertisingWithData:(id)arg1 ;
-(void)updateAdvertisingRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)stopConnectionlessAWDLServiceAdvertising;
-(void)startConnectionlessAWDLServiceScanning;
-(void)stopConnectionlessAWDLServiceScanning;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)setUseSmallerAirDrop:(char)arg1 ;
@end

