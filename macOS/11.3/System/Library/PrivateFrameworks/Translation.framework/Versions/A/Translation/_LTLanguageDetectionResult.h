/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSDictionary;

@interface _LTLanguageDetectionResult : NSObject <NSSecureCoding> {

	char _isConfident;
	char _isFinal;
	NSLocale* _dominantLanguage;
	NSDictionary* _confidences;

}

@property (nonatomic,copy) NSLocale * dominantLanguage;              //@synthesize dominantLanguage=_dominantLanguage - In the implementation block
@property (nonatomic,copy) NSDictionary * confidences;               //@synthesize confidences=_confidences - In the implementation block
@property (nonatomic,readonly) char isConfident;                     //@synthesize isConfident=_isConfident - In the implementation block
@property (assign,nonatomic) char isFinal;                           //@synthesize isFinal=_isFinal - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSLocale *)dominantLanguage;
-(char)isFinal;
-(void)setIsFinal:(char)arg1 ;
-(NSDictionary *)confidences;
-(void)setConfidences:(NSDictionary *)arg1 ;
-(char)isConfident;
-(id)initWithConfidences:(id)arg1 isConfident:(char)arg2 dominantLanguage:(id)arg3 isFinal:(char)arg4 ;
-(void)setDominantLanguage:(NSLocale *)arg1 ;
@end

