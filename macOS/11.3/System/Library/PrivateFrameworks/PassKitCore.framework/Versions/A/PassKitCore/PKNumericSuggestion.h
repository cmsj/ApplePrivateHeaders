/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject {

	char _usedMaximumSuggestion;
	NSDecimalNumber* _value;
	NSString* _title;
	NSString* _displayValue;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * displayValue;                       //@synthesize displayValue=_displayValue - In the implementation block
@property (assign,nonatomic) char usedMaximumSuggestion;                  //@synthesize usedMaximumSuggestion=_usedMaximumSuggestion - In the implementation block
+(id)suggestionWithValue:(id)arg1 currencyCode:(id)arg2 ;
+(id)suggestionWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDecimalNumber *)value;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)displayValue;
-(void)setDisplayValue:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 currencyCode:(id)arg2 ;
-(void)setUsedMaximumSuggestion:(char)arg1 ;
-(id)initWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3 ;
-(char)usedMaximumSuggestion;
@end
