/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLMultiArray.h>

@class MLMultiArray;

@interface MLMultiArrayView : MLMultiArray {

	MLMultiArray* _parent;

}

@property (nonatomic,readonly) MLMultiArray * parent;              //@synthesize parent=_parent - In the implementation block
+(void)squeezeShape:(id)arg1 strides:(id)arg2 resultingShape:(id*)arg3 resultingStrides:(id*)arg4 ;
+(char)isSqueezableShape:(id)arg1 dimensions:(id)arg2 ;
+(char)isSqueezableShape:(id)arg1 ;
-(MLMultiArray *)parent;
-(id)initSlicingMultiArray:(id)arg1 origin:(id)arg2 shape:(id)arg3 squeeze:(char)arg4 error:(id*)arg5 ;
-(id)initSqueezingMultiArray:(id)arg1 dimensions:(id)arg2 error:(id*)arg3 ;
-(id)initExpandingDimensionsOfMultiArray:(id)arg1 axis:(long long)arg2 ;
@end

