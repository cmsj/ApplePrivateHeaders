/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/Versions/A/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <Foundation/NSString.h>

@class NSString, NSArray;

@interface UNLocalizedString : NSString {

	NSString* _key;
	NSArray* _arguments;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * key;                   //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;              //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                 //@synthesize value=_value - In the implementation block
+(char)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg1 arguments:(id)arg2 value:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)init;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(Class)classForKeyedArchiver;
-(NSArray *)arguments;
-(NSString *)key;
-(char)_allowsDirectEncoding;
-(id)_initWithKey:(id)arg1 arguments:(id)arg2 value:(id)arg3 ;
-(id)un_localizedStringArguments;
-(id)un_localizedStringKey;
-(id)un_localizedStringValue;
@end

