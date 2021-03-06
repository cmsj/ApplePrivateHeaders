/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, RMManagementChannel;

@interface RMAsset : NSObject <NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	NSString* _serverToken;
	NSData* _content;
	RMManagementChannel* _channel;

}

@property (nonatomic,copy,readonly) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverToken;                     //@synthesize serverToken=_serverToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * content;                           //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) RMManagementChannel * channel;              //@synthesize channel=_channel - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSString *)identifier;
-(NSData *)content;
-(RMManagementChannel *)channel;
-(char)isEqualToAsset:(id)arg1 ;
-(NSString *)serverToken;
-(id)initWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 content:(id)arg4 channel:(id)arg5 ;
@end

