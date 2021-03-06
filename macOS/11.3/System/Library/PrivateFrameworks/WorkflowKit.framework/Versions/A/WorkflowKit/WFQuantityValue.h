/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface WFQuantityValue : NSObject <NSSecureCoding> {

	NSDecimalNumber* _magnitude;
	NSString* _unitString;

}

@property (nonatomic,readonly) NSDecimalNumber * magnitude;              //@synthesize magnitude=_magnitude - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitString;               //@synthesize unitString=_unitString - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)unitString;
-(NSDecimalNumber *)magnitude;
-(id)initWithMagnitude:(id)arg1 unitString:(id)arg2 ;
@end

