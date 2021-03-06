/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/SSRequest.h>

@class NSNumber, NSArray;

@interface SSRentalCheckinRequest : SSRequest {

	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
-(void)dealloc;
-(id)init;
-(NSNumber *)accountIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)sinfs;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(NSNumber *)rentalKeyIdentifier;
@end

