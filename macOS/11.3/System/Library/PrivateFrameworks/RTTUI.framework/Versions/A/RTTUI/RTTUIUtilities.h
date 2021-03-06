/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/Versions/A/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <RTTUI/RTTUI-Structs.h>
@class NSNumber, NSObject;

@interface RTTUIUtilities : NSObject {

	char _inUnitTestMode;
	char _headphoneJackSupportsTTY;
	NSNumber* _overrideLTR;
	NSObject*<OS_dispatch_queue> _callCenterQueue;

}

@property (assign,nonatomic) char headphoneJackSupportsTTY;                             //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callCenterQueue;              //@synthesize callCenterQueue=_callCenterQueue - In the implementation block
@property (assign,nonatomic) char inUnitTestMode;                                       //@synthesize inUnitTestMode=_inUnitTestMode - In the implementation block
@property (nonatomic,retain) NSNumber * overrideLTR;                                    //@synthesize overrideLTR=_overrideLTR - In the implementation block
+(id)sharedUtilityProvider;
+(char)contactIsTTYContact:(id)arg1 ;
+(char)relayIsSupported;
+(char)isRTTSupported;
+(char)hardwareTTYIsSupported;
+(char)softwareTTYIsSupported;
+(id)relayPhoneNumber;
+(char)isOnlyRTTSupported;
+(char)shouldUseRTT;
+(void)displayCallPromptForContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)cancelCallPromptDisplay;
+(char)ttyShouldBeRealtimeForCall:(id)arg1 ;
+(id)ASCIINumericStringFromString:(CFStringRef)arg1 ;
+(id)flipImageHorizontally:(id)arg1 ;
+(void)contactIsTTYContact:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
+(id)phoneNumberStringFromString:(id)arg1 ;
+(id)rttDisplayName:(long long)arg1 forSubscriptionContextUUID:(id)arg2 ;
-(id)init;
-(char)contactIsTTYContact:(id)arg1 ;
-(unsigned long long)currentPreferredTransportMethod;
-(id)conversationForCallUID:(id)arg1 ;
-(char)deleteConversationWithCallUID:(id)arg1 ;
-(char)headphoneJackSupportsTTY;
-(id)myPhoneNumber;
-(id)ttyMeContact;
-(void)setHeadphoneJackSupportsTTY:(char)arg1 ;
-(void)setInUnitTestMode:(char)arg1 ;
-(char)inUnitTestMode;
-(void)setCallCenterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)ttyIconWithTint:(id)arg1 ;
-(long long)textAlignmentForMe:(char)arg1 ;
-(id)bubbleColorForMe:(char)arg1 ;
-(CGSize)textInsetForMe:(char)arg1 ;
-(CGSize)bubbleInsetForMe:(char)arg1 ;
-(id)largeTTYIconWithTint:(id)arg1 ;
-(id)tintedTTYIcon;
-(id)bubbleFillForMe:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)callCenterQueue;
-(NSNumber *)overrideLTR;
-(id)transcriptStringForConversation:(id)arg1 ;
-(void)setOverrideLTR:(NSNumber *)arg1 ;
@end

