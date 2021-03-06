/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Versions/A/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTXPCServiceSubscriptionInfo : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _subscriptions;
	NSArray* _subscriptionsInUse;
	NSArray* _subscriptionsValid;

}

@property (nonatomic,retain) NSArray * subscriptions;                   //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionsInUse;              //@synthesize subscriptionsInUse=_subscriptionsInUse - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionsValid;              //@synthesize subscriptionsValid=_subscriptionsValid - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)subscriptions;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(NSArray *)subscriptionsInUse;
-(NSArray *)subscriptionsValid;
-(void)setSubscriptionsInUse:(NSArray *)arg1 ;
-(void)setSubscriptionsValid:(NSArray *)arg1 ;
@end

