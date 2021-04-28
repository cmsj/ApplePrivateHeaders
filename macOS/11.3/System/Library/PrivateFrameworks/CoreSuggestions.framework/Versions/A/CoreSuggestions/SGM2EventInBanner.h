/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2EventInBanner : PBCodable <NSCopying> {

	int _app;
	int _category;
	int _extracted;
	NSString* _key;
	int _state;
	SCD_Struct_SG3 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasApp; 
@property (assign,nonatomic) int app;                        //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) char hasCategory; 
@property (assign,nonatomic) int category;                   //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) char hasExtracted; 
@property (assign,nonatomic) int extracted;                  //@synthesize extracted=_extracted - In the implementation block
@property (assign,nonatomic) char hasState; 
@property (assign,nonatomic) int state;                      //@synthesize state=_state - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasCategory;
-(char)hasKey;
-(void)setHasCategory:(char)arg1 ;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(char)hasState;
-(void)setHasState:(char)arg1 ;
-(int)app;
-(void)setApp:(int)arg1 ;
-(void)setHasApp:(char)arg1 ;
-(char)hasApp;
-(id)appAsString:(int)arg1 ;
-(int)StringAsApp:(id)arg1 ;
-(int)extracted;
-(void)setExtracted:(int)arg1 ;
-(void)setHasExtracted:(char)arg1 ;
-(char)hasExtracted;
-(id)extractedAsString:(int)arg1 ;
-(int)StringAsExtracted:(id)arg1 ;
@end
