/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _userActionEventKey;
	NSString* _userActionEventValue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _userActionEventAction;
	int _userActionEventTarget;
	struct {
		unsigned has_userActionEventAction : 1;
		unsigned has_userActionEventTarget : 1;
		unsigned read_userActionEventKey : 1;
		unsigned read_userActionEventValue : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasUserActionEventKey; 
@property (nonatomic,retain) NSString * userActionEventKey; 
@property (nonatomic,readonly) char hasUserActionEventValue; 
@property (nonatomic,retain) NSString * userActionEventValue; 
@property (assign,nonatomic) char hasUserActionEventTarget; 
@property (assign,nonatomic) int userActionEventTarget; 
@property (assign,nonatomic) char hasUserActionEventAction; 
@property (assign,nonatomic) int userActionEventAction; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setUserActionEventAction:(int)arg1 ;
-(void)setUserActionEventTarget:(int)arg1 ;
-(void)setUserActionEventValue:(NSString *)arg1 ;
-(NSString *)userActionEventKey;
-(NSString *)userActionEventValue;
-(void)setUserActionEventKey:(NSString *)arg1 ;
-(char)hasUserActionEventKey;
-(char)hasUserActionEventValue;
-(int)userActionEventTarget;
-(void)setHasUserActionEventTarget:(char)arg1 ;
-(char)hasUserActionEventTarget;
-(id)userActionEventTargetAsString:(int)arg1 ;
-(int)StringAsUserActionEventTarget:(id)arg1 ;
-(int)userActionEventAction;
-(void)setHasUserActionEventAction:(char)arg1 ;
-(char)hasUserActionEventAction;
-(id)userActionEventActionAsString:(int)arg1 ;
-(int)StringAsUserActionEventAction:(id)arg1 ;
@end

