/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/EmailCore-Structs.h>
#import <EmailCore/ECAuthScheme.h>

@interface ECGSSAPIAuthScheme : ECAuthScheme
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)gssapiAuthScheme;
-(void)dealloc;
-(id)name;
-(id)humanReadableName;
-(char)requiresPassword;
-(unsigned)applescriptScheme;
-(id)supportedSASLMechanisms;
@end

