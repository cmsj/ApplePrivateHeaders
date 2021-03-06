/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSRAESKeyManager : NSObject
+(id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+(id)getVoiceTriggerProfilesAESKey;
+(id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 shouldGenerateIfNecessary:(char)arg4 ;
+(id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1 ;
+(char)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 ;
+(char)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
@end

