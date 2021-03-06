/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/Versions/A/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CALNNotificationIdentifier : NSObject <NSCopying> {

	NSString* _sourceIdentifier;
	NSString* _sourceClientIdentifier;
	NSString* _stringRepresentation;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceClientIdentifier;              //@synthesize sourceClientIdentifier=_sourceClientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringRepresentation;                //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
+(id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;
+(id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)arg1 ;
+(id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)stringRepresentation;
-(NSString *)sourceIdentifier;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSString *)sourceClientIdentifier;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 stringRepresentation:(id)arg3 ;
-(char)isEqualToNotificationIdentifier:(id)arg1 ;
@end

