/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface MNTracePlaybackDetails : PBCodable <NSCopying> {

	double _currentPosition;
	double _pedestrianTraceStartRelativeTimestamp;
	double _traceDuration;
	NSMutableArray* _bookmarks;
	int _eventType;
	NSString* _pedestrianTracePath;
	unsigned _recordedBookmarkID;
	NSString* _tracePath;
	SCD_Struct_MN9 _has;

}

@property (assign,nonatomic) char hasEventType; 
@property (assign,nonatomic) int eventType;                                              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) char hasTracePath; 
@property (nonatomic,retain) NSString * tracePath;                                       //@synthesize tracePath=_tracePath - In the implementation block
@property (assign,nonatomic) char hasTraceDuration; 
@property (assign,nonatomic) double traceDuration;                                       //@synthesize traceDuration=_traceDuration - In the implementation block
@property (assign,nonatomic) char hasCurrentPosition; 
@property (assign,nonatomic) double currentPosition;                                     //@synthesize currentPosition=_currentPosition - In the implementation block
@property (nonatomic,retain) NSMutableArray * bookmarks;                                 //@synthesize bookmarks=_bookmarks - In the implementation block
@property (assign,nonatomic) char hasRecordedBookmarkID; 
@property (assign,nonatomic) unsigned recordedBookmarkID;                                //@synthesize recordedBookmarkID=_recordedBookmarkID - In the implementation block
@property (nonatomic,readonly) char hasPedestrianTracePath; 
@property (nonatomic,retain) NSString * pedestrianTracePath;                             //@synthesize pedestrianTracePath=_pedestrianTracePath - In the implementation block
@property (assign,nonatomic) char hasPedestrianTraceStartRelativeTimestamp; 
@property (assign,nonatomic) double pedestrianTraceStartRelativeTimestamp;               //@synthesize pedestrianTraceStartRelativeTimestamp=_pedestrianTraceStartRelativeTimestamp - In the implementation block
+(Class)bookmarkType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)tracePath;
-(id)dictionaryRepresentation;
-(NSMutableArray *)bookmarks;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(char)arg1 ;
-(char)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(double)currentPosition;
-(void)addBookmark:(id)arg1 ;
-(void)setTracePath:(NSString *)arg1 ;
-(unsigned long long)bookmarksCount;
-(void)clearBookmarks;
-(id)bookmarkAtIndex:(unsigned long long)arg1 ;
-(void)setPedestrianTracePath:(NSString *)arg1 ;
-(char)hasTracePath;
-(void)setTraceDuration:(double)arg1 ;
-(void)setHasTraceDuration:(char)arg1 ;
-(char)hasTraceDuration;
-(void)setCurrentPosition:(double)arg1 ;
-(void)setHasCurrentPosition:(char)arg1 ;
-(char)hasCurrentPosition;
-(void)setRecordedBookmarkID:(unsigned)arg1 ;
-(void)setHasRecordedBookmarkID:(char)arg1 ;
-(char)hasRecordedBookmarkID;
-(char)hasPedestrianTracePath;
-(void)setPedestrianTraceStartRelativeTimestamp:(double)arg1 ;
-(void)setHasPedestrianTraceStartRelativeTimestamp:(char)arg1 ;
-(char)hasPedestrianTraceStartRelativeTimestamp;
-(double)traceDuration;
-(void)setBookmarks:(NSMutableArray *)arg1 ;
-(unsigned)recordedBookmarkID;
-(NSString *)pedestrianTracePath;
-(double)pedestrianTraceStartRelativeTimestamp;
@end
