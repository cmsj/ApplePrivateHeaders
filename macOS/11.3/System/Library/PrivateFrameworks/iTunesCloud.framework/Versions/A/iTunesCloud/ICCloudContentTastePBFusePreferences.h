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

@class NSMutableArray;

@interface ICCloudContentTastePBFusePreferences : PBCodable <NSCopying> {

	NSMutableArray* _preferences;

}

@property (nonatomic,retain) NSMutableArray * preferences;              //@synthesize preferences=_preferences - In the implementation block
+(Class)preferencesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableArray *)preferences;
-(id)dictionaryRepresentation;
-(void)setPreferences:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearPreferences;
-(void)addPreferences:(id)arg1 ;
-(unsigned long long)preferencesCount;
-(id)preferencesAtIndex:(unsigned long long)arg1 ;
@end

