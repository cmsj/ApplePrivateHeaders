/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NviUtils : NSObject
+(id)timeStampString;
+(id)strRepForNviSignalType:(unsigned long long)arg1 ;
+(id)strRepForNviDataSourceType:(unsigned long long)arg1 ;
+(char)isNviEnabled;
+(id)strRepForNviSignalMask:(unsigned long long)arg1 ;
+(unsigned long long)nviSignalTypeForStr:(id)arg1 ;
+(unsigned long long)nviDataSourceTypeForStr:(id)arg1 ;
+(char)_createDirAtPath:(id)arg1 ;
+(long long)getVoiceTriggerEndSampleCountFromVTEI:(id)arg1 ;
+(double)getVoiceTriggerEndSecsFromVTEI:(id)arg1 ;
+(id)readJsonDictionaryAt:(id)arg1 ;
+(id)getValueFromDictionaryOfDictionaries:(id)arg1 keypath:(id)arg2 ;
+(char)createDirAtPath:(id)arg1 ;
@end

