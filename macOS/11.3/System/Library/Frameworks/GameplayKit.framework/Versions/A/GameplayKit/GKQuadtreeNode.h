/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtreeNode : NSObject {

	GKCQuadTreeNode<NSObject>* _cQuadTreeNode;
	GKQuad _quad;

}

@property (nonatomic,readonly) GKQuadRef quad;              //@synthesize quad=_quad - In the implementation block
-(1)max;
-(1)min;
-(GKQuadRef)quad;
-(void*)cQuadTreeNode;
-(void)setCQuadTreeNode:(void*)arg1 ;
@end

