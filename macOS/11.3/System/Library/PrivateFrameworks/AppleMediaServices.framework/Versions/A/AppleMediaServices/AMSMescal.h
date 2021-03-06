/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSMescal : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(char)primeTheConnectionWithBag:(id)arg1 error:(id*)arg2 ;
+(char)_matchSignSapURL:(id)arg1 bagDictionary:(id)arg2 error:(id*)arg3 ;
+(id)_matchSignedActions:(id)arg1 withURL:(id)arg2 error:(id*)arg3 ;
+(id)_signedActionDataFromRequest:(id)arg1 policy:(id)arg2 ;
+(id)_DAAPActionsForURLBagActions:(id)arg1 ;
+(char)primeTheConnectionWithContract:(id)arg1 logKey:(id)arg2 error:(id*)arg3 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(char)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 error:(id*)arg6 ;
+(char)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bag:(id)arg4 error:(id*)arg5 ;
+(char)shouldReprimeConnectionWithResult:(id)arg1 ;
+(char)primeTheConnectionWithContract:(id)arg1 error:(id*)arg2 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4 ;
+(char)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 error:(id*)arg5 ;
@end

