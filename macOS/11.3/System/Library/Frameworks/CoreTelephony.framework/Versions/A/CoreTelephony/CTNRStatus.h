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

@interface CTNRStatus : NSObject <NSCopying, NSSecureCoding> {

	char _isSADisabled;
	char _isNSADisabled;
	unsigned long long _saDisabledReasonMask;
	unsigned long long _nsaDisabledReasonMask;

}

@property (assign,nonatomic) char isSADisabled;                                     //@synthesize isSADisabled=_isSADisabled - In the implementation block
@property (assign,nonatomic) unsigned long long saDisabledReasonMask;               //@synthesize saDisabledReasonMask=_saDisabledReasonMask - In the implementation block
@property (assign,nonatomic) char isNSADisabled;                                    //@synthesize isNSADisabled=_isNSADisabled - In the implementation block
@property (assign,nonatomic) unsigned long long nsaDisabledReasonMask;              //@synthesize nsaDisabledReasonMask=_nsaDisabledReasonMask - In the implementation block
+(char)supportsSecureCoding;
+(id)default;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSADisabled:(char)arg1 saReasonMask:(unsigned long long)arg2 nsaDisabled:(char)arg3 nsaReasonMask:(unsigned long long)arg4 ;
-(char)isSADisabled;
-(unsigned long long)saDisabledReasonMask;
-(char)isNSADisabled;
-(unsigned long long)nsaDisabledReasonMask;
-(void)setIsSADisabled:(char)arg1 ;
-(void)setSaDisabledReasonMask:(unsigned long long)arg1 ;
-(void)setIsNSADisabled:(char)arg1 ;
-(void)setNsaDisabledReasonMask:(unsigned long long)arg1 ;
@end

