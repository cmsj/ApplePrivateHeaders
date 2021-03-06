/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/Frameworks/Zoom.framework/Versions/A/Zoom
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Zoom/Zoom-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ZMKeyboardKey : NSObject <NSCopying> {

	unsigned long long _keyCode;
	NSString* _charString;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long keyCode;              //@synthesize keyCode=_keyCode - In the implementation block
@property (nonatomic,retain) NSString * charString;                   //@synthesize charString=_charString - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                //@synthesize flags=_flags - In the implementation block
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SEL)selector;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)keyCode;
-(void)setKeyCode:(unsigned long long)arg1 ;
-(void)setCharString:(NSString *)arg1 ;
-(NSString *)charString;
-(id)initWithCGEvent:(CGEventRef)arg1 ;
-(id)initWithKeyCode:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithString:(id)arg1 flags:(unsigned long long)arg2 ;
@end

