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

@class NSError, NSDate, AFExperiment, NSDictionary;

@interface AFEnablementConfigurationProviderParameters : NSObject <NSCopying, NSSecureCoding> {

	char _newUser;
	char _recognitionLanguageWithMultipleOutputVoicesExists;
	long long _enablementFlow;
	NSError* _userStatusFetchError;
	NSDate* _dateStartedResolvingUserStatus;
	NSDate* _dateEndedResolvingUserStatus;
	AFExperiment* _experiment;
	NSError* _experimentFetchError;
	NSDate* _dateStartedResolvingExperiment;
	NSDate* _dateEndedResolvingExperiment;
	NSDictionary* _outputVoiceCountForRecognitionLanguage;

}

@property (nonatomic,readonly) long long enablementFlow;                                                //@synthesize enablementFlow=_enablementFlow - In the implementation block
@property (nonatomic,readonly) char newUser;                                                            //@synthesize newUser=_newUser - In the implementation block
@property (nonatomic,copy,readonly) NSError * userStatusFetchError;                                     //@synthesize userStatusFetchError=_userStatusFetchError - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateStartedResolvingUserStatus;                            //@synthesize dateStartedResolvingUserStatus=_dateStartedResolvingUserStatus - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateEndedResolvingUserStatus;                              //@synthesize dateEndedResolvingUserStatus=_dateEndedResolvingUserStatus - In the implementation block
@property (nonatomic,copy,readonly) AFExperiment * experiment;                                          //@synthesize experiment=_experiment - In the implementation block
@property (nonatomic,copy,readonly) NSError * experimentFetchError;                                     //@synthesize experimentFetchError=_experimentFetchError - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateStartedResolvingExperiment;                            //@synthesize dateStartedResolvingExperiment=_dateStartedResolvingExperiment - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateEndedResolvingExperiment;                              //@synthesize dateEndedResolvingExperiment=_dateEndedResolvingExperiment - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * outputVoiceCountForRecognitionLanguage;              //@synthesize outputVoiceCountForRecognitionLanguage=_outputVoiceCountForRecognitionLanguage - In the implementation block
@property (nonatomic,readonly) char recognitionLanguageWithMultipleOutputVoicesExists;                  //@synthesize recognitionLanguageWithMultipleOutputVoicesExists=_recognitionLanguageWithMultipleOutputVoicesExists - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(long long)enablementFlow;
-(char)newUser;
-(char)recognitionLanguageWithMultipleOutputVoicesExists;
-(NSError *)userStatusFetchError;
-(NSDate *)dateStartedResolvingUserStatus;
-(NSDate *)dateEndedResolvingUserStatus;
-(AFExperiment *)experiment;
-(NSError *)experimentFetchError;
-(NSDate *)dateStartedResolvingExperiment;
-(NSDate *)dateEndedResolvingExperiment;
-(NSDictionary *)outputVoiceCountForRecognitionLanguage;
-(id)initWithEnablementFlow:(long long)arg1 newUser:(char)arg2 userStatusFetchError:(id)arg3 dateStartedResolvingUserStatus:(id)arg4 dateEndedResolvingUserStatus:(id)arg5 experiment:(id)arg6 experimentFetchError:(id)arg7 dateStartedResolvingExperiment:(id)arg8 dateEndedResolvingExperiment:(id)arg9 outputVoiceCountForRecognitionLanguage:(id)arg10 recognitionLanguageWithMultipleOutputVoicesExists:(char)arg11 ;
@end

