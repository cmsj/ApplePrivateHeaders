/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding> {

	long long _authenticationPromptStyle;
	char _fetchITunesAccountNames;

}

@property (assign,nonatomic) long long authenticationPromptStyle;              //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) char fetchITunesAccountNames;                     //@synthesize fetchITunesAccountNames=_fetchITunesAccountNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)authenticationPromptStyle;
-(void)setAuthenticationPromptStyle:(long long)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(char)fetchITunesAccountNames;
-(void)setFetchITunesAccountNames:(char)arg1 ;
@end

