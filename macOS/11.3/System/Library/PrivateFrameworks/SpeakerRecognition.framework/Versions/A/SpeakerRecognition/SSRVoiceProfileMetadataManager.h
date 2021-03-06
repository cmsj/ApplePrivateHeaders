/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSRVoiceProfileMetadataManager : NSObject
+(char)isUtteranceImplicitlyTrained:(id)arg1 ;
+(id)recordedTimeStampOfFile:(id)arg1 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2 ;
+(id)getUtteranceEnrollmentType:(id)arg1 ;
+(id)recordedTimeStampFromFileName:(id)arg1 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg1 enrollmentType:(id)arg2 isHandheldEnrollment:(char)arg3 triggerSource:(id)arg4 audioInput:(id)arg5 otherBiometricResult:(unsigned long long)arg6 containsPayload:(char)arg7 ;
@end

