/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTreeNode.h>
#import <libobjc.A.dylib/_NSBindingTree.h>

@interface _NSControllerTreeProxy : NSTreeNode <_NSBindingTree> {

	id _controller;

}
-(unsigned long long)count;
-(id)indexPath;
-(id)parentNode;
-(id)initWithController:(id)arg1 ;
-(id)representedObject;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndexPath:(id)arg2 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(char)_validateValue:(id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndexPath:(id)arg3 error:(id*)arg4 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndexPath:(id)arg3 ;
-(void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ofObjectAtIndexPath:(id)arg4 ;
-(char)isLeaf;
-(unsigned long long)countOfChildNodes;
-(id)descendantNodeAtIndexPath:(id)arg1 ;
-(id)childNodes;
-(void)sortWithSortDescriptors:(id)arg1 recursively:(char)arg2 ;
-(id)mutableChildNodes;
-(id)nodeAtIndexPath:(id)arg1 ;
-(unsigned long long)countForIndexPath:(id)arg1 ;
-(char)isExpandableAtArrangedObjectIndexPath:(id)arg1 ;
-(id)objectInChildNodesAtIndex:(unsigned long long)arg1 ;
@end

