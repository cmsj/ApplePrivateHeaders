/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface CKDPowerAssertionObserver : NSObject {

	NSMapTable* _operationsHoldingPowerAssertionsByID;

}

@property (nonatomic,retain) NSMapTable * operationsHoldingPowerAssertionsByID;              //@synthesize operationsHoldingPowerAssertionsByID=_operationsHoldingPowerAssertionsByID - In the implementation block
+(id)sharedObserver;
-(id)init;
-(id)_init;
-(id)CKStatusReportArray;
-(void)operationDidReleasePowerAssertion:(id)arg1 ;
-(void)operationDidAcquirePowerAssertion:(id)arg1 ;
-(NSMapTable *)operationsHoldingPowerAssertionsByID;
-(void)setOperationsHoldingPowerAssertionsByID:(NSMapTable *)arg1 ;
@end

