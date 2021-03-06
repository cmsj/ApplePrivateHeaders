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

@class NSString;

@interface TIAnalyticsMetricsContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _inputLanguage;
	NSString* _inputRegion;

}

@property (nonatomic,readonly) NSString * inputLanguage;                       //@synthesize inputLanguage=_inputLanguage - In the implementation block
@property (nonatomic,readonly) NSString * inputRegion;                         //@synthesize inputRegion=_inputRegion - In the implementation block
@property (nonatomic,readonly) NSString * inputLanguageAndRegion; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)inputLanguage;
-(id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2 ;
-(NSString *)inputLanguageAndRegion;
-(NSString *)inputRegion;
@end

