/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NUAutoCalculator, NSUUID, NSString;

@interface PAAutoCalculatorEntry : NSObject {

	NUAutoCalculator* _calculator;
	NSUUID* _operationUUID;
	NSString* _operationIdentifier;
	NSString* _autoIdentifier;
	/*^block*/id _completionBlock;

}

@property (retain) NUAutoCalculator * calculator;               //@synthesize calculator=_calculator - In the implementation block
@property (retain) NSUUID * operationUUID;                      //@synthesize operationUUID=_operationUUID - In the implementation block
@property (retain) NSString * operationIdentifier;              //@synthesize operationIdentifier=_operationIdentifier - In the implementation block
@property (retain) NSString * autoIdentifier;                   //@synthesize autoIdentifier=_autoIdentifier - In the implementation block
@property (copy) id completionBlock;                            //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)description;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)autoIdentifier;
-(NSUUID *)operationUUID;
-(void)setOperationUUID:(NSUUID *)arg1 ;
-(NUAutoCalculator *)calculator;
-(void)setCalculator:(NUAutoCalculator *)arg1 ;
-(NSString *)operationIdentifier;
-(void)setOperationIdentifier:(NSString *)arg1 ;
-(void)setAutoIdentifier:(NSString *)arg1 ;
@end

