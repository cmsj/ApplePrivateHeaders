/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTodayConfig : PBCodable <NSCopying> {

	long long _widgetSystemReloadInterval;
	long long _widgetSystemReloadJitterMax;
	NSString* _audioIndicatorColor;
	NSString* _backgroundColorDark;
	NSString* _backgroundColorLight;
	NSMutableArray* _todayQueueConfigs;
	NSString* _widgetIdentifier;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,retain) NSMutableArray * todayQueueConfigs;                 //@synthesize todayQueueConfigs=_todayQueueConfigs - In the implementation block
@property (nonatomic,readonly) char hasBackgroundColorLight; 
@property (nonatomic,retain) NSString * backgroundColorLight;                    //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,readonly) char hasBackgroundColorDark; 
@property (nonatomic,retain) NSString * backgroundColorDark;                     //@synthesize backgroundColorDark=_backgroundColorDark - In the implementation block
@property (nonatomic,readonly) char hasWidgetIdentifier; 
@property (nonatomic,retain) NSString * widgetIdentifier;                        //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (nonatomic,readonly) char hasAudioIndicatorColor; 
@property (nonatomic,retain) NSString * audioIndicatorColor;                     //@synthesize audioIndicatorColor=_audioIndicatorColor - In the implementation block
@property (assign,nonatomic) char hasWidgetSystemReloadInterval; 
@property (assign,nonatomic) long long widgetSystemReloadInterval;               //@synthesize widgetSystemReloadInterval=_widgetSystemReloadInterval - In the implementation block
@property (assign,nonatomic) char hasWidgetSystemReloadJitterMax; 
@property (assign,nonatomic) long long widgetSystemReloadJitterMax;              //@synthesize widgetSystemReloadJitterMax=_widgetSystemReloadJitterMax - In the implementation block
+(Class)todayQueueConfigsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)backgroundColorLight;
-(void)setBackgroundColorLight:(NSString *)arg1 ;
-(void)setTodayQueueConfigs:(NSMutableArray *)arg1 ;
-(void)setBackgroundColorDark:(NSString *)arg1 ;
-(void)setWidgetIdentifier:(NSString *)arg1 ;
-(void)setAudioIndicatorColor:(NSString *)arg1 ;
-(void)addTodayQueueConfigs:(id)arg1 ;
-(void)clearTodayQueueConfigs;
-(unsigned long long)todayQueueConfigsCount;
-(id)todayQueueConfigsAtIndex:(unsigned long long)arg1 ;
-(char)hasBackgroundColorLight;
-(char)hasBackgroundColorDark;
-(char)hasWidgetIdentifier;
-(char)hasAudioIndicatorColor;
-(void)setWidgetSystemReloadInterval:(long long)arg1 ;
-(void)setHasWidgetSystemReloadInterval:(char)arg1 ;
-(char)hasWidgetSystemReloadInterval;
-(void)setWidgetSystemReloadJitterMax:(long long)arg1 ;
-(void)setHasWidgetSystemReloadJitterMax:(char)arg1 ;
-(char)hasWidgetSystemReloadJitterMax;
-(NSMutableArray *)todayQueueConfigs;
-(NSString *)backgroundColorDark;
-(NSString *)widgetIdentifier;
-(NSString *)audioIndicatorColor;
-(long long)widgetSystemReloadInterval;
-(long long)widgetSystemReloadJitterMax;
@end

