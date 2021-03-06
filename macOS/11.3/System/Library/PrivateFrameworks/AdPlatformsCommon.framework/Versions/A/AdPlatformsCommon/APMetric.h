/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/Versions/A/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdPlatformsCommon/AdPlatformsCommon-Structs.h>
#import <libobjc.A.dylib/APMetricProtocol.h>

@class NSDate, NSString, NSDictionary;

@interface APMetric : NSObject <APMetricProtocol> {

	char _areNetworkDates;
	long long _route;
	long long _metric;
	NSDate* _timestamp;
	NSString* _contentIdentifier;
	NSString* _contextIdentifier;
	NSString* _identifier;
	NSString* _os;
	NSString* _osVersion;
	NSString* _osBuild;
	NSString* _deviceModel;
	NSString* _clientBundleIdentifier;
	NSString* _deviceIdentifier;
	NSString* _userIdentifier;
	NSDictionary* _properties;
	NSDictionary* _internalProperties;
	long long _options;

}

@property (nonatomic,retain) NSDate * timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * os;                                                //@synthesize os=_os - In the implementation block
@property (nonatomic,retain) NSString * osVersion;                                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,retain) NSString * osBuild;                                           //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                                       //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * clientBundleIdentifier;                            //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * userIdentifier;                                    //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                                    //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) char areNetworkDates;                                         //@synthesize areNetworkDates=_areNetworkDates - In the implementation block
@property (nonatomic,readonly) long long route;                                            //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) long long metric;                                           //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) NSString * contentIdentifier;                               //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * contextIdentifier;                               //@synthesize contextIdentifier=_contextIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSDictionary * internalProperties;                          //@synthesize internalProperties=_internalProperties - In the implementation block
@property (nonatomic,readonly) long long options;                                          //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverDictionaryRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_options;
-(NSString *)userIdentifier;
-(NSString *)identifier;
-(long long)options;
-(NSString *)bundleIdentifier;
-(id)_properties;
-(NSDate *)timestamp;
-(NSString *)deviceIdentifier;
-(NSString *)osBuild;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(long long)metric;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)osVersion;
-(NSString *)contentIdentifier;
-(long long)route;
-(NSString *)os;
-(void)setOs:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)contextIdentifier;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(NSString *)clientBundleIdentifier;
-(void)initDeviceInfo;
-(void)initUndefinedDeviceInfo;
-(char)validateMetricAndSetupIdentifiers:(id)arg1 ;
-(NSDictionary *)internalProperties;
-(void)_replaceIdentifierWithIdentifier:(id)arg1 ;
-(id)_serverDictionaryRepresentation;
-(id)_optionsArray;
-(char)areNetworkDates;
-(id)_descriptionWithFormat:(id)arg1 ;
-(id)initWithRoute:(long long)arg1 metric:(long long)arg2 contentIdentifier:(id)arg3 contextIdentifier:(id)arg4 identifier:(id)arg5 properties:(id)arg6 internalProperties:(id)arg7 options:(long long)arg8 ;
-(id)duplicateMetricReplacingIdentifier:(id)arg1 ;
-(void)addInternalPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)serverDictionaryRepresentation;
-(void)setAreNetworkDates:(char)arg1 ;
@end

