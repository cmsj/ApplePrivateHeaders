/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNVariableChangeHelper : NSObject {

	id _value;
	/*^block*/id _test;

}

@property (nonatomic,copy) id value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) id test;               //@synthesize test=_test - In the implementation block
-(id)init;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setTest:(id)arg1 ;
-(id)test;
-(id)initWithValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 test:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 andPerformBlockIfChanged:(/*^block*/id)arg2 ;
@end
