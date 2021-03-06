/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSAbsinthe : NSObject <AMSBagConsumer_Project, AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)_dataToSignFromRequest:(id)arg1 bagDefinition:(id)arg2 ;
+(id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 ;
+(id)handleResponse:(id)arg1 bag:(id)arg2 ;
+(id)createBagForSubProfile;
+(void)_signingDataFromRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

