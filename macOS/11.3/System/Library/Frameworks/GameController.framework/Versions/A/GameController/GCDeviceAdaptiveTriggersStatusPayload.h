/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface GCDeviceAdaptiveTriggersStatusPayload : NSObject <NSSecureCoding> {

	NSNumber* _status;
	NSNumber* _armPosition;
	NSNumber* _mode;

}

@property (nonatomic,readonly) NSNumber * status;                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSNumber * armPosition;              //@synthesize armPosition=_armPosition - In the implementation block
@property (nonatomic,readonly) NSNumber * mode;                     //@synthesize mode=_mode - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)status;
-(NSNumber *)mode;
-(NSNumber *)armPosition;
-(id)initFeedbackWithStatus:(unsigned char)arg1 armPosition:(unsigned char)arg2 mode:(unsigned char)arg3 ;
@end

