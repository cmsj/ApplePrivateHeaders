/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _MRLanguageOptionProtobuf, NSData, NSDictionary;

@interface MRLanguageOption : NSObject <NSCopying, NSSecureCoding> {

	char _hasType;
	unsigned _type;
	NSString* _languageTag;
	NSArray* _characteristics;
	NSString* _displayName;
	NSString* _identifier;

}

@property (nonatomic,readonly) _MRLanguageOptionProtobuf * protobuf; 
@property (assign,nonatomic) unsigned type;                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasType;                                                //@synthesize hasType=_hasType - In the implementation block
@property (nonatomic,copy) NSString * languageTag;                                        //@synthesize languageTag=_languageTag - In the implementation block
@property (nonatomic,copy) NSArray * characteristics;                                     //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(char)supportsSecureCoding;
+(id)automaticLanguageOptionWithType:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)type;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(_MRLanguageOptionProtobuf *)protobuf;
-(NSArray *)characteristics;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSString *)languageTag;
-(void)setLanguageTag:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithType:(unsigned)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5 ;
-(char)isAutomaticLanguageOptionWithType:(unsigned)arg1 ;
@end
