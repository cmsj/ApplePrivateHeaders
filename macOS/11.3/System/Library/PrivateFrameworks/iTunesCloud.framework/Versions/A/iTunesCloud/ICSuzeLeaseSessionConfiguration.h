/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICStoreRequestContext;

@interface ICSuzeLeaseSessionConfiguration : NSObject <NSCopying> {

	id _leaseID;
	long long _mediaType;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,readonly) id leaseID;                                               //@synthesize leaseID=_leaseID - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)mediaType;
-(ICStoreRequestContext *)requestContext;
-(id)leaseID;
-(id)initWithRequestContext:(id)arg1 leaseID:(id)arg2 mediaType:(long long)arg3 ;
@end

