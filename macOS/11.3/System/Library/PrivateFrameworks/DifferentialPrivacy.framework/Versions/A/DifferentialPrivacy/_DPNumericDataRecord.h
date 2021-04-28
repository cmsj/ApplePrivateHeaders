/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/_DPJSONString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPNumericDataRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding> {

	char _submitted;
	NSString* _key;
	double _clearNumber;
	double _privateNumber;
	double _creationDate;
	long long _reportVersion;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double clearNumber;                        //@synthesize clearNumber=_clearNumber - In the implementation block
@property (assign,nonatomic) double privateNumber;                      //@synthesize privateNumber=_privateNumber - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) char submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (assign,nonatomic) long long reportVersion;                   //@synthesize reportVersion=_reportVersion - In the implementation block
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
-(id)jsonString;
-(long long)reportVersion;
-(char)copyFromManagedObject:(id)arg1 ;
-(void)setReportVersion:(long long)arg1 ;
-(id)initWithKey:(id)arg1 clearNumber:(double)arg2 privateNumber:(double)arg3 creationDate:(double)arg4 submitted:(char)arg5 objectId:(id)arg6 ;
-(double)privateNumber;
-(double)clearNumber;
-(char)isEqualToNumericDataRecord:(id)arg1 ;
-(void)setClearNumber:(double)arg1 ;
-(void)setPrivateNumber:(double)arg1 ;
@end
