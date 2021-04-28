/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCapabilities.h>

@protocol CNCapabilities <NSObject>
@property (nonatomic,readonly) char areTelephonyCallsSupported; 
@property (nonatomic,readonly) char isiMessageSupported; 
@property (nonatomic,readonly) char isFaceTimeVideoSupported; 
@property (nonatomic,readonly) char isFaceTimeAudioSupported; 
@property (nonatomic,readonly) char isPaySupported; 
@required
+(char)shouldUseLegacyMessages;
-(char)isFaceTimeVideoSupported;
-(char)isPaySupported;
-(char)areTelephonyCallsSupported;
-(char)isiMessageSupported;
-(char)isFaceTimeAudioSupported;

@end


@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>

@property (nonatomic,readonly) char areTelephonyCallsSupported; 
@property (nonatomic,readonly) char isiMessageSupported; 
@property (nonatomic,readonly) char isFaceTimeVideoSupported; 
@property (nonatomic,readonly) char isFaceTimeAudioSupported; 
@property (nonatomic,readonly) char isPaySupported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldUseLegacyMessages;
-(char)isFaceTimeVideoSupported;
-(char)isPaySupported;
-(char)areTelephonyCallsSupported;
-(char)isiMessageSupported;
-(char)isFaceTimeAudioSupported;
@end
