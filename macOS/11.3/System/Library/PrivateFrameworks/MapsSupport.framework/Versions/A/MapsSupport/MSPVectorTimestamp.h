/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData;

@interface MSPVectorTimestamp : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _timestampValues;

}

@property (nonatomic,readonly) NSData * serializedRepresentation; 
@property (getter=_timestampValues,nonatomic,readonly) NSDictionary * timestampValues; 
+(char)supportsSecureCoding;
+(id)timestampAfterTimestamps:(id)arg1 increasingClientIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)_timestampValues;
-(char)compare:(id)arg1 comparisonResult:(out long long*)arg2 ;
-(long long)compare:(id)arg1 isComparable:(out char*)arg2 ;
-(id)timestampIncreasingClientIdentifier:(id)arg1 ;
-(id)initInitialTimestampWithClientIdentifier:(id)arg1 ;
-(id)_initWithTimestampValues:(id)arg1 ;
-(char)_compare:(id)arg1 comparisonResult:(out long long*)arg2 isOppositeCheck:(char)arg3 ;
@end
