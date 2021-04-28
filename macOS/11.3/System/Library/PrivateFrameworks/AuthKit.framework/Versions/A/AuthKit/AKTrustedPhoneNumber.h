/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface AKTrustedPhoneNumber : NSObject {

	NSNumber* _identifier;
	NSString* _numberWithDialCode;
	NSString* _obfuscatedNumber;
	NSString* _pushMode;

}

@property (nonatomic,retain) NSNumber * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * numberWithDialCode;              //@synthesize numberWithDialCode=_numberWithDialCode - In the implementation block
@property (nonatomic,retain) NSString * obfuscatedNumber;                //@synthesize obfuscatedNumber=_obfuscatedNumber - In the implementation block
@property (nonatomic,retain) NSString * pushMode;                        //@synthesize pushMode=_pushMode - In the implementation block
-(NSString *)numberWithDialCode;
-(void)setNumberWithDialCode:(NSString *)arg1 ;
-(NSString *)obfuscatedNumber;
-(void)setObfuscatedNumber:(NSString *)arg1 ;
-(NSString *)pushMode;
-(void)setPushMode:(NSString *)arg1 ;
-(id)description;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
@end
