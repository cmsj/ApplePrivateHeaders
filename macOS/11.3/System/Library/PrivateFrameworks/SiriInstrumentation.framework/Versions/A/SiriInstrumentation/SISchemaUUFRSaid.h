/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRSaid : SISchemaInstrumentationMessage {

	NSString* _dialogIdentifier;
	SISchemaSiriResponseContext* _siriResponseContext;
	NSString* _aceViewID;
	NSString* _aceViewClass;
	char _hasDialogIdentifier;
	char _hasSiriResponseContext;
	char _hasAceViewID;
	char _hasAceViewClass;

}

@property (nonatomic,copy) NSString * dialogIdentifier;                                      //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (assign,nonatomic) char hasDialogIdentifier;                                       //@synthesize hasDialogIdentifier=_hasDialogIdentifier - In the implementation block
@property (nonatomic,retain) SISchemaSiriResponseContext * siriResponseContext;              //@synthesize siriResponseContext=_siriResponseContext - In the implementation block
@property (assign,nonatomic) char hasSiriResponseContext;                                    //@synthesize hasSiriResponseContext=_hasSiriResponseContext - In the implementation block
@property (nonatomic,copy) NSString * aceViewID;                                             //@synthesize aceViewID=_aceViewID - In the implementation block
@property (assign,nonatomic) char hasAceViewID;                                              //@synthesize hasAceViewID=_hasAceViewID - In the implementation block
@property (nonatomic,copy) NSString * aceViewClass;                                          //@synthesize aceViewClass=_aceViewClass - In the implementation block
@property (assign,nonatomic) char hasAceViewClass;                                           //@synthesize hasAceViewClass=_hasAceViewClass - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setSiriResponseContext:(SISchemaSiriResponseContext *)arg1 ;
-(SISchemaSiriResponseContext *)siriResponseContext;
-(char)hasSiriResponseContext;
-(void)setHasSiriResponseContext:(char)arg1 ;
-(void)setAceViewID:(NSString *)arg1 ;
-(void)setAceViewClass:(NSString *)arg1 ;
-(NSString *)aceViewID;
-(NSString *)aceViewClass;
-(char)hasDialogIdentifier;
-(char)hasAceViewID;
-(char)hasAceViewClass;
-(void)setHasDialogIdentifier:(char)arg1 ;
-(void)setHasAceViewID:(char)arg1 ;
-(void)setHasAceViewClass:(char)arg1 ;
@end

