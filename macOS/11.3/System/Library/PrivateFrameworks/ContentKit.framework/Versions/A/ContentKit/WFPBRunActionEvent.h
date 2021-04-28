/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRunActionEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	NSString* _automationType;
	NSString* _key;
	NSString* _runSource;
	NSString* _shortcutSource;
	char _completed;
	char _didRunRemotely;
	SCD_Struct_WF2 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) char hasRunSource; 
@property (nonatomic,retain) NSString * runSource;                     //@synthesize runSource=_runSource - In the implementation block
@property (assign,nonatomic) char hasCompleted; 
@property (assign,nonatomic) char completed;                           //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) char hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) char hasShortcutSource; 
@property (nonatomic,retain) NSString * shortcutSource;                //@synthesize shortcutSource=_shortcutSource - In the implementation block
@property (nonatomic,readonly) char hasAutomationType; 
@property (nonatomic,retain) NSString * automationType;                //@synthesize automationType=_automationType - In the implementation block
@property (assign,nonatomic) char hasDidRunRemotely; 
@property (assign,nonatomic) char didRunRemotely;                      //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)completed;
-(NSString *)actionIdentifier;
-(void)setCompleted:(char)arg1 ;
-(void)setHasCompleted:(char)arg1 ;
-(char)hasCompleted;
-(char)hasKey;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(char)hasActionIdentifier;
-(void)setDidRunRemotely:(char)arg1 ;
-(void)setHasDidRunRemotely:(char)arg1 ;
-(char)hasDidRunRemotely;
-(char)didRunRemotely;
-(char)hasShortcutSource;
-(NSString *)shortcutSource;
-(void)setShortcutSource:(NSString *)arg1 ;
-(NSString *)runSource;
-(void)setRunSource:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(char)hasAutomationType;
-(char)hasRunSource;
@end
