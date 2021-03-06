/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/ScreenReaderOutput.framework/Versions/A/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/SCROBrailleKey.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding> {

	unsigned _modifiers;
	unsigned _keyCode;
	unsigned _virtualKeyCode;
	NSString* _keyString;

}

@property (nonatomic,retain) NSString * keyString;                 //@synthesize keyString=_keyString - In the implementation block
@property (assign,nonatomic) unsigned modifiers;                   //@synthesize modifiers=_modifiers - In the implementation block
@property (assign,nonatomic) unsigned keyCode;                     //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) unsigned virtualKeyCode;              //@synthesize virtualKeyCode=_virtualKeyCode - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)keyCode;
-(unsigned)virtualKeyCode;
-(NSString *)keyString;
-(void)setKeyString:(NSString *)arg1 ;
-(void)setKeyCode:(unsigned)arg1 ;
-(unsigned)modifiers;
-(void)setModifiers:(unsigned)arg1 ;
-(void)setVirtualKeyCode:(unsigned)arg1 ;
@end

