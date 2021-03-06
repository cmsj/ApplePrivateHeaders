/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString, NSURL;

@interface AFExperimentServerConfigurationInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	NSString* _configurationIdentifier;
	NSURL* _configurationURL;
	double _maxTimeToSync;

}

@property (nonatomic,copy,readonly) NSString * configurationIdentifier;              //@synthesize configurationIdentifier=_configurationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * configurationURL;                        //@synthesize configurationURL=_configurationURL - In the implementation block
@property (nonatomic,readonly) double maxTimeToSync;                                 //@synthesize maxTimeToSync=_maxTimeToSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSString *)configurationIdentifier;
-(double)maxTimeToSync;
-(NSURL *)configurationURL;
-(id)initWithConfigurationIdentifier:(id)arg1 configurationURL:(id)arg2 maxTimeToSync:(double)arg3 ;
@end

