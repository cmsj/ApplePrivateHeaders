/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AASetupAssistantConfigResponse : AAResponse {

	NSDictionary* _urls;

}

@property (nonatomic,readonly) NSString * signingSessionCertURL; 
@property (nonatomic,readonly) NSString * signingSessionURL; 
@property (nonatomic,readonly) NSString * aboutURL; 
@property (nonatomic,readonly) NSString * xmlUI; 
@property (nonatomic,readonly) NSString * upgradeIOSTermsUI; 
@property (nonatomic,readonly) NSString * genericTermsURL; 
@property (nonatomic,readonly) NSString * iForgotUIURL; 
@property (nonatomic,readonly) NSString * authenticateURL; 
@property (nonatomic,readonly) NSString * createAppleIDURL; 
@property (nonatomic,readonly) NSString * updateAppleIDURL; 
@property (nonatomic,readonly) NSString * createDelegateAccountsURL; 
@property (nonatomic,readonly) NSString * checkValidityURL; 
@property (nonatomic,readonly) NSString * iForgotURL; 
@property (nonatomic,readonly) NSString * existingAppleIDTermsUIURL; 
@property (nonatomic,readonly) char setupAssistantServerEnabled; 
@property (nonatomic,readonly) NSString * loginDelegatesURL; 
@property (nonatomic,readonly) NSString * activeEmailDomain; 
@property (nonatomic,readonly) NSString * upgradeStatusURL; 
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)signingSessionCertURL;
-(NSString *)signingSessionURL;
-(NSString *)authenticateURL;
-(NSString *)createAppleIDURL;
-(NSString *)updateAppleIDURL;
-(NSString *)createDelegateAccountsURL;
-(NSString *)upgradeIOSTermsUI;
-(NSString *)upgradeStatusURL;
-(NSString *)xmlUI;
-(NSString *)aboutURL;
-(NSString *)checkValidityURL;
-(NSString *)iForgotURL;
-(NSString *)existingAppleIDTermsUIURL;
-(NSString *)loginDelegatesURL;
-(NSString *)genericTermsURL;
-(char)setupAssistantServerEnabled;
-(NSString *)activeEmailDomain;
-(NSString *)iForgotUIURL;
@end

