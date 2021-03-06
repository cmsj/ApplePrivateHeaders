/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFInvocable.h>

@class NSLock, NSMutableArray, NSString;

@interface EFInvocationToken : NSObject <EFInvocable> {

	NSLock* _lock;
	NSMutableArray* _blocks;
	char _isInvoked;
	NSString* _label;

}

@property (getter=isInvoked,readonly) char invoked; 
@property (nonatomic,copy,readonly) NSString * label;               //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_descriptionString;
+(id)tokenWithLabel:(id)arg1 invocationBlock:(/*^block*/id)arg2 ;
+(id)tokenWithInvocationBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)invoke;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(char)isInvoked;
-(void)addInvocationBlock:(/*^block*/id)arg1 ;
-(void)removeAllInvocationBlocks;
-(id)initWithInvocationBlock:(/*^block*/id)arg1 ;
-(id)_nts_consumeBlocks;
-(void)addInvocable:(id)arg1 ;
@end

