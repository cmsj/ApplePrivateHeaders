/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSAttributedString, NSDictionary;

@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding> {

	NSAttributedString* _original;
	NSDictionary* _formatConfiguration;

}
+(const CFStringRef)copyStringWithMarkup:(CFStringRef)arg1 formatConfiguration:(CFDictionaryRef)arg2 ;
+(const CFStringRef)createStringRequiringInflectionWithFormat:(CFStringRef)arg1 formatOptions:(CFDictionaryRef)arg2 arguments:(_va_list_tag*)arg3 ;
+(id)whitelistedStringWithAttributedString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(const char*)_fastCStringContents:(char)arg1 ;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(char)isEqualToString:(id)arg1 ;
-(const unsigned short*)_fastCharacterContents;
-(unsigned long long)fastestEncoding;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(id)__baseAttributedString;
-(id)initWithAttributedStringMarkup:(id)arg1 formatConfiguration:(id)arg2 ;
-(id)_initWithAttributedString:(id)arg1 ;
@end

