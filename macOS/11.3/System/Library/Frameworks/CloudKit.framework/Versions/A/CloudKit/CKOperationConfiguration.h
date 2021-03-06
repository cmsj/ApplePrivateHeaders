/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class CKContainer, NSObject, NSString, NSDictionary, NSNumber, NSMutableDictionary, CKSchedulerActivity;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	char _allowsCellularAccess;
	char _longLived;
	char _preferAnonymousRequests;
	char _automaticallyRetryNetworkFailures;
	char _xpcActivityAutomaticallyDefer;
	char _discretionarySchedulingForEntireOperation;
	char _allowsBackgroundNetworking;
	char _isCloudKitSupportOperation;
	char _hasQualityOfService;
	char _hasContainer;
	char _hasAllowsCellularAccess;
	char _hasLongLived;
	char _hasTimeoutIntervalForRequest;
	char _hasTimeoutIntervalForResource;
	char _hasAutomaticallyRetryNetworkFailures;
	char _hasDiscretionaryNetworkBehavior;
	char _hasXPCActivity;
	char _hasXPCActivityAutomaticallyDefer;
	char _hasSchedulerActivity;
	char _hasDiscretionarySchedulingForEntireOperation;
	char _hasPreferAnonymousRequests;
	char _hasAllowsBackgroundNetworking;
	char _hasSourceApplicationBundleIdentifier;
	char _hasSourceApplicationSecondaryIdentifier;
	char _hasApplicationBundleIdentifierOverrideForContainerAccess;
	char _hasApplicationBundleIdentifierOverrideForNetworkAttribution;
	char _hasAdditionalRequestHTTPHeaders;
	char _hasIsCloudKitSupportOperation;
	char _hasCacheDeleteAvailableSpaceClass;
	CKContainer* _container;
	long long _qualityOfService;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _discretionaryNetworkBehavior;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSDictionary* _additionalRequestHTTPHeaders;
	NSNumber* _cacheDeleteAvailableSpaceClass;
	NSMutableDictionary* _unitTestOverrides;
	CKSchedulerActivity* _schedulerActivity;

}

@property (assign,nonatomic) char hasQualityOfService;                                                       //@synthesize hasQualityOfService=_hasQualityOfService - In the implementation block
@property (assign,nonatomic) char hasContainer;                                                              //@synthesize hasContainer=_hasContainer - In the implementation block
@property (assign,nonatomic) char hasAllowsCellularAccess;                                                   //@synthesize hasAllowsCellularAccess=_hasAllowsCellularAccess - In the implementation block
@property (assign,nonatomic) char hasLongLived;                                                              //@synthesize hasLongLived=_hasLongLived - In the implementation block
@property (assign,nonatomic) char hasTimeoutIntervalForRequest;                                              //@synthesize hasTimeoutIntervalForRequest=_hasTimeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) char hasTimeoutIntervalForResource;                                             //@synthesize hasTimeoutIntervalForResource=_hasTimeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) char hasAutomaticallyRetryNetworkFailures;                                      //@synthesize hasAutomaticallyRetryNetworkFailures=_hasAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) char hasDiscretionaryNetworkBehavior;                                           //@synthesize hasDiscretionaryNetworkBehavior=_hasDiscretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) char hasXPCActivity;                                                            //@synthesize hasXPCActivity=_hasXPCActivity - In the implementation block
@property (assign,nonatomic) char hasXPCActivityAutomaticallyDefer;                                          //@synthesize hasXPCActivityAutomaticallyDefer=_hasXPCActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) char hasSchedulerActivity;                                                      //@synthesize hasSchedulerActivity=_hasSchedulerActivity - In the implementation block
@property (assign,nonatomic) char hasDiscretionarySchedulingForEntireOperation;                              //@synthesize hasDiscretionarySchedulingForEntireOperation=_hasDiscretionarySchedulingForEntireOperation - In the implementation block
@property (assign,nonatomic) char hasPreferAnonymousRequests;                                                //@synthesize hasPreferAnonymousRequests=_hasPreferAnonymousRequests - In the implementation block
@property (assign,nonatomic) char hasAllowsBackgroundNetworking;                                             //@synthesize hasAllowsBackgroundNetworking=_hasAllowsBackgroundNetworking - In the implementation block
@property (assign,nonatomic) char hasSourceApplicationBundleIdentifier;                                      //@synthesize hasSourceApplicationBundleIdentifier=_hasSourceApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) char hasSourceApplicationSecondaryIdentifier;                                   //@synthesize hasSourceApplicationSecondaryIdentifier=_hasSourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) char hasApplicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize hasApplicationBundleIdentifierOverrideForContainerAccess=_hasApplicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (assign,nonatomic) char hasApplicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize hasApplicationBundleIdentifierOverrideForNetworkAttribution=_hasApplicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (assign,nonatomic) char hasAdditionalRequestHTTPHeaders;                                           //@synthesize hasAdditionalRequestHTTPHeaders=_hasAdditionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) char hasIsCloudKitSupportOperation;                                             //@synthesize hasIsCloudKitSupportOperation=_hasIsCloudKitSupportOperation - In the implementation block
@property (assign,nonatomic) char hasCacheDeleteAvailableSpaceClass;                                         //@synthesize hasCacheDeleteAvailableSpaceClass=_hasCacheDeleteAvailableSpaceClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unitTestOverrides;                                        //@synthesize unitTestOverrides=_unitTestOverrides - In the implementation block
@property (assign,nonatomic) char xpcActivityAutomaticallyDefer;                                             //@synthesize xpcActivityAutomaticallyDefer=_xpcActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) char discretionarySchedulingForEntireOperation;                                 //@synthesize discretionarySchedulingForEntireOperation=_discretionarySchedulingForEntireOperation - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationSecondaryIdentifier;                                 //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) char automaticallyRetryNetworkFailures;                                         //@synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;                                           //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (nonatomic,copy) CKSchedulerActivity * schedulerActivity;                                          //@synthesize schedulerActivity=_schedulerActivity - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;                                //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) char preferAnonymousRequests;                                                   //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForContainerAccess;                 //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;              //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;                                     //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                                      //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) char isCloudKitSupportOperation;                                                //@synthesize isCloudKitSupportOperation=_isCloudKitSupportOperation - In the implementation block
@property (nonatomic,copy) NSNumber * cacheDeleteAvailableSpaceClass;                                        //@synthesize cacheDeleteAvailableSpaceClass=_cacheDeleteAvailableSpaceClass - In the implementation block
@property (assign,nonatomic) char allowsBackgroundNetworking;                                                //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                                        //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                                     //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) char allowsCellularAccess;                                                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,getter=isLongLived,nonatomic) char longLived;                                              //@synthesize longLived=_longLived - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                                               //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                                              //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKContainer *)container;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setAutomaticallyRetryNetworkFailures:(char)arg1 ;
-(void)setAllowsCellularAccess:(char)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(double)timeoutIntervalForResource;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(char)arg1 private:(char)arg2 shouldExpand:(char)arg3 ;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(NSMutableDictionary *)unitTestOverrides;
-(char)isLongLived;
-(void)setUnitTestOverrides:(NSMutableDictionary *)arg1 ;
-(void)setSchedulerActivity:(CKSchedulerActivity *)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(void)setApplicationBundleIdentifierOverride:(id)arg1 ;
-(unsigned long long)discretionaryNetworkBehavior;
-(char)xpcActivityAutomaticallyDefer;
-(void)setLongLived:(char)arg1 ;
-(id)resolveAgainstGenericConfiguration:(id)arg1 ;
-(char)automaticallyRetryNetworkFailures;
-(char)hasQualityOfService;
-(char)allowsCellularAccess;
-(double)timeoutIntervalForRequest;
-(char)preferAnonymousRequests;
-(void)setPreferAnonymousRequests:(char)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(char)allowsBackgroundNetworking;
-(char)isCloudKitSupportOperation;
-(NSNumber *)cacheDeleteAvailableSpaceClass;
-(char)hasContainer;
-(void)setQualityOfServiceWithoutQoSChecks:(long long)arg1 ;
-(char)hasAllowsCellularAccess;
-(char)hasLongLived;
-(char)hasTimeoutIntervalForRequest;
-(char)hasTimeoutIntervalForResource;
-(char)hasAutomaticallyRetryNetworkFailures;
-(char)hasDiscretionaryNetworkBehavior;
-(char)hasSchedulerActivity;
-(CKSchedulerActivity *)schedulerActivity;
-(char)hasXPCActivity;
-(char)hasXPCActivityAutomaticallyDefer;
-(void)setXpcActivityAutomaticallyDefer:(char)arg1 ;
-(char)hasDiscretionarySchedulingForEntireOperation;
-(char)discretionarySchedulingForEntireOperation;
-(void)setDiscretionarySchedulingForEntireOperation:(char)arg1 ;
-(char)hasPreferAnonymousRequests;
-(char)hasAllowsBackgroundNetworking;
-(void)setAllowsBackgroundNetworking:(char)arg1 ;
-(char)hasSourceApplicationBundleIdentifier;
-(char)hasSourceApplicationSecondaryIdentifier;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(char)hasApplicationBundleIdentifierOverrideForContainerAccess;
-(char)hasApplicationBundleIdentifierOverrideForNetworkAttribution;
-(char)hasAdditionalRequestHTTPHeaders;
-(char)hasIsCloudKitSupportOperation;
-(void)setIsCloudKitSupportOperation:(char)arg1 ;
-(char)hasCacheDeleteAvailableSpaceClass;
-(void)setCacheDeleteAvailableSpaceClass:(NSNumber *)arg1 ;
-(void)setHasContainer:(char)arg1 ;
-(void)setHasQualityOfService:(char)arg1 ;
-(void)setHasAllowsCellularAccess:(char)arg1 ;
-(void)setHasLongLived:(char)arg1 ;
-(void)setHasTimeoutIntervalForRequest:(char)arg1 ;
-(void)setHasTimeoutIntervalForResource:(char)arg1 ;
-(void)setHasAutomaticallyRetryNetworkFailures:(char)arg1 ;
-(void)setHasDiscretionaryNetworkBehavior:(char)arg1 ;
-(void)setHasXPCActivity:(char)arg1 ;
-(void)setHasXPCActivityAutomaticallyDefer:(char)arg1 ;
-(void)setHasSchedulerActivity:(char)arg1 ;
-(void)setHasDiscretionarySchedulingForEntireOperation:(char)arg1 ;
-(void)setHasPreferAnonymousRequests:(char)arg1 ;
-(void)setHasIsCloudKitSupportOperation:(char)arg1 ;
-(void)setHasCacheDeleteAvailableSpaceClass:(char)arg1 ;
-(void)setHasAllowsBackgroundNetworking:(char)arg1 ;
-(void)setHasSourceApplicationBundleIdentifier:(char)arg1 ;
-(void)setHasSourceApplicationSecondaryIdentifier:(char)arg1 ;
-(void)setHasApplicationBundleIdentifierOverrideForContainerAccess:(char)arg1 ;
-(void)setHasApplicationBundleIdentifierOverrideForNetworkAttribution:(char)arg1 ;
-(void)setHasAdditionalRequestHTTPHeaders:(char)arg1 ;
-(void)setAutomaticallyRetryNetworkFailuresIfNotSet:(char)arg1 ;
@end

