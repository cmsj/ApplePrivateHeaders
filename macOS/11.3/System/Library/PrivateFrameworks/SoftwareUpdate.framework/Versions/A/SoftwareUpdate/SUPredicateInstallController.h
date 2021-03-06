/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectSUPredicateInstallControllerDelegate;
@class NSMutableDictionary, NSDate, NSTask, NSString, NSURL, NSDictionary;

@interface SUPredicateInstallController : NSObject {

	NSMutableDictionary* _resources;
	id<NSObject><SUPredicateInstallControllerDelegate> _delegate;
	NSDate* _lastCacheRefreshAttempt;
	NSTask* _currentTask;

}

@property (copy) NSString * iconPath; 
@property (copy) NSString * title; 
@property (copy) NSString * noNetworkTitle; 
@property (copy) NSString * noNetworkMessage; 
@property (copy) NSString * noServerTitle; 
@property (copy) NSString * noServerMessage; 
@property (copy) NSString * busyTitle; 
@property (copy) NSString * busyMessage; 
@property (copy) NSString * notFoundMessage; 
@property (copy) NSString * helpAnchor; 
@property (copy) NSURL * helpURL; 
@property (assign) long long legalTextType; 
@property (assign) char requireLicenseAgreement; 
@property (copy) NSDictionary * installedPrintersPlist; 
+(id)_localizedErrorForCode:(int)arg1 ;
-(char)_isUpdateUIAlreadyRunning;
-(void)_softwareUpdateDidExitWithCode:(id)arg1 ;
-(id)_writeOptionsFileForPredicate:(id)arg1 confirmComplete:(char)arg2 ;
-(char)_startSoftwareUpdateWithOptionsFile:(id)arg1 ;
-(char)_isSoftwareUpdateRunningWithPID:(id)arg1 ;
-(void)_softwareUpdateDidExit:(id)arg1 ;
-(NSString *)noNetworkTitle;
-(NSString *)noNetworkMessage;
-(NSString *)noServerTitle;
-(NSString *)noServerMessage;
-(NSString *)busyTitle;
-(NSString *)busyMessage;
-(NSString *)notFoundMessage;
-(long long)legalTextType;
-(char)requireLicenseAgreement;
-(NSDictionary *)installedPrintersPlist;
-(void)setNoNetworkTitle:(NSString *)arg1 ;
-(void)setNoNetworkMessage:(NSString *)arg1 ;
-(void)setNoServerTitle:(NSString *)arg1 ;
-(void)setNoServerMessage:(NSString *)arg1 ;
-(void)setBusyTitle:(NSString *)arg1 ;
-(void)setBusyMessage:(NSString *)arg1 ;
-(void)setNotFoundMessage:(NSString *)arg1 ;
-(void)setLegalTextType:(long long)arg1 ;
-(void)setRequireLicenseAgreement:(char)arg1 ;
-(char)startUpdateUIWithPredicate:(id)arg1 confirmComplete:(char)arg2 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)helpAnchor;
-(NSString *)title;
-(void)setHelpAnchor:(NSString *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)iconPath;
-(void)setIconPath:(NSString *)arg1 ;
-(void)setHelpURL:(NSURL *)arg1 ;
-(NSURL *)helpURL;
-(void)setInstalledPrintersPlist:(NSDictionary *)arg1 ;
-(id)_optionsFilePath;
-(id)tagsOfCachedProductsMatchingPredicate:(id)arg1 ;
-(id)metadataOfCachedProductsMatchingPredicate:(id)arg1 ;
-(char)isCacheCurrent;
-(long long)countOfCachedProductsMatchingPredicate:(id)arg1 ;
@end

