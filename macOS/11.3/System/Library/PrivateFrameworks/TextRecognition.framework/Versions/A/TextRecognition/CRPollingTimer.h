/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRPollingTimer : NSObject {

	SCD_Struct_CR5 _fireTime;
	char _fired;
	char _valid;
	id _target;
	SEL _selector;

}

@property (assign,nonatomic) SCD_Struct_CR5 fireTime; 
@property (assign,nonatomic,__weak) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                         //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) char fired;                           //@synthesize fired=_fired - In the implementation block
@property (assign,nonatomic) char valid;                           //@synthesize valid=_valid - In the implementation block
-(SEL)selector;
-(void)invalidate;
-(char)valid;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(SCD_Struct_CR5)fireTime;
-(void)setFireTime:(SCD_Struct_CR5)arg1 ;
-(char)fired;
-(void)setValid:(char)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)evalAtTime:(SCD_Struct_CR5)arg1 ;
-(void)setFired:(char)arg1 ;
@end

