/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/UserNotificationPolicyData.h>

@class NSString;

@interface LocalNotificationPolicyData : UserNotificationPolicyData {

	NSString* _originString;

}

@property (nonatomic,readonly) NSString * originString;              //@synthesize originString=_originString - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOrigin:(id)arg1 policy:(int)arg2 ;
-(void)updatePermission:(int)arg1 ;
-(NSString *)originString;
@end

