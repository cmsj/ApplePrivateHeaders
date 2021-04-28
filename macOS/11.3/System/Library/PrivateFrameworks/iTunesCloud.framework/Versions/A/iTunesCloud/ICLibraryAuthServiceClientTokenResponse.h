/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICLibraryAuthServiceClientTokenResult;

@interface ICLibraryAuthServiceClientTokenResponse : NSObject <NSCopying> {

	char _success;
	int _resultCode;
	NSString* _serverHostName;
	long long _serverInstance;
	ICLibraryAuthServiceClientTokenResult* _tokenResult;

}

@property (nonatomic,readonly) int resultCode;                                                        //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverHostName;                                        //@synthesize serverHostName=_serverHostName - In the implementation block
@property (nonatomic,readonly) long long serverInstance;                                              //@synthesize serverInstance=_serverInstance - In the implementation block
@property (assign,getter=isSuccess,nonatomic) char success;                                           //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) ICLibraryAuthServiceClientTokenResult * tokenResult;              //@synthesize tokenResult=_tokenResult - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)resultCode;
-(id)initWithResultCode:(int)arg1 ;
-(char)isSuccess;
-(void)setSuccess:(char)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)serverHostName;
-(long long)serverInstance;
-(ICLibraryAuthServiceClientTokenResult *)tokenResult;
@end
