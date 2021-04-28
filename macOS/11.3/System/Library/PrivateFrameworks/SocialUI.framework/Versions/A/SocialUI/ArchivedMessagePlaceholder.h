/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class IMMessage;

@interface ArchivedMessagePlaceholder : NSObject <NSSecureCoding> {

	IMMessage* _message;

}

@property (readonly) IMMessage * message;              //@synthesize message=_message - In the implementation block
+(char)supportsSecureCoding;
+(id)allowedSecureArchivingClasses_so;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IMMessage *)message;
-(id)initWithMessage:(id)arg1 ;
@end
