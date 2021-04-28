/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>

@class NSArray, NSUUID, NSDate, NSString;

@interface _DKChangeSet : NSObject <_DKProtobufConverting> {

	NSArray* _eventsToAdd;
	NSArray* _eventIDsToDelete;
	NSUUID* _deviceIdentifier;
	unsigned long long _sequenceNumber;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * eventsToAdd;                          //@synthesize eventsToAdd=_eventsToAdd - In the implementation block
@property (nonatomic,retain) NSArray * eventIDsToDelete;                     //@synthesize eventIDsToDelete=_eventIDsToDelete - In the implementation block
@property (nonatomic,retain) NSUUID * deviceIdentifier;                      //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSString * type;                                //@synthesize type=_type - In the implementation block
+(id)fromPBCodable:(id)arg1 ;
+(id)_createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
+(id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
+(id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 ;
+(id)additionChangeSetEntityName;
+(id)deletionChangeSetEntityName;
+(id)dataFromCompressedChangeSet:(id)arg1 ;
-(NSString *)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(unsigned long long)sequenceNumber;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSUUID *)deviceIdentifier;
-(id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 type:(id)arg7 ;
-(void)setDeviceIdentifier:(NSUUID *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSArray *)eventIDsToDelete;
-(id)toPBCodable;
-(id)initWithEventsToAdd:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)initWithEventIDsToDelete:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4 ;
-(id)asData;
-(NSArray *)eventsToAdd;
-(void)setEventsToAdd:(NSArray *)arg1 ;
-(void)setEventIDsToDelete:(NSArray *)arg1 ;
-(id)insertInManagedObjectContext:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 ;
@end
