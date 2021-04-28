/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ICIAMLogEventRequest : PBRequest <NSCopying> {

	long long _dSID;
	NSString* _applicationMessageIdentifier;
	NSString* _deviceID;
	NSMutableArray* _eventParameters;
	SCD_Struct_IC6 _has;

}

@property (nonatomic,readonly) char hasApplicationMessageIdentifier; 
@property (nonatomic,retain) NSString * applicationMessageIdentifier;              //@synthesize applicationMessageIdentifier=_applicationMessageIdentifier - In the implementation block
@property (assign,nonatomic) char hasDSID; 
@property (assign,nonatomic) long long dSID;                                       //@synthesize dSID=_dSID - In the implementation block
@property (nonatomic,readonly) char hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventParameters;                     //@synthesize eventParameters=_eventParameters - In the implementation block
+(Class)eventParametersType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDSID:(long long)arg1 ;
-(NSMutableArray *)eventParameters;
-(void)setHasDSID:(char)arg1 ;
-(char)hasDSID;
-(char)hasDeviceID;
-(long long)dSID;
-(char)hasApplicationMessageIdentifier;
-(void)clearEventParameters;
-(void)addEventParameters:(id)arg1 ;
-(unsigned long long)eventParametersCount;
-(id)eventParametersAtIndex:(unsigned long long)arg1 ;
-(NSString *)applicationMessageIdentifier;
-(void)setApplicationMessageIdentifier:(NSString *)arg1 ;
-(void)setEventParameters:(NSMutableArray *)arg1 ;
@end
