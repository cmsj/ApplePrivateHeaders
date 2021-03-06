/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFImage.h>
#import <libobjc.A.dylib/SFSymbolImage.h>
@class NSString, NSDictionary, NSData;


@protocol SFSymbolImage <SFImage>
@property (nonatomic,copy) NSString * symbolName; 
@property (assign,nonatomic) char punchThroughBackground; 
@property (assign,nonatomic) int backgroundColor; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setBackgroundColor:(int)arg1;
-(int)backgroundColor;
-(NSString *)symbolName;
-(NSData *)jsonData;
-(void)setSymbolName:(id)arg1;
-(void)setPunchThroughBackground:(char)arg1;
-(char)punchThroughBackground;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFSymbolImage : SFImage <SFSymbolImage, NSSecureCoding, NSCopying> {

	SCD_Struct_SF9 _has;
	char _punchThroughBackground;
	int _backgroundColor;
	NSString* _symbolName;

}

@property (nonatomic,copy) NSString * symbolName;                                    //@synthesize symbolName=_symbolName - In the implementation block
@property (assign,nonatomic) char punchThroughBackground;                            //@synthesize punchThroughBackground=_punchThroughBackground - In the implementation block
@property (assign,nonatomic) int backgroundColor;                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
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
-(void)setBackgroundColor:(int)arg1 ;
-(int)backgroundColor;
-(NSString *)symbolName;
-(char)hasBackgroundColor;
-(NSData *)jsonData;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setSymbolName:(NSString *)arg1 ;
-(void)setPunchThroughBackground:(char)arg1 ;
-(char)punchThroughBackground;
-(char)hasPunchThroughBackground;
@end

