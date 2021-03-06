/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPBeaconRole : NSObject <NSCopying, NSSecureCoding> {

	long long _roleId;
	NSString* _role;
	NSString* _roleEmoji;

}

@property (assign,nonatomic) long long roleId;                //@synthesize roleId=_roleId - In the implementation block
@property (nonatomic,copy) NSString * role;                   //@synthesize role=_role - In the implementation block
@property (nonatomic,copy) NSString * roleEmoji;              //@synthesize roleEmoji=_roleEmoji - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)role;
-(void)setRole:(NSString *)arg1 ;
-(long long)roleId;
-(NSString *)roleEmoji;
-(void)setRoleId:(long long)arg1 ;
-(void)setRoleEmoji:(NSString *)arg1 ;
-(id)initWithRoleId:(long long)arg1 role:(id)arg2 roleEmoji:(id)arg3 ;
@end

