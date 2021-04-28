/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSLocalizableString : NSString {

	NSString* _stringsFileKey;
	NSString* _developmentLanguageString;

}

@property (copy,readonly) NSString * stringsFileKey; 
@property (copy,readonly) NSString * developmentLanguageString; 
+(char)supportsSecureCoding;
+(id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(NSString *)stringsFileKey;
-(void)setStringsFileKey:(NSString *)arg1 ;
-(NSString *)developmentLanguageString;
-(void)setDevelopmentLanguageString:(NSString *)arg1 ;
@end
