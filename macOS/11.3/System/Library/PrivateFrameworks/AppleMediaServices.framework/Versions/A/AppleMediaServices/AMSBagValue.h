/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagDataSourceProtocol;
@class ACAccount, NSString, NSArray;

@interface AMSBagValue : NSObject {

	ACAccount* _account;
	id<AMSBagDataSourceProtocol> _dataSource;
	NSString* _key;
	NSArray* _transformBlocks;
	unsigned long long _valueType;

}

@property (copy) ACAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (__weak) id<AMSBagDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) NSString * key;                                       //@synthesize key=_key - In the implementation block
@property (retain) NSArray * transformBlocks;                            //@synthesize transformBlocks=_transformBlocks - In the implementation block
@property (assign) unsigned long long valueType;                         //@synthesize valueType=_valueType - In the implementation block
@property (getter=isLoaded,readonly) char loaded; 
+(id)globalBagValueStorage;
+(id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2 ;
+(char)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2 ;
+(id)bagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3 ;
+(id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3 ;
+(id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3 ;
-(char)isLoaded;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id<AMSBagDataSourceProtocol>)dataSource;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(unsigned long long)valueType;
-(id)valueWithError:(id*)arg1 ;
-(void)setValueType:(unsigned long long)arg1 ;
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 ;
-(id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4 ;
-(NSArray *)transformBlocks;
-(void)setTransformBlocks:(NSArray *)arg1 ;
-(id)_processedDefaultValue:(id)arg1 ;
-(void)_applyTransformsToValue:(id)arg1 index:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)valuePromise;
-(id)transformWithBlock:(/*^block*/id)arg1 ;
@end
