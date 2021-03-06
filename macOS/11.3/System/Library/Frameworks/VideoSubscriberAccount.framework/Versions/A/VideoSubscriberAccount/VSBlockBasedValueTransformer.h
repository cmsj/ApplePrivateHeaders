/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@interface VSBlockBasedValueTransformer : NSValueTransformer {

	/*^block*/id _transformationBlock;
	/*^block*/id _reverseTransformationBlock;

}

@property (nonatomic,copy) id transformationBlock;                     //@synthesize transformationBlock=_transformationBlock - In the implementation block
@property (nonatomic,copy) id reverseTransformationBlock;              //@synthesize reverseTransformationBlock=_reverseTransformationBlock - In the implementation block
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformationBlock;
-(id)reverseTransformationBlock;
-(void)setTransformationBlock:(id)arg1 ;
-(void)setReverseTransformationBlock:(id)arg1 ;
@end

