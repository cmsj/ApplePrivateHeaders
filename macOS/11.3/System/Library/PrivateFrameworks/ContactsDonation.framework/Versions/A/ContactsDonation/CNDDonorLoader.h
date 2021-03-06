/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/Versions/A/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationLoggerProvider;
@interface CNDDonorLoader : NSObject {

	id<CNDonationLoggerProvider> _loggerProvider;

}

@property (nonatomic,readonly) id<CNDonationLoggerProvider> loggerProvider;              //@synthesize loggerProvider=_loggerProvider - In the implementation block
+(id)extensionAttributes;
+(id)currentExtensionsObservable;
+(id)continuousExtensionsObservable;
-(id)init;
-(id<CNDonationLoggerProvider>)loggerProvider;
-(id)donorWithIdentifier:(id)arg1 ;
@end

