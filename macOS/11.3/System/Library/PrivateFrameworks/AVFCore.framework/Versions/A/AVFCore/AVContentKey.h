/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVContentKeySpecifier;

@interface AVContentKey : NSObject {

	OpaqueFigCPECryptorRef _cryptor;
	AVContentKeySpecifier* contentKeySpecifier;

}

@property (readonly) AVContentKeySpecifier * contentKeySpecifier; 
+(id)contentKeyWithSpecifier:(id)arg1 andCryptor:(OpaqueFigCPECryptorRef)arg2 ;
-(void)dealloc;
-(AVContentKeySpecifier *)contentKeySpecifier;
-(id)initWithSpecifier:(id)arg1 andCryptor:(OpaqueFigCPECryptorRef)arg2 ;
-(OpaqueFigCPECryptorRef)getCryptor;
@end

