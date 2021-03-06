/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/Install-Structs.h>
#import <Install/TreeNode.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PathTree : TreeNode <NSCopying> {

	unsigned numberOfNodes;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithValue:(char*)arg1 ;
-(unsigned)numberOfNodes;
-(id)addTreePath:(char*)arg1 withType:(int)arg2 ;
-(void)removeTreePath:(char*)arg1 ;
-(void)removeTreeNode:(id)arg1 ;
@end

