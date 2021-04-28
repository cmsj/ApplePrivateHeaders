/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMContactRepresentation : NSObject <NSSecureCoding> {

	NSArray* _phones;
	NSArray* _emails;

}

@property (nonatomic,copy) NSArray * phones;              //@synthesize phones=_phones - In the implementation block
@property (nonatomic,copy) NSArray * emails;              //@synthesize emails=_emails - In the implementation block
+(char)supportsSecureCoding;
+(id)representationFromData:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)emails;
-(void)setEmails:(NSArray *)arg1 ;
-(NSArray *)phones;
-(void)setPhones:(NSArray *)arg1 ;
-(id)archivedData;
-(id)initWithPhones:(id)arg1 emails:(id)arg2 ;
-(char)matchesContactRepresentation:(id)arg1 ;
@end
