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

@class NSUUID, NSString, NSNumber;

@interface REMChangeTombstone : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _objectIdentifier;
	NSString* _externalIdentifier;
	NSNumber* _daIsEventOnlyContainer;
	NSUUID* _shareeOwningListIdentifier;
	NSString* _shareeDisplayName;
	NSString* _shareeAddress;
	NSUUID* _assignmentOwningReminderIdentifier;

}

@property (nonatomic,readonly) NSUUID * objectIdentifier;                                //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * externalIdentifier;                            //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * daIsEventOnlyContainer;                        //@synthesize daIsEventOnlyContainer=_daIsEventOnlyContainer - In the implementation block
@property (nonatomic,readonly) NSUUID * shareeOwningListIdentifier;                      //@synthesize shareeOwningListIdentifier=_shareeOwningListIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * shareeDisplayName;                             //@synthesize shareeDisplayName=_shareeDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * shareeAddress;                                 //@synthesize shareeAddress=_shareeAddress - In the implementation block
@property (nonatomic,readonly) NSUUID * assignmentOwningReminderIdentifier;              //@synthesize assignmentOwningReminderIdentifier=_assignmentOwningReminderIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)objectIdentifier;
-(NSString *)externalIdentifier;
-(NSNumber *)daIsEventOnlyContainer;
-(NSUUID *)shareeOwningListIdentifier;
-(NSString *)shareeDisplayName;
-(NSString *)shareeAddress;
-(NSUUID *)assignmentOwningReminderIdentifier;
@end

