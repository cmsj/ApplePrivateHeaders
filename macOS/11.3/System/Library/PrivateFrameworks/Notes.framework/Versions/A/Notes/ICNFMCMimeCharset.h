/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ICNFMCMimeCharset : NSObject {

	char _useBase64InHeaders;
	char _canBeUsedForOutgoingMessages;
	unsigned long long _encoding;
	NSString* _charsetName;

}

@property (readonly) unsigned long long encoding;                              //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,copy,readonly) NSString * charsetName;                    //@synthesize charsetName=_charsetName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) char useBase64InHeaders;                        //@synthesize useBase64InHeaders=_useBase64InHeaders - In the implementation block
@property (nonatomic,readonly) char canBeUsedForOutgoingMessages;              //@synthesize canBeUsedForOutgoingMessages=_canBeUsedForOutgoingMessages - In the implementation block
+(id)charsetForEncoding:(unsigned long long)arg1 ;
+(id)preferredMimeCharset;
+(id)allMimeCharsets;
+(unsigned long long)encodingVariantForEncoding:(unsigned long long)arg1 address:(id)arg2 ;
+(id)encodingVariantsForRecipients:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)displayName;
-(unsigned long long)encoding;
-(NSString *)charsetName;
-(id)initWithCFEncoding:(unsigned)arg1 ;
-(char)canBeUsedForOutgoingMessages;
-(char)useBase64InHeaders;
@end
