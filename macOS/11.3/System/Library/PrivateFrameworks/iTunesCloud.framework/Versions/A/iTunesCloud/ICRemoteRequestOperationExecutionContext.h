/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRemoteRequestOperation;

@interface ICRemoteRequestOperationExecutionContext : NSObject <NSSecureCoding> {

	ICRemoteRequestOperation* _remoteRequestOperation;
	long long _qualityOfService;

}

@property (nonatomic,readonly) ICRemoteRequestOperation * remoteRequestOperation;              //@synthesize remoteRequestOperation=_remoteRequestOperation - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                       //@synthesize qualityOfService=_qualityOfService - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(id)initWithRemoteRequestOperation:(id)arg1 ;
-(ICRemoteRequestOperation *)remoteRequestOperation;
@end

