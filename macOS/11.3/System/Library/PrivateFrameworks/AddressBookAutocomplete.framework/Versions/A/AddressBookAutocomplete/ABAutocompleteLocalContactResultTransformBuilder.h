/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookAutocomplete.framework/Versions/A/AddressBookAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CNAutocompleteResultFactory;

@interface ABAutocompleteLocalContactResultTransformBuilder : NSObject {

	NSMutableArray* _transforms;
	CNAutocompleteResultFactory* _factory;
	unsigned long long _builtContactType;

}

@property (assign) unsigned long long builtContactType;              //@synthesize builtContactType=_builtContactType - In the implementation block
+(/*^block*/id)valueTransformForProperty:(id)arg1 ;
+(id)localContactBuilderWithResultFactory:(id)arg1 ;
+(id)suggestedContactBuilderWithResultFactory:(id)arg1 ;
+(id)serverContactBuilderWithResultFactory:(id)arg1 ;
-(/*^block*/id)build;
-(id)initWithResultFactory:(id)arg1 ;
-(void)setBuiltContactType:(unsigned long long)arg1 ;
-(/*^block*/id)makeTransformForProperty:(id)arg1 ;
-(unsigned long long)builtContactType;
-(/*^block*/id)buildAggregateTransform;
-(void)addTransformForProperty:(id)arg1 ;
@end
