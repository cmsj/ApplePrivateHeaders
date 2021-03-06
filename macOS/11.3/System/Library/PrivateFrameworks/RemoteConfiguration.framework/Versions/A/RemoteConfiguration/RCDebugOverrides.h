/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/Versions/A/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCSerializable.h>

@class NSArray, NSString;

@interface RCDebugOverrides : NSObject <RCSerializable> {

	char _disableAbTesting;
	char _ignoreCache;
	char _enableExtraLogs;
	NSArray* _overrideSegmentSetIDs;
	NSArray* _additionalSegmentSetIDs;
	unsigned long long _configurationSource;
	unsigned long long _debugEnvironment;

}

@property (nonatomic,readonly) char disableAbTesting;                               //@synthesize disableAbTesting=_disableAbTesting - In the implementation block
@property (nonatomic,copy,readonly) NSArray * overrideSegmentSetIDs;                //@synthesize overrideSegmentSetIDs=_overrideSegmentSetIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * additionalSegmentSetIDs;              //@synthesize additionalSegmentSetIDs=_additionalSegmentSetIDs - In the implementation block
@property (nonatomic,readonly) char onlyUseFallbackURL; 
@property (nonatomic,readonly) unsigned long long configurationSource;              //@synthesize configurationSource=_configurationSource - In the implementation block
@property (nonatomic,readonly) unsigned long long debugEnvironment;                 //@synthesize debugEnvironment=_debugEnvironment - In the implementation block
@property (nonatomic,readonly) char ignoreCache;                                    //@synthesize ignoreCache=_ignoreCache - In the implementation block
@property (nonatomic,readonly) char enableExtraLogs;                                //@synthesize enableExtraLogs=_enableExtraLogs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDebugOverrides;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(char)ignoreCache;
-(unsigned long long)configurationSource;
-(char)enableExtraLogs;
-(id)initWithDisableAbTesting:(char)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(char)arg6 enableExtraLogs:(char)arg7 ;
-(char)disableAbTesting;
-(NSArray *)overrideSegmentSetIDs;
-(NSArray *)additionalSegmentSetIDs;
-(unsigned long long)debugEnvironment;
-(id)initWithDisableAbTesting:(char)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 onlyUseFallbackURL:(char)arg4 debugEnvironment:(unsigned long long)arg5 ;
-(id)initWithDisableAbTesting:(char)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(char)arg6 ;
-(char)onlyUseFallbackURL;
@end

