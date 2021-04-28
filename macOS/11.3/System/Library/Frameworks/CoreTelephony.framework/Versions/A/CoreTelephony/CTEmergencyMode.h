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

@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding> {

	char _enabled;
	char _isEmergencyText;
	long long _type;

}

@property (assign,nonatomic) char enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char isEmergencyText;              //@synthesize isEmergencyText=_isEmergencyText - In the implementation block
+(char)supportsSecureCoding;
+(id)convertFromEmergencyMode:(const EmergencyMode*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(id)initWithEnabled:(char)arg1 type:(long long)arg2 isEmergencyText:(char)arg3 ;
-(char)isEmergencyText;
-(char)isEqualToCTEmergencyMode:(id)arg1 ;
-(void)setIsEmergencyText:(char)arg1 ;
@end
