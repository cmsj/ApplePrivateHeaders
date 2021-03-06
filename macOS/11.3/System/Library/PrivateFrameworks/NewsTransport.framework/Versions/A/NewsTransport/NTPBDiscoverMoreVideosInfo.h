/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBDiscoverMoreVideosInfo : PBCodable <NSCopying> {

	NSString* _actionURLString;
	NSString* _subtitle;
	NSString* _title;

}

@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) char hasActionURLString; 
@property (nonatomic,retain) NSString * actionURLString;              //@synthesize actionURLString=_actionURLString - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasTitle;
-(char)hasSubtitle;
-(NSString *)actionURLString;
-(void)setActionURLString:(NSString *)arg1 ;
-(char)hasActionURLString;
@end

