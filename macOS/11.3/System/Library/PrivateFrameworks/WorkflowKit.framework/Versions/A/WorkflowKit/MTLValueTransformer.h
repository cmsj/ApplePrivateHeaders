/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>
#import <libobjc.A.dylib/MTLTransformerErrorHandling.h>

@class NSString;

@interface MTLValueTransformer : NSValueTransformer <MTLTransformerErrorHandling> {

	/*^block*/id _forwardBlock;
	/*^block*/id _reverseBlock;

}

@property (nonatomic,copy,readonly) id forwardBlock;                //@synthesize forwardBlock=_forwardBlock - In the implementation block
@property (nonatomic,copy,readonly) id reverseBlock;                //@synthesize reverseBlock=_reverseBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)allowsReverseTransformation;
+(Class)transformedValueClass;
+(id)transformerUsingForwardBlock:(/*^block*/id)arg1 reverseBlock:(/*^block*/id)arg2 ;
+(id)transformerUsingForwardBlock:(/*^block*/id)arg1 ;
+(id)transformerUsingReversibleBlock:(/*^block*/id)arg1 ;
+(id)transformerWithBlock:(/*^block*/id)arg1 ;
+(id)reversibleTransformerWithBlock:(/*^block*/id)arg1 ;
+(id)reversibleTransformerWithForwardBlock:(/*^block*/id)arg1 reverseBlock:(/*^block*/id)arg2 ;
-(id)transformedValue:(id)arg1 ;
-(id)initWithForwardBlock:(/*^block*/id)arg1 reverseBlock:(/*^block*/id)arg2 ;
-(id)reverseBlock;
-(id)transformedValue:(id)arg1 success:(char*)arg2 error:(id*)arg3 ;
-(id)forwardBlock;
@end
