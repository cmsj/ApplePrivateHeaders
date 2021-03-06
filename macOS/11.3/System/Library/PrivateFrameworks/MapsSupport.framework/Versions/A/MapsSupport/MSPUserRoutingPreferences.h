/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface MSPUserRoutingPreferences : NSObject <NSSecureCoding> {

	char _avoidTolls;
	char _avoidHighways;
	NSDate* _timestamp;
	long long _defaultDisabledTransitModes;

}

@property (nonatomic,readonly) NSDate * timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char avoidTolls;                                    //@synthesize avoidTolls=_avoidTolls - In the implementation block
@property (nonatomic,readonly) char avoidHighways;                                 //@synthesize avoidHighways=_avoidHighways - In the implementation block
@property (nonatomic,readonly) long long defaultDisabledTransitModes;              //@synthesize defaultDisabledTransitModes=_defaultDisabledTransitModes - In the implementation block
+(char)supportsSecureCoding;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(char)avoidTolls;
-(char)avoidHighways;
-(long long)defaultDisabledTransitModes;
-(id)initWithAvoidTolls:(char)arg1 avoidHighways:(char)arg2 defaultDisabledTransitModes:(long long)arg3 ;
-(id)createUserPreferences;
@end

