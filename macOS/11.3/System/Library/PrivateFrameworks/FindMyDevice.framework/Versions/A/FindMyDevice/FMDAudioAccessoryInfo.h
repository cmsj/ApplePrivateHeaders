/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/Versions/A/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDAudioAccessoryInfo : NSObject <NSSecureCoding> {

	NSString* _systemSerialNumber;
	NSString* _leftSerialNumber;
	NSString* _rightSerialNumber;

}

@property (nonatomic,copy) NSString * systemSerialNumber;              //@synthesize systemSerialNumber=_systemSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * leftSerialNumber;                //@synthesize leftSerialNumber=_leftSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * rightSerialNumber;               //@synthesize rightSerialNumber=_rightSerialNumber - In the implementation block
+(char)supportsSecureCoding;
-(void)setSystemSerialNumber:(NSString *)arg1 ;
-(void)setLeftSerialNumber:(NSString *)arg1 ;
-(void)setRightSerialNumber:(NSString *)arg1 ;
-(NSString *)systemSerialNumber;
-(NSString *)leftSerialNumber;
-(NSString *)rightSerialNumber;
-(id)initWithSystemSerialNumber:(id)arg1 leftSerialNumber:(id)arg2 rightSerialNumber:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

