/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class VNMPContext;

@interface VNMomentProcessor : NSObject {

	VNMPContext* _context;

}

@property (nonatomic,retain) VNMPContext * context;              //@synthesize context=_context - In the implementation block
+(id)sortImageDescriptorsChronologically:(id)arg1 ;
-(VNMPContext *)context;
-(void)setContext:(VNMPContext *)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id*)arg3 ;
-(id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id*)arg2 ;
-(id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id*)arg2 ;
-(id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(char)arg2 error:(id*)arg3 ;
-(id)convertClusterNodesListToDescriptorsList:(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *>>*)arg1 ;
-(id)performClustersPostprocessing:(id)arg1 error:(id*)arg2 ;
-(id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id*)arg3 ;
-(id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id*)arg3 ;
-(id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id*)arg2 ;
-(id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3 ;
@end

