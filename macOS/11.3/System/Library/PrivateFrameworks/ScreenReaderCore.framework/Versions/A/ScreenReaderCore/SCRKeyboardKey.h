/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SCRKeyboardKey : NSObject <NSCopying, NSSecureCoding> {

	char _didSetKeyCode;
	char _shifted;
	char _commanded;
	char _fned;
	char _function;
	unsigned short _keyCode;
	unsigned _eventFlags;
	NSString* _characters;
	NSString* _rawCharacters;
	unsigned long long _pressCount;

}

@property (assign,nonatomic) unsigned short keyCode;                     //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) char didSetKeyCode;                         //@synthesize didSetKeyCode=_didSetKeyCode - In the implementation block
@property (assign,nonatomic) unsigned eventFlags;                        //@synthesize eventFlags=_eventFlags - In the implementation block
@property (nonatomic,copy) NSString * characters;                        //@synthesize characters=_characters - In the implementation block
@property (nonatomic,copy) NSString * rawCharacters;                     //@synthesize rawCharacters=_rawCharacters - In the implementation block
@property (assign,nonatomic) unsigned long long pressCount;              //@synthesize pressCount=_pressCount - In the implementation block
@property (assign,nonatomic) char shifted;                               //@synthesize shifted=_shifted - In the implementation block
@property (assign,nonatomic) char commanded;                             //@synthesize commanded=_commanded - In the implementation block
@property (assign,nonatomic) char fned;                                  //@synthesize fned=_fned - In the implementation block
@property (assign,nonatomic) char function;                              //@synthesize function=_function - In the implementation block
+(char)supportsSecureCoding;
+(id)keysWithPressCountGreaterThanOne;
+(char)isEqualIgnoringCount:(id)arg1 object2:(id)arg2 ignorePressCount:(char)arg3 ;
+(void)initializePressCountsCache;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)function;
-(NSString *)characters;
-(long long)modifierMask;
-(unsigned short)keyCode;
-(void)setCharacters:(NSString *)arg1 ;
-(void)setKeyCode:(unsigned short)arg1 ;
-(void)setFunction:(char)arg1 ;
-(unsigned)eventFlags;
-(void)setEventFlags:(unsigned)arg1 ;
-(unsigned long long)pressCount;
-(void)setPressCount:(unsigned long long)arg1 ;
-(void)_initializeFunctionSet;
-(void)registerPressCount:(unsigned long long)arg1 ;
-(void)setRawCharacters:(NSString *)arg1 ;
-(void)setShifted:(char)arg1 ;
-(void)setCommanded:(char)arg1 ;
-(void)setFned:(char)arg1 ;
-(void)setDidSetKeyCode:(char)arg1 ;
-(id)_keyboardPunctuationToLowercaseMapping;
-(id)initWithRegularString:(id)arg1 isShifted:(char)arg2 isCommanded:(char)arg3 isFned:(char)arg4 pressCount:(long long)arg5 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 keyCode:(unsigned long long)arg3 eventFlags:(unsigned)arg4 isShifted:(char)arg5 isCommanded:(char)arg6 isFned:(char)arg7 pressCount:(unsigned long long)arg8 ;
-(id)initWithFunctionCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 isShifted:(char)arg3 isCommanded:(char)arg4 isFned:(char)arg5 pressCount:(long long)arg6 ;
-(void)setKeyCode:(short)arg1 eventFlags:(unsigned)arg2 ;
-(char)isEqualIgnoringCount:(id)arg1 ;
-(id)charactersWithPunctuationConvertedToLowercaseForm;
-(long long)modifierMaskForGuide;
-(NSString *)rawCharacters;
-(char)didSetKeyCode;
-(char)shifted;
-(char)commanded;
-(char)fned;
@end

