/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary;

@interface SSRSpeakerRecognitionModelContext : NSObject {

	NSURL* _configFilePath;
	NSDictionary* _voiceProfilesModelFilePaths;

}

@property (nonatomic,readonly) NSURL * configFilePath;                                  //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * voiceProfilesModelFilePaths;              //@synthesize voiceProfilesModelFilePaths=_voiceProfilesModelFilePaths - In the implementation block
-(NSURL *)configFilePath;
-(NSDictionary *)voiceProfilesModelFilePaths;
-(id)initWithConfigFilePath:(id)arg1 withModelFilePaths:(id)arg2 ;
@end

