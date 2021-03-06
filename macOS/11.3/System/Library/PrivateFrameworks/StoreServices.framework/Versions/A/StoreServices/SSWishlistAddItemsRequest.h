/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/SSRequest.h>

@class NSArray, NSString;

@interface SSWishlistAddItemsRequest : SSRequest {

	NSArray* _items;
	NSString* _caller;
	NSString* _version;

}

@property (copy,readonly) NSArray * items;                 //@synthesize items=_items - In the implementation block
@property (copy,readonly) NSString * caller;               //@synthesize caller=_caller - In the implementation block
@property (copy,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
-(id)init;
-(NSString *)version;
-(NSArray *)items;
-(NSString *)caller;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)_convertedValueForValue:(id)arg1 ;
-(id)copyQueryStringParameters;
-(id)initWithItems:(id)arg1 caller:(id)arg2 version:(id)arg3 ;
-(void)startWithAddItemsResponseBlock:(/*^block*/id)arg1 ;
@end

