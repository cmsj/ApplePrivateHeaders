/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/Versions/A/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMAssistantINMessageConverter : NSObject
+(id)expressiveSendIdFromMessageEffectType:(long long)arg1 ;
+(id)INMessageForOutgoingIMMessage:(id)arg1 toChat:(id)arg2 personProvider:(id)arg3 ;
+(id)messageEffectTypeToExpressiveSendIdDictionary;
+(id)INMessageForSPIMessage:(id)arg1 personProvider:(id)arg2 ;
+(id)makeINMessage:(long long)arg1 message:(id)arg2 numberOfAttachments:(id)arg3 personProvider:(id)arg4 referencedINMessage:(id)arg5 content:(id)arg6 ;
+(id)INPersonsForSPIHandles:(id)arg1 personProvider:(id)arg2 ;
+(id)__INSpeakableStringForMessage:(id)arg1 ;
+(long long)messageEffectTypeFromExpressiveSendId:(id)arg1 ;
+(id)__INMessageLinkMetadataForLPLinkMetadata:(id)arg1 ;
+(id)GroupAttachments:(id)arg1 ;
+(id)spiHandleForIMHandle:(id)arg1 isMe:(char)arg2 ;
+(id)__INSpeakableStringForChat:(id)arg1 ;
+(id)INMessagesForSPIMessage:(id)arg1 personProvider:(id)arg2 ;
@end

