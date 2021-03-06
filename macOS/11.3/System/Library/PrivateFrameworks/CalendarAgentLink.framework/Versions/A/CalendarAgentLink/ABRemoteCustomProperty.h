/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarAgentLink/CalendarAgentLink-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ABRemoteCustomProperty : NSObject <NSCopying, NSSecureCoding> {

	NSString* _propertyName;
	NSString* _recordType;
	NSNumber* _valueType;

}

@property (copy) NSString * propertyName;              //@synthesize propertyName=_propertyName - In the implementation block
@property (copy) NSString * recordType;                //@synthesize recordType=_recordType - In the implementation block
@property (copy) NSNumber * valueType;                 //@synthesize valueType=_valueType - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)recordType;
-(NSNumber *)valueType;
-(void)setRecordType:(NSString *)arg1 ;
-(NSString *)propertyName;
-(void)setPropertyName:(NSString *)arg1 ;
-(void)setValueType:(NSNumber *)arg1 ;
@end

