/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSPlayInfoRequestContext, SSPlayInfoResponse, NSString;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {

	SSPlayInfoRequestContext* _context;
	SSPlayInfoResponse* _response;

}

@property (assign,nonatomic) id<SSPlayInfoRequestDelegate> delegate; 
@property (readonly) SSPlayInfoRequestContext * playInfoContext; 
@property (readonly) SSPlayInfoResponse * playInfoResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(char)start;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithPlayInfoContext:(id)arg1 ;
-(void)startWithPlayInfoResponseBlock:(/*^block*/id)arg1 ;
-(SSPlayInfoRequestContext *)playInfoContext;
-(SSPlayInfoResponse *)playInfoResponse;
@end

