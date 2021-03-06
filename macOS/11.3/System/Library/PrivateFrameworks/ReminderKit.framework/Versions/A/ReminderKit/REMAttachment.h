/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@class NSString, REMObjectID;

@interface REMAttachment : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding> {

	NSString* _uti;
	REMObjectID* _objectID;
	REMObjectID* _accountID;
	REMObjectID* _reminderID;

}

@property (nonatomic,readonly) REMObjectID * objectID;                 //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) REMObjectID * reminderID;               //@synthesize reminderID=_reminderID - In the implementation block
@property (nonatomic,readonly) NSString * uti;                         //@synthesize uti=_uti - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(char)supportsSecureCoding;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)objectID;
-(NSString *)uti;
-(REMObjectID *)accountID;
-(id)_deepCopy;
-(REMObjectID *)remObjectID;
-(id)initWithAttachment:(id)arg1 objectID:(id)arg2 accountID:(id)arg3 reminderID:(id)arg4 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 ;
-(REMObjectID *)reminderID;
@end

