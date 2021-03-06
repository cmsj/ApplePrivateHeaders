/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPPrivacyBudgetRecord : NSObject <_DPStorageMOConversion, NSSecureCoding> {

	char _submitted;
	NSString* _key;
	double _creationDate;
	double _lastUpdate;
	long long _balance;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) double lastUpdate;                         //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic) long long balance;                         //@synthesize balance=_balance - In the implementation block
@property (assign,nonatomic) char submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(char)supportsSecureCoding;
+(id)entityName;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLastUpdate:(double)arg1 ;
-(double)lastUpdate;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)entityName;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(char)copyToManagedObject:(id)arg1 ;
-(char)submitted;
-(void)setSubmitted:(char)arg1 ;
-(NSManagedObjectID *)objectId;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(long long)balance;
-(void)setBalance:(long long)arg1 ;
-(char)copyFromManagedObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 creationDate:(double)arg2 lastUpdate:(double)arg3 balance:(long long)arg4 objectId:(id)arg5 ;
-(char)isEqualToPrivacyBudgetRecord:(id)arg1 ;
@end

