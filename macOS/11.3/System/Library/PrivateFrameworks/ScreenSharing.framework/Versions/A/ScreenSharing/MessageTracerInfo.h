/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface MessageTracerInfo : NSObject {

	NSDate* sessionStartTime;
	NSString* serverVersion;

}

@property (retain) NSDate * sessionStartTime; 
@property (retain) NSString * serverVersion; 
+(id)getAppBundleID;
+(void)logNetworkAddressType:(id)arg1 ;
+(void)logAddressResolveFailure:(char)arg1 withFailureReason:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSDate *)sessionStartTime;
-(void)setSessionStartTime:(NSDate *)arg1 ;
-(NSString *)serverVersion;
-(void)setServerVersion:(NSString *)arg1 ;
-(void)logConnectionFailure:(char)arg1 withFailureReason:(id)arg2 ;
-(void)logServerVersion:(id)arg1 ;
-(void)logAuthenticationType:(id)arg1 ;
-(void)logKerberosFailure:(char)arg1 withFailureReason:(id)arg2 ;
-(void)logAuthenticationFinished:(char)arg1 withAuthResult:(int)arg2 ;
-(void)logConfigurationString:(id)arg1 ;
-(void)logSessionEndedToMessageTracer;
@end

