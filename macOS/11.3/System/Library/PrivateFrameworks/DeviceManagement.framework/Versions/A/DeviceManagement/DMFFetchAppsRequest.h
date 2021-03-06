/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest : DMFTaskRequest {

	char _deleteFeedback;
	char _managedAppsOnly;
	char _advanceTransientStates;
	unsigned long long _type;
	NSArray* _bundleIdentifiers;
	NSNumber* _storeItemIdentifier;
	NSURL* _manifestURL;
	NSArray* _propertyKeys;

}

@property (assign,nonatomic) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;                 //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (assign,nonatomic) char deleteFeedback;                       //@synthesize deleteFeedback=_deleteFeedback - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;              //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * manifestURL;                         //@synthesize manifestURL=_manifestURL - In the implementation block
@property (assign,nonatomic) char managedAppsOnly;                      //@synthesize managedAppsOnly=_managedAppsOnly - In the implementation block
@property (assign,nonatomic) char advanceTransientStates;               //@synthesize advanceTransientStates=_advanceTransientStates - In the implementation block
@property (nonatomic,copy) NSArray * propertyKeys;                      //@synthesize propertyKeys=_propertyKeys - In the implementation block
+(char)supportsSecureCoding;
+(id)permittedPlatforms;
+(char)isPermittedOnSystemConnection;
+(char)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSNumber *)storeItemIdentifier;
-(NSArray *)bundleIdentifiers;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(NSArray *)arg1 ;
-(char)deleteFeedback;
-(void)setDeleteFeedback:(char)arg1 ;
-(char)managedAppsOnly;
-(char)advanceTransientStates;
-(void)setManagedAppsOnly:(char)arg1 ;
-(void)setAdvanceTransientStates:(char)arg1 ;
@end

