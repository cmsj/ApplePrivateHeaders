/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Foundation/NSString.h>

@class NSString, NSArray, NSURL;

@interface INDeferredLocalizedString : NSString {

	NSString* _formatKey;
	NSString* _table;
	NSArray* _arguments;
	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSString* _cachedLocalization;

}

@property (copy,readonly) NSString * _formatKey;                       //@synthesize formatKey=_formatKey - In the implementation block
@property (copy,readonly) NSString * _table;                           //@synthesize table=_table - In the implementation block
@property (copy,readonly) NSArray * _arguments;                        //@synthesize arguments=_arguments - In the implementation block
@property (copy,readonly) NSString * _bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy,readonly) NSURL * _bundleURL;                          //@synthesize bundleURL=_bundleURL - In the implementation block
@property (copy,readonly) NSString * _cachedLocalization;              //@synthesize cachedLocalization=_cachedLocalization - In the implementation block
+(void)initialize;
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)_bundleURL;
-(NSString *)_bundleIdentifier;
-(Class)classForKeyedArchiver;
-(NSArray *)_arguments;
-(NSString *)_table;
-(NSString *)_formatKey;
-(NSString *)_cachedLocalization;
-(id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3 arguments:(_va_list_tag*)arg4 ;
-(id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundleIdentifier:(id)arg3 bundleURL:(id)arg4 arguments:(id)arg5 ;
-(id)localizeForLanguage:(id)arg1 ;
-(id)_intents_encodeForProto;
@end
