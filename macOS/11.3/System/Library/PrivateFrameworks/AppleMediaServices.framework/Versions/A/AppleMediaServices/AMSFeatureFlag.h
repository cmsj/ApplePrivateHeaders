/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AMSFeatureFlag : NSObject {

	char _testable;
	char _enabled;
	char _defaultEnabled;
	char _userEnabled;
	char _hidden;
	NSString* _feature;
	NSString* _displayName;
	NSString* _featureDescription;
	NSString* _domain;
	NSString* _ITFE;
	NSString* _flagGroup;

}

@property (assign,getter=isHidden,nonatomic) char hidden;                              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * feature;                                         //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * featureDescription;                              //@synthesize featureDescription=_featureDescription - In the implementation block
@property (nonatomic,copy) NSString * domain;                                          //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * ITFE;                                            //@synthesize ITFE=_ITFE - In the implementation block
@property (nonatomic,copy) NSString * flagGroup;                                       //@synthesize flagGroup=_flagGroup - In the implementation block
@property (assign,getter=isTestable,nonatomic) char testable;                          //@synthesize testable=_testable - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isDefaultEnabled,nonatomic) char defaultEnabled;              //@synthesize defaultEnabled=_defaultEnabled - In the implementation block
@property (assign,getter=isUserEnabled,nonatomic) char userEnabled;                    //@synthesize userEnabled=_userEnabled - In the implementation block
+(id)allFlagGroupsIncludingHidden:(char)arg1 ;
+(id)flagForFeature:(id)arg1 domain:(id)arg2 ;
+(void)addNewITFEFeaturesWithNames:(id)arg1 ;
+(void)setNonProfileITFEFeatureName:(id)arg1 toValue:(id)arg2 ;
+(id)flagGroupWithName:(id)arg1 includingHidden:(char)arg2 ;
+(void)setFlagGroup:(id)arg1 enabled:(char)arg2 error:(id*)arg3 ;
+(id)fetchProfileITFEFeatures;
+(id)fetchITFEFeatures;
+(void)enableFlagForFeature:(id)arg1 domain:(id)arg2 error:(id*)arg3 ;
+(void)disableFlagForFeature:(id)arg1 domain:(id)arg2 error:(id*)arg3 ;
+(id)allFlagGroups;
+(id)flagGroupWithName:(id)arg1 ;
+(void)enableFlagGroup:(id)arg1 error:(id*)arg2 ;
+(void)disableFlagGroup:(id)arg1 error:(id*)arg2 ;
-(NSString *)domain;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)feature;
-(void)setFeature:(NSString *)arg1 ;
-(void)setUserEnabled:(char)arg1 ;
-(void)setTestable:(char)arg1 ;
-(void)setITFE:(NSString *)arg1 ;
-(void)setFeatureDescription:(NSString *)arg1 ;
-(void)setFlagGroup:(NSString *)arg1 ;
-(void)setDefaultEnabled:(char)arg1 ;
-(char)isTestable;
-(char)isDefaultEnabled;
-(NSString *)featureDescription;
-(NSString *)ITFE;
-(NSString *)flagGroup;
-(char)isUserEnabled;
@end

