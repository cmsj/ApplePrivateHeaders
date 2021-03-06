/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolSecurityConnection, RWIProtocolSecurityCertificate;

@interface RWIProtocolSecurity : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolSecurityConnection * connection; 
@property (nonatomic,retain) RWIProtocolSecurityCertificate * certificate; 
-(RWIProtocolSecurityConnection *)connection;
-(void)setConnection:(RWIProtocolSecurityConnection *)arg1 ;
-(RWIProtocolSecurityCertificate *)certificate;
-(void)setCertificate:(RWIProtocolSecurityCertificate *)arg1 ;
@end

