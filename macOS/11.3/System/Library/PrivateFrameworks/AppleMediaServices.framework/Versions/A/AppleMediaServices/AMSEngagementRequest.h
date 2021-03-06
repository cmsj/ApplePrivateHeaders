/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSDictionary, NSString, NSURL;

@interface AMSEngagementRequest : NSObject <NSSecureCoding> {

	char _failOnDismiss;
	ACAccount* _account;
	NSDictionary* _clientData;
	NSString* _logKey;
	NSDictionary* _metricsOverlay;
	long long _presentationStyle;
	NSURL* _URL;

}

@property (retain) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (retain) NSDictionary * clientData;                  //@synthesize clientData=_clientData - In the implementation block
@property (retain) NSString * logKey;                          //@synthesize logKey=_logKey - In the implementation block
@property (assign) char failOnDismiss;                         //@synthesize failOnDismiss=_failOnDismiss - In the implementation block
@property (retain) NSDictionary * metricsOverlay;              //@synthesize metricsOverlay=_metricsOverlay - In the implementation block
@property (assign) long long presentationStyle;                //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (retain) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSDictionary *)clientData;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(char)failOnDismiss;
-(NSDictionary *)metricsOverlay;
-(long long)presentationStyle;
-(void)setClientData:(NSDictionary *)arg1 ;
-(void)setFailOnDismiss:(char)arg1 ;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
@end

