/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class SUUpdateProduct, NSError, NSObject, NSXPCConnection, NSString, NSAttributedString, NSDate, NSArray, SUMajorProduct, NSURL;

@interface SUAppStoreUpdate : NSObject <NSSecureCoding> {

	SUUpdateProduct* _product;
	NSError* _updateError;
	long long _lastState;
	NSObject*<OS_dispatch_queue> _q;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) NSXPCConnection * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (retain,readonly) NSString * title; 
@property (retain,readonly) NSString * versionString; 
@property (retain,readonly) NSString * longDescription; 
@property (retain,readonly) NSAttributedString * longAttributedDescription; 
@property (readonly) long long downloadSize; 
@property (retain,readonly) NSDate * postDate; 
@property (readonly) long long action; 
@property (retain,readonly) NSString * currentLocalization; 
@property (retain,readonly) NSAttributedString * licenseAgreement; 
@property (retain,readonly) NSAttributedString * firmwareWarning; 
@property (retain,readonly) NSDate * deferredUntilDate; 
@property (retain,readonly) NSString * productKey; 
@property (retain,readonly) NSArray * tags; 
@property (retain,readonly) id auxInfo; 
@property (readonly) char isRecommended; 
@property (readonly) char isRamped; 
@property (readonly) char isAutoUpdateEligible; 
@property (readonly) char allowedToUseInstallLater; 
@property (readonly) char isAdminDeferred; 
@property (readonly) NSDate * adminDeferredToDate; 
@property (readonly) char isCritical; 
@property (readonly) char isConfigData; 
@property (readonly) char isMajorOSUpdate; 
@property (retain,readonly) SUMajorProduct * majorProduct; 
@property (readonly) char isMajorOSUpdateInternal; 
@property (readonly) long long autoInstallWithDelayInHours; 
@property (retain,readonly) NSString * customTitleForUpdateAvailableNotification; 
@property (retain,readonly) NSString * customTextForUpdateAvailableNotification; 
@property (readonly) char showPostInstallNotification; 
@property (retain,readonly) NSString * customTitleForPostInstallNotification; 
@property (retain,readonly) NSString * customTextForPostInstallNotification; 
@property (retain,readonly) NSURL * customURLForPostInstallNotification; 
@property (retain,readonly) NSArray * applicationIdentifiersToClose; 
@property (retain,readonly) NSError * updateError; 
@property (readonly) char canRetry; 
+(char)supportsSecureCoding;
+(char)_connectToService;
-(id)_initWithProduct:(id)arg1 ;
-(void)_setProduct:(id)arg1 ;
-(NSDate *)deferredUntilDate;
-(id)initWithProductKey:(id)arg1 title:(id)arg2 longDescription:(id)arg3 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(long long)action;
-(NSArray *)tags;
-(NSString *)title;
-(NSString *)versionString;
-(char)isCritical;
-(char)isRecommended;
-(id)_product;
-(NSString *)longDescription;
-(long long)downloadSize;
-(id)auxInfo;
-(NSError *)updateError;
-(NSString *)productKey;
-(char)isRamped;
-(char)isAdminDeferred;
-(char)isMajorOSUpdate;
-(char)allowedToUseInstallLater;
-(char)isAutoUpdateEligible;
-(char)isMajorOSUpdateInternal;
-(SUMajorProduct *)majorProduct;
-(NSDate *)postDate;
-(NSArray *)applicationIdentifiersToClose;
-(char)isConfigData;
-(NSAttributedString *)licenseAgreement;
-(NSAttributedString *)firmwareWarning;
-(NSString *)currentLocalization;
-(NSString *)customTitleForUpdateAvailableNotification;
-(NSString *)customTextForUpdateAvailableNotification;
-(char)showPostInstallNotification;
-(NSString *)customTitleForPostInstallNotification;
-(NSString *)customTextForPostInstallNotification;
-(NSURL *)customURLForPostInstallNotification;
-(long long)autoInstallWithDelayInHours;
-(NSAttributedString *)longAttributedDescription;
-(NSDate *)adminDeferredToDate;
-(char)canRetry;
-(void)_setCurrentStatus:(id)arg1 ;
@end

