/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/Versions/A/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/FMCancelable.h>

@class NSMutableArray, NSString;

@interface FMCancelationToken : NSObject <FMCancelable> {

	char _isCanceled;
	NSMutableArray* _cancelationBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
+(id)tokenWrappingCancelable:(id)arg1 ;
-(id)init;
-(void)cancel;
-(char)isCanceled;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(void)addCancelable:(id)arg1 ;
-(id)nts_cancel;
-(void)callCancelationBlocks:(id)arg1 ;
@end

