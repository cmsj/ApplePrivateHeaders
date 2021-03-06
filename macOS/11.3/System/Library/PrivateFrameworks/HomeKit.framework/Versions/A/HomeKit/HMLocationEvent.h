/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CLRegion, HMFLocationAuthorization;

@interface HMLocationEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	int _locationAuthorization;
	CLRegion* _region;
	HMFLocationAuthorization* _authorization;

}

@property (readonly) HMFLocationAuthorization * authorization;              //@synthesize authorization=_authorization - In the implementation block
@property (assign,nonatomic) int locationAuthorization;                     //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (nonatomic,retain) CLRegion * region;                             //@synthesize region=_region - In the implementation block
+(char)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRegion:(CLRegion *)arg1 ;
-(id)initWithRegion:(id)arg1 ;
-(CLRegion *)region;
-(HMFLocationAuthorization *)authorization;
-(id)initWithDict:(id)arg1 region:(id)arg2 ;
-(void)_unconfigure;
-(void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2 ;
-(int)locationAuthorization;
-(void)setLocationAuthorization:(int)arg1 ;
-(void)_updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_serializeForAdd;
-(void)_retrieveLocationEvent;
-(void)updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(void)__locationAuthorizationUpdated:(id)arg1 ;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

