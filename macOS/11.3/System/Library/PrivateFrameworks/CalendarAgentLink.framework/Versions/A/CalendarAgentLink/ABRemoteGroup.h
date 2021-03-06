/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarAgentLink/CalendarAgentLink-Structs.h>
#import <CalendarAgentLink/ABRemoteRecord.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABRemoteGroup : ABRemoteRecord <NSCopying> {

	NSString* _name;

}

@property (copy) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)abEntityName;
+(Class)publicRecordClass;
+(id)remoteRecordWithUniqueID:(id)arg1 inAddressBook:(id)arg2 ;
+(char)supportsSecureCoding;
-(void)nts_SetSingleValue:(id)arg1 forProperty:(id)arg2 ;
-(id)nts_SingleValueForProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

