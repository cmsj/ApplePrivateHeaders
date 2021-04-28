/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMapTable, WBSPerSitePreference;

@interface SafariWebGLLoadPolicyController : NSObject {

	NSMutableDictionary* _policies;
	NSMapTable* _browserViewControllerToPageHost;
	char _changingPoliciesPerSitePreventedByAdmin;
	int _userDefaultWebGLLoadPolicy;
	NSMutableDictionary* _domainsToHosts;
	char _firstVisitPolicyIsManagedByAdmin;
	int _defaultWebGLPolicy;
	WBSPerSitePreference* _webGLPreference;

}

@property (assign,nonatomic) int defaultWebGLPolicy;                                //@synthesize defaultWebGLPolicy=_defaultWebGLPolicy - In the implementation block
@property (nonatomic,readonly) int hardwareSecurityLevel; 
@property (assign,nonatomic) char firstVisitPolicyIsManagedByAdmin;                 //@synthesize firstVisitPolicyIsManagedByAdmin=_firstVisitPolicyIsManagedByAdmin - In the implementation block
@property (nonatomic,readonly) WBSPerSitePreference * webGLPreference;              //@synthesize webGLPreference=_webGLPreference - In the implementation block
+(id)sharedController;
-(id)init;
-(long long)webGLLoadPolicyForHost:(id)arg1 ;
-(void)browserViewController:(id)arg1 didOpenPageRunningWebGLWithHost:(id)arg2 ;
-(char)showWebGLLoadPolicyDialogForURL:(id)arg1 inBrowserViewController:(id)arg2 ;
-(void)browserViewController:(id)arg1 didLeavePageRunningWebGLWithHost:(id)arg2 ;
-(void)clearWebGLPolicies;
-(void)clearWebGLPoliciesAddedAfterDate:(id)arg1 ;
-(void)reloadWebGLLoadPoliciesIfNeeded;
-(void)removeWebGLLoadPoliciesForHosts:(id)arg1 ;
-(void)saveWebGLLoadPoliciesToUserDefaults;
-(void)setDefaultWebGLPolicy:(int)arg1 ;
-(int)hardwareSecurityLevel;
-(id)sortedPolicies;
-(char)firstVisitPolicyIsManagedByAdmin;
-(int)defaultWebGLPolicy;
-(char)_isSuppressingDialog:(id)arg1 ;
-(void)setWebGLLoadPolicy:(int)arg1 forHost:(id)arg2 saveToUserDefaults:(char)arg3 ;
-(long long)_managedPolicyToWebGLLoadPolicy:(int)arg1 ;
-(id)_domainFromHost:(id)arg1 ;
-(char)_openPageIsUsingPolicyForHost:(id)arg1 ;
-(void)_loadPoliciesFromUserDefaults:(char)arg1 ;
-(id)policyEntryForHost:(id)arg1 ;
-(void)removeWebGLLoadPolicyForHost:(id)arg1 ;
-(void)resetWebGLLoadPolicies;
-(id)_hostForDomain:(id)arg1 ;
-(void)setFirstVisitPolicyIsManagedByAdmin:(char)arg1 ;
-(WBSPerSitePreference *)webGLPreference;
@end
