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

@class ABRemoteCustomProperty, NSData, NSDate, NSNumber, NSString;

@interface ABRemoteCustomPropertyValue : NSObject <NSCopying, NSSecureCoding> {

	ABRemoteCustomProperty* _customProperty;
	NSData* _dataValue;
	NSDate* _dateValue;
	NSNumber* _numberValue;
	NSString* _stringValue;

}

@property (retain) ABRemoteCustomProperty * customProperty;              //@synthesize customProperty=_customProperty - In the implementation block
@property (retain) NSData * dataValue;                                   //@synthesize dataValue=_dataValue - In the implementation block
@property (retain) NSDate * dateValue;                                   //@synthesize dateValue=_dateValue - In the implementation block
@property (retain) NSNumber * numberValue;                               //@synthesize numberValue=_numberValue - In the implementation block
@property (copy) NSString * stringValue;                                 //@synthesize stringValue=_stringValue - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSDate *)dateValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSData *)dataValue;
-(void)setCustomProperty:(ABRemoteCustomProperty *)arg1 ;
-(ABRemoteCustomProperty *)customProperty;
-(void)setDataValue:(NSData *)arg1 ;
-(void)setNumberValue:(NSNumber *)arg1 ;
-(NSNumber *)numberValue;
@end
