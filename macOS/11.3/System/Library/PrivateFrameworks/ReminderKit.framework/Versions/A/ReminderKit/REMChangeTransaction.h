/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, REMObjectID, NSString, REMChangeToken;

@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timestamp;
	NSArray* _changes;
	REMObjectID* _accountID;
	NSString* _storeID;
	NSString* _author;
	REMChangeToken* _token;

}

@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSArray * changes;                    //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * storeID;                   //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) NSString * author;                    //@synthesize author=_author - In the implementation block
@property (nonatomic,readonly) REMChangeToken * token;               //@synthesize token=_token - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)changes;
-(REMChangeToken *)token;
-(NSDate *)timestamp;
-(REMObjectID *)accountID;
-(NSString *)author;
-(NSString *)storeID;
@end
