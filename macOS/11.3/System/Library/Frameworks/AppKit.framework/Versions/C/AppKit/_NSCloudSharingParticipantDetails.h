/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKShareParticipant, NSString, NSColor;

@interface _NSCloudSharingParticipantDetails : NSObject <NSSecureCoding> {

	CKShareParticipant* _participant;
	NSString* _detailText;
	NSColor* _participantColor;

}

@property (readonly) CKShareParticipant * participant;              //@synthesize participant=_participant - In the implementation block
@property (copy,readonly) NSString * detailText;                    //@synthesize detailText=_detailText - In the implementation block
@property (copy) NSColor * participantColor;                        //@synthesize participantColor=_participantColor - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithParticipant:(id)arg1 detailText:(id)arg2 ;
-(CKShareParticipant *)participant;
-(NSString *)detailText;
-(NSColor *)participantColor;
-(void)setParticipantColor:(NSColor *)arg1 ;
@end
