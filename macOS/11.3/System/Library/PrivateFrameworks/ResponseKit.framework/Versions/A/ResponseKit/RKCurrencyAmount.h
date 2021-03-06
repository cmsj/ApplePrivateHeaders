/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/Versions/A/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RKCurrencyAmount : NSObject <NSSecureCoding> {

	NSString* _string;
	NSString* _currency;
	double _value;

}

@property (readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (readonly) NSString * currency;              //@synthesize currency=_currency - In the implementation block
@property (readonly) double value;                     //@synthesize value=_value - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)value;
-(NSString *)currency;
-(id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3 ;
@end

