/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CPLExpungeableResourceState : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _resourceType;
	unsigned long long _expungedState;
	NSDate* _expungedDate;

}

@property (assign,nonatomic) unsigned long long resourceType;               //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned long long expungedState;              //@synthesize expungedState=_expungedState - In the implementation block
@property (nonatomic,copy) NSDate * expungedDate;                           //@synthesize expungedDate=_expungedDate - In the implementation block
+(char)supportsSecureCoding;
+(id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)resourceType;
-(void)setResourceType:(unsigned long long)arg1 ;
-(void)setExpungedDate:(NSDate *)arg1 ;
-(void)setExpungedState:(unsigned long long)arg1 ;
-(unsigned long long)expungedState;
-(NSDate *)expungedDate;
@end

