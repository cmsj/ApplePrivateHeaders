/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFImage.h>
#import <libobjc.A.dylib/SFMonogramImage.h>
@class NSString, NSDictionary, NSData;


@protocol SFMonogramImage <SFImage>
@property (nonatomic,copy) NSString * monogramLetters; 
@property (assign,nonatomic) int monogramStyle; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setMonogramLetters:(id)arg1;
-(NSString *)monogramLetters;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFMonogramImage : SFImage <SFMonogramImage, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _monogramStyle;
	NSString* _monogramLetters;

}

@property (nonatomic,copy) NSString * monogramLetters;                               //@synthesize monogramLetters=_monogramLetters - In the implementation block
@property (assign,nonatomic) int monogramStyle;                                      //@synthesize monogramStyle=_monogramStyle - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (copy) NSData * imageData; 
@property (assign,nonatomic) char isTemplate; 
@property (assign,nonatomic) char shouldCropToCircle; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int cornerRoundingStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setMonogramLetters:(NSString *)arg1 ;
-(NSString *)monogramLetters;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1 ;
-(char)hasMonogramStyle;
@end

