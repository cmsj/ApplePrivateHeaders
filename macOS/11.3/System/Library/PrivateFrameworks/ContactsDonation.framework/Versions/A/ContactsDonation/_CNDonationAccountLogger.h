/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/Versions/A/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDonationAccountLogger.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNDonationAccountLogger : NSObject <CNDonationAccountLogger> {

	NSObject*<OS_os_log> _log_t;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log_t;              //@synthesize log_t=_log_t - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)accountAdded:(id)arg1 ;
-(void)accountRemoved:(id)arg1 ;
-(void)accountChanged:(id)arg1 ;
-(NSObject*<OS_os_log>)log_t;
-(void)pluginLoaded;
-(void)pluginUnloaded;
-(void)accountsDidNotChange;
-(void)donating:(id)arg1 ;
-(void)removing:(id)arg1 ;
-(void)donationFailedWithError:(id)arg1 ;
-(void)removalFailedWithError:(id)arg1 ;
@end

