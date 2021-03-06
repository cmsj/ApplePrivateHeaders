/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ECMIMECharset.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCMimeCharset : NSObject <ECMIMECharset, NSSecureCoding> {

	char _canBeUsedForOutgoingMessages;
	unsigned long long _encoding;
	NSString* _charsetName;

}

@property (readonly) unsigned long long encoding;                              //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,copy,readonly) NSString * charsetName;                    //@synthesize charsetName=_charsetName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) char canBeUsedForOutgoingMessages;              //@synthesize canBeUsedForOutgoingMessages=_canBeUsedForOutgoingMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)charsetForEncoding:(unsigned long long)arg1 ;
+(id)preferredMimeCharset;
+(id)allMimeCharsets;
+(unsigned long long)encodingVariantForEncoding:(unsigned long long)arg1 address:(id)arg2 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(unsigned long long)encoding;
-(NSString *)charsetName;
-(id)initWithCFEncoding:(unsigned)arg1 ;
-(char)canBeUsedForOutgoingMessages;
@end

