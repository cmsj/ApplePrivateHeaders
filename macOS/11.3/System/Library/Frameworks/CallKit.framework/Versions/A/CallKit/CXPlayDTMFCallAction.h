/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSString;

@interface CXPlayDTMFCallAction : CXCallAction {

	NSString* _digits;
	long long _type;

}

@property (nonatomic,copy) NSString * digits;              //@synthesize digits=_digits - In the implementation block
@property (assign,nonatomic) long long type;               //@synthesize type=_type - In the implementation block
+(char)supportsSecureCoding;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)digits;
-(id)customDescription;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)setDigits:(NSString *)arg1 ;
-(id)initWithCallUUID:(id)arg1 digits:(id)arg2 type:(long long)arg3 ;
@end

