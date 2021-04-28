/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/_LSDClient.h>
#import <libobjc.A.dylib/_LSDTrustedSignatureProtocol.h>

@interface _LSDTrustedSignatureClient : _LSDClient <_LSDTrustedSignatureProtocol>
-(void)trust:(char)arg1 URL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateTrustExpirationDateForURL:(id)arg1 ;
-(void)getIsTrustedForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isURLQuarantined:(id)arg1 ;
-(id)trustedSignatureForURL:(id)arg1 error:(id*)arg2 ;
@end
