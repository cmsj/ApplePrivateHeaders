/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	char _overridePrimary;
	NSArray* _addresses;
	NSArray* _subnetMasks;
	NSArray* _includedRoutes;
	NSArray* _excludedRoutes;
	long long _configMethod;
	NSString* _router;

}

@property (assign) long long configMethod;               //@synthesize configMethod=_configMethod - In the implementation block
@property (copy) NSString * router;                      //@synthesize router=_router - In the implementation block
@property (assign) char overridePrimary;                 //@synthesize overridePrimary=_overridePrimary - In the implementation block
@property (readonly) NSArray * addresses;                //@synthesize addresses=_addresses - In the implementation block
@property (readonly) NSArray * subnetMasks;              //@synthesize subnetMasks=_subnetMasks - In the implementation block
@property (copy) NSArray * includedRoutes;               //@synthesize includedRoutes=_includedRoutes - In the implementation block
@property (copy) NSArray * excludedRoutes;               //@synthesize excludedRoutes=_excludedRoutes - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)initWithAddresses:(id)arg1 subnetMasks:(id)arg2 ;
-(void)setIncludedRoutes:(NSArray *)arg1 ;
-(long long)configMethod;
-(char)overridePrimary;
-(void)setConfigMethod:(long long)arg1 ;
-(void)setExcludedRoutes:(NSArray *)arg1 ;
-(void)setOverridePrimary:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)addresses;
-(NSString *)router;
-(char)hasDefaultRoute;
-(id)copyLegacyDictionary;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)subnetMasks;
-(NSArray *)includedRoutes;
-(NSArray *)excludedRoutes;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setRouter:(NSString *)arg1 ;
@end

