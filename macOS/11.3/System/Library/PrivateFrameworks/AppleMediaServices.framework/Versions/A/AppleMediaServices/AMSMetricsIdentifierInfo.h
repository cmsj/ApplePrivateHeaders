/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface AMSMetricsIdentifierInfo : NSObject {

	char _crossDeviceSync;
	char _deleted;
	NSString* _idKey;
	NSString* _name;
	NSString* _storeUUID;
	NSString* _value;
	NSDate* _expires;
	NSDate* _lastSync;
	NSDate* _modified;

}

@property (assign) char crossDeviceSync;              //@synthesize crossDeviceSync=_crossDeviceSync - In the implementation block
@property (retain) NSString * idKey;                  //@synthesize idKey=_idKey - In the implementation block
@property (retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (retain) NSString * storeUUID;              //@synthesize storeUUID=_storeUUID - In the implementation block
@property (retain) NSString * value;                  //@synthesize value=_value - In the implementation block
@property (retain) NSDate * expires;                  //@synthesize expires=_expires - In the implementation block
@property (assign) char deleted;                      //@synthesize deleted=_deleted - In the implementation block
@property (retain) NSDate * lastSync;                 //@synthesize lastSync=_lastSync - In the implementation block
@property (retain) NSDate * modified;                 //@synthesize modified=_modified - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(char)deleted;
-(NSDate *)modified;
-(void)setModified:(NSDate *)arg1 ;
-(void)setDeleted:(char)arg1 ;
-(NSString *)idKey;
-(NSString *)storeUUID;
-(NSDate *)expires;
-(void)setCrossDeviceSync:(char)arg1 ;
-(void)setStoreUUID:(NSString *)arg1 ;
-(void)setLastSync:(NSDate *)arg1 ;
-(void)setIdKey:(NSString *)arg1 ;
-(void)setExpires:(NSDate *)arg1 ;
-(char)crossDeviceSync;
-(id)syncStateFieldName;
-(NSDate *)lastSync;
-(void)populateDictionary:(id)arg1 ;
@end
