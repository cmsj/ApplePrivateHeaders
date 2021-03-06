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

@class CTEmergencyMode, CTXPCServiceSubscriptionContext;

@interface CTEmergencyModeResult : NSObject <NSCopying, NSSecureCoding> {

	CTEmergencyMode* _mode;
	CTXPCServiceSubscriptionContext* _context;

}

@property (nonatomic,readonly) CTEmergencyMode * mode;                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(CTEmergencyMode *)mode;
-(id)initWithMode:(id)arg1 andContext:(id)arg2 ;
@end

