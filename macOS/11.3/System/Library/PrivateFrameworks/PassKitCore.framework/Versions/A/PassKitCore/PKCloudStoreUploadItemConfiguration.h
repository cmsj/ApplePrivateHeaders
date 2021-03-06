/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol PKCloudStoreCoding;
@class NSObject, NSSet, NSDictionary;

@interface PKCloudStoreUploadItemConfiguration : NSObject <NSSecureCoding> {

	unsigned long long _itemType;
	NSObject*<PKCloudStoreCoding> _item;
	NSSet* _cloudStoreZones;
	NSDictionary* _recordSpecificKeys;
	unsigned long long _codingType;

}

@property (nonatomic,retain) NSObject*<PKCloudStoreCoding> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSSet * cloudStoreZones;                         //@synthesize cloudStoreZones=_cloudStoreZones - In the implementation block
@property (nonatomic,copy) NSDictionary * recordSpecificKeys;                 //@synthesize recordSpecificKeys=_recordSpecificKeys - In the implementation block
@property (assign,nonatomic) unsigned long long codingType;                   //@synthesize codingType=_codingType - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setItem:(NSObject*<PKCloudStoreCoding>)arg1 ;
-(NSObject*<PKCloudStoreCoding>)item;
-(id)initWithItem:(id)arg1 ;
-(char)isEqualToConfiguration:(id)arg1 ;
-(id)initWithItem:(id)arg1 recordSpecificKeys:(id)arg2 ;
-(NSSet *)cloudStoreZones;
-(void)setCloudStoreZones:(NSSet *)arg1 ;
-(NSDictionary *)recordSpecificKeys;
-(void)setRecordSpecificKeys:(NSDictionary *)arg1 ;
-(unsigned long long)codingType;
-(void)setCodingType:(unsigned long long)arg1 ;
@end

