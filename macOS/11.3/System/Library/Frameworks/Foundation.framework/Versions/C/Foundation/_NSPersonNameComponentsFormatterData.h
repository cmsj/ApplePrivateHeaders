/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NPNameParser;

@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding> {

	long long _style;
	char _phonetic;
	char _forceFamilyNameFirst;
	char _forceGivenNameFirst;
	char _ignoresFallbacks;
	NSLocale* _locale;
	NPNameParser* _nameParser;

}

@property (assign) long long style;                        //@synthesize style=_style - In the implementation block
@property (assign) char phonetic;                          //@synthesize phonetic=_phonetic - In the implementation block
@property (assign) char forceFamilyNameFirst;              //@synthesize forceFamilyNameFirst=_forceFamilyNameFirst - In the implementation block
@property (assign) char forceGivenNameFirst;               //@synthesize forceGivenNameFirst=_forceGivenNameFirst - In the implementation block
@property (assign) char ignoresFallbacks;                  //@synthesize ignoresFallbacks=_ignoresFallbacks - In the implementation block
@property (copy) NSLocale * locale;                        //@synthesize locale=_locale - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(long long)style;
-(char)phonetic;
-(char)forceFamilyNameFirst;
-(char)forceGivenNameFirst;
-(char)ignoresFallbacks;
-(void)setStyle:(long long)arg1 ;
-(void)setPhonetic:(char)arg1 ;
-(void)setForceFamilyNameFirst:(char)arg1 ;
-(void)setForceGivenNameFirst:(char)arg1 ;
-(void)setIgnoresFallbacks:(char)arg1 ;
@end

