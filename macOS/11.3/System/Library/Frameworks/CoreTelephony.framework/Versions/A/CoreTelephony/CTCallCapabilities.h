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

@interface CTCallCapabilities : NSObject <NSCopying, NSSecureCoding> {

	char _isWifiCallingAvailable;
	char _isVoLTECallingAvailable;
	char _isCSCallingAvailable;
	char _isEmergencyCallingOnWifiAllowed;
	char _isEmergencyCallingOnWifiAvailable;
	char _isCarrierSupportsEmergencyCallOnWifiNoLimit;

}

@property (assign,nonatomic) char isWifiCallingAvailable;                                   //@synthesize isWifiCallingAvailable=_isWifiCallingAvailable - In the implementation block
@property (assign,nonatomic) char isVoLTECallingAvailable;                                  //@synthesize isVoLTECallingAvailable=_isVoLTECallingAvailable - In the implementation block
@property (assign,nonatomic) char isCSCallingAvailable;                                     //@synthesize isCSCallingAvailable=_isCSCallingAvailable - In the implementation block
@property (assign,nonatomic) char isEmergencyCallingOnWifiAllowed;                          //@synthesize isEmergencyCallingOnWifiAllowed=_isEmergencyCallingOnWifiAllowed - In the implementation block
@property (assign,nonatomic) char isEmergencyCallingOnWifiAvailable;                        //@synthesize isEmergencyCallingOnWifiAvailable=_isEmergencyCallingOnWifiAvailable - In the implementation block
@property (assign,nonatomic) char isCarrierSupportsEmergencyCallOnWifiNoLimit;              //@synthesize isCarrierSupportsEmergencyCallOnWifiNoLimit=_isCarrierSupportsEmergencyCallOnWifiNoLimit - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isWifiCallingAvailable;
-(char)isVoLTECallingAvailable;
-(char)isCSCallingAvailable;
-(char)isEmergencyCallingOnWifiAllowed;
-(char)isEmergencyCallingOnWifiAvailable;
-(char)isCarrierSupportsEmergencyCallOnWifiNoLimit;
-(void)setIsWifiCallingAvailable:(char)arg1 ;
-(void)setIsVoLTECallingAvailable:(char)arg1 ;
-(void)setIsCSCallingAvailable:(char)arg1 ;
-(void)setIsEmergencyCallingOnWifiAllowed:(char)arg1 ;
-(void)setIsEmergencyCallingOnWifiAvailable:(char)arg1 ;
-(void)setIsCarrierSupportsEmergencyCallOnWifiNoLimit:(char)arg1 ;
@end

