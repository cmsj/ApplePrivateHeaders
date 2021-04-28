/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying> {

	NSString* _key;
	NSString* _source;
	NSString* _suggestedAutomationIdentifier;
	char _completed;
	char _interacted;
	SCD_Struct_WF2 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) char hasSuggestedAutomationIdentifier; 
@property (nonatomic,retain) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) char hasInteracted; 
@property (assign,nonatomic) char interacted;                                       //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) char hasCompleted; 
@property (assign,nonatomic) char completed;                                        //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) char hasSource; 
@property (nonatomic,retain) NSString * source;                                     //@synthesize source=_source - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)source;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)completed;
-(void)setCompleted:(char)arg1 ;
-(char)hasSource;
-(void)setHasCompleted:(char)arg1 ;
-(char)hasCompleted;
-(char)hasKey;
-(char)hasSuggestedAutomationIdentifier;
-(void)setInteracted:(char)arg1 ;
-(void)setHasInteracted:(char)arg1 ;
-(char)hasInteracted;
-(NSString *)suggestedAutomationIdentifier;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(char)interacted;
@end
