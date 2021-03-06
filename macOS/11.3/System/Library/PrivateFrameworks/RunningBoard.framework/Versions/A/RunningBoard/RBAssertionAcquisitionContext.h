/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBProcess, RBSAssertionDescriptor;

@interface RBAssertionAcquisitionContext : NSObject {

	char _allowAbstractTarget;
	char _unitTesting;
	RBProcess* _process;
	RBSAssertionDescriptor* _descriptor;
	unsigned long long _acquisitionPolicy;
	id _holdToken;

}

@property (nonatomic,readonly) RBProcess * process;                              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) RBSAssertionDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) id holdToken;                                       //@synthesize holdToken=_holdToken - In the implementation block
@property (assign,nonatomic) char unitTesting;                                   //@synthesize unitTesting=_unitTesting - In the implementation block
@property (assign,nonatomic) char allowAbstractTarget;                           //@synthesize allowAbstractTarget=_allowAbstractTarget - In the implementation block
@property (assign,nonatomic) unsigned long long acquisitionPolicy;               //@synthesize acquisitionPolicy=_acquisitionPolicy - In the implementation block
+(id)contextForProcess:(id)arg1 withDescriptor:(id)arg2 ;
-(unsigned long long)acquisitionPolicy;
-(void)setAcquisitionPolicy:(unsigned long long)arg1 ;
-(void)setAllowAbstractTarget:(char)arg1 ;
-(void)setHoldToken:(id)arg1 ;
-(char)allowAbstractTarget;
-(RBSAssertionDescriptor *)descriptor;
-(void)setUnitTesting:(char)arg1 ;
-(char)unitTesting;
-(RBProcess *)process;
-(id)holdToken;
@end

