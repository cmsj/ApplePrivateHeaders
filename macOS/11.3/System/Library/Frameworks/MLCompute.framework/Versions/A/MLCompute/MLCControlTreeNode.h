/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLCTensor;

@interface MLCControlTreeNode : NSObject <NSCopying> {

	char _needToNegate;
	MLCTensor* _predicate;

}

@property (nonatomic,readonly) MLCTensor * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) char needToNegate;                  //@synthesize needToNegate=_needToNegate - In the implementation block
+(id)controlTreeNodeWithPredicate:(id)arg1 needToNegate:(char)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(MLCTensor *)predicate;
-(id)initWithTensor:(id)arg1 needToNegate:(char)arg2 ;
-(char)needToNegate;
@end

