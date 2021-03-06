/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TIKeyboardSecureCandidateRGBColor;

@interface TIKeyboardSecureCandidateTextTraits : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fontName;
	double _maxFontSize;
	double _minFontSize;
	TIKeyboardSecureCandidateRGBColor* _textColor;
	double _yCoordinate;
	double _baselineOffset;

}

@property (nonatomic,copy) NSString * fontName;                                          //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double maxFontSize;                                         //@synthesize maxFontSize=_maxFontSize - In the implementation block
@property (assign,nonatomic) double minFontSize;                                         //@synthesize minFontSize=_minFontSize - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateRGBColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double yCoordinate;                                         //@synthesize yCoordinate=_yCoordinate - In the implementation block
@property (assign,nonatomic) double baselineOffset;                                      //@synthesize baselineOffset=_baselineOffset - In the implementation block
+(char)supportsSecureCoding;
+(id)traitsWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardSecureCandidateRGBColor *)textColor;
-(NSString *)fontName;
-(void)setTextColor:(TIKeyboardSecureCandidateRGBColor *)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(void)setYCoordinate:(double)arg1 ;
-(double)yCoordinate;
-(double)maxFontSize;
-(id)initWithFontName:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3 ;
-(id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 ;
-(id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6 ;
-(void)setMaxFontSize:(double)arg1 ;
-(double)minFontSize;
-(void)setMinFontSize:(double)arg1 ;
@end

