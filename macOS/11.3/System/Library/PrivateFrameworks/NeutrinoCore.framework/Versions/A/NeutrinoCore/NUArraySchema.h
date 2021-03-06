/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSchema.h>

@class NSDictionary, NUPattern, NSArray;

@interface NUArraySchema : NUSchema {

	NSDictionary* _aliasToIdentifier;
	NSDictionary* _identifierToAlias;
	long long _contentType;
	NUPattern* _pattern;

}

@property (nonatomic,readonly) long long contentType;                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) NUPattern * pattern;                  //@synthesize pattern=_pattern - In the implementation block
@property (nonatomic,readonly) NSDictionary * contents;              //@synthesize aliasToIdentifier=_aliasToIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * defaultArray; 
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)supportedAttributes;
+(long long)deserializeContentTypeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)deserializePatternFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(long long)type;
-(NSDictionary *)contents;
-(long long)contentType;
-(NUPattern *)pattern;
-(id)copy:(id)arg1 ;
-(char)validate:(id)arg1 error:(out id*)arg2 ;
-(char)isValid:(out id*)arg1 ;
-(char)validateArray:(id)arg1 error:(out id*)arg2 ;
-(char)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(char)validateAttributes:(out id*)arg1 ;
-(char)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(id)initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(id)schemaDependencies;
-(char)validateContents:(out id*)arg1 ;
-(id)initWithIdentifier:(id)arg1 contentType:(long long)arg2 contents:(id)arg3 pattern:(id)arg4 attributes:(id)arg5 ;
-(char)validateDefaultArray:(id)arg1 error:(out id*)arg2 ;
-(char)validateArrayOrder:(id)arg1 error:(out id*)arg2 ;
-(char)validateArrayContents:(id)arg1 error:(out id*)arg2 ;
-(NSArray *)defaultArray;
-(id)copyArray:(id)arg1 ;
-(id)makeJSValueFromArray:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)serializeArray:(id)arg1 error:(out id*)arg2 ;
-(id)deserializeArray:(id)arg1 error:(out id*)arg2 ;
@end

