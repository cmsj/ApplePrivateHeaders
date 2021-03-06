/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface AMSMediaToken : NSObject <NSSecureCoding> {

	char _valid;
	NSDate* _expirationDate;
	double _lifetime;
	NSString* _tokenString;

}

@property (readonly) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) double lifetime;                        //@synthesize lifetime=_lifetime - In the implementation block
@property (readonly) NSString * tokenString;                 //@synthesize tokenString=_tokenString - In the implementation block
@property (getter=isValid,readonly) char valid;              //@synthesize valid=_valid - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)tokenString;
-(char)isExpired;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 valid:(char)arg4 ;
-(double)lifetime;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 ;
-(id)invalidCopy;
-(double)percentageOfLifetimeRemaining;
-(char)willExpireWithin:(double)arg1 ;
@end

