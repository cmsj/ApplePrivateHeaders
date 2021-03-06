/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFInvocationToken.h>
#import <libobjc.A.dylib/EFCancelable.h>

@class NSString;

@interface EFCancelationToken : EFInvocationToken <EFCancelable>

@property (getter=isCanceled,readonly) char canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
+(id)_descriptionString;
+(id)tokenWithLabel:(id)arg1 cancelationBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(char)isCanceled;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(void)addCancelable:(id)arg1 ;
-(void)removeAllCancelationBlocks;
@end

