/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, CXHandle;

@interface CXAccount : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _accountDescription;
	NSString* _shortLabel;
	CXHandle* _handle;
	NSString* _isoCountryCode;
	NSString* _serviceName;

}

@property (readonly) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSString * accountDescription;              //@synthesize accountDescription=_accountDescription - In the implementation block
@property (copy,readonly) NSString * shortLabel;                      //@synthesize shortLabel=_shortLabel - In the implementation block
@property (readonly) CXHandle * handle;                               //@synthesize handle=_handle - In the implementation block
@property (copy,readonly) NSString * isoCountryCode;                  //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (copy,readonly) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
+(char)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(CXHandle *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSString *)serviceName;
-(NSString *)isoCountryCode;
-(NSString *)accountDescription;
-(char)isEqualToAccount:(id)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5 ;
-(id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5 shortLabel:(id)arg6 ;
-(NSString *)shortLabel;
@end
