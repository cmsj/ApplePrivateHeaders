/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AKUserInformation;

@interface AKAuthorizationScopesUserSelection : NSObject <NSSecureCoding> {

	char _makePrivateEmail;
	AKUserInformation* _userInformation;

}

@property (nonatomic,copy) AKUserInformation * userInformation;              //@synthesize userInformation=_userInformation - In the implementation block
@property (assign,nonatomic) char makePrivateEmail;                          //@synthesize makePrivateEmail=_makePrivateEmail - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AKUserInformation *)userInformation;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(void)setMakePrivateEmail:(char)arg1 ;
-(char)makePrivateEmail;
@end

