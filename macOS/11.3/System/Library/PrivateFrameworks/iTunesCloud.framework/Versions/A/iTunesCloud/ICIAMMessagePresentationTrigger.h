/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMMessagePresentationTrigger : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	int _kind;
	NSString* _triggerName;
	SCD_Struct_IC6 _has;

}

@property (nonatomic,readonly) char hasTriggerName; 
@property (nonatomic,retain) NSString * triggerName;                   //@synthesize triggerName=_triggerName - In the implementation block
@property (assign,nonatomic) char hasKind; 
@property (assign,nonatomic) int kind;                                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) char hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(int)kind;
-(id)dictionaryRepresentation;
-(void)setKind:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasBundleIdentifier;
-(void)setHasKind:(char)arg1 ;
-(char)hasKind;
-(id)kindAsString:(int)arg1 ;
-(int)StringAsKind:(id)arg1 ;
-(char)hasTriggerName;
-(NSString *)triggerName;
-(void)setTriggerName:(NSString *)arg1 ;
@end

