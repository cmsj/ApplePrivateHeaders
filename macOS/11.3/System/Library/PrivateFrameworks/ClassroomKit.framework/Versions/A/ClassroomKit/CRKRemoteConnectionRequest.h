/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKRemoteConnectionRequest : CATTaskRequest {

	double _notificationDuration;

}

@property (assign,nonatomic) double notificationDuration;              //@synthesize notificationDuration=_notificationDuration - In the implementation block
+(char)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)notificationDuration;
-(void)setNotificationDuration:(double)arg1 ;
@end

