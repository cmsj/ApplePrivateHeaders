/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {

	NSMutableDictionary* _flowControlledOperationKeys;

}

@property (readonly) NSMutableDictionary * flowControlledOperationKeys;              //@synthesize flowControlledOperationKeys=_flowControlledOperationKeys - In the implementation block
-(id)init;
-(id)CKStatusReportArray;
-(void)unlimitAllOperations;
-(NSMutableDictionary *)flowControlledOperationKeys;
-(char)isOperationLimited:(id)arg1 outLimitError:(id*)arg2 ;
-(double)secondsUntilUnlimited:(id)arg1 ;
-(void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3 ;
@end

