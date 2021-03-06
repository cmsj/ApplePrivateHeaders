/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/Install-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PathTree, NSMutableDictionary, NSMapTable;

@interface IFInstallPlan : NSObject <NSCoding, NSCopying> {

	PathTree* _installTree;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _idToNode;
	NSMutableDictionary* _nodeActions;
	NSMapTable* _regexActions;

}
+(id)planWithContentsOfFile:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)enumerator;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(id)valueForAttribute:(id)arg1 ;
-(id)nodeForPath:(const char*)arg1 ;
-(void)removePath:(const char*)arg1 ;
-(char)setValue:(id)arg1 forAttribute:(id)arg2 ;
-(void)removeNode:(id)arg1 ;
-(char)pathExists:(const char*)arg1 ;
-(id)initWithRootPath:(const char*)arg1 ;
-(id)allAttributes;
-(char)hasPatch;
-(id)nodeForIdentifier:(id)arg1 ;
-(id)nodesForActionType:(id)arg1 ;
-(unsigned)numberOfNodes;
-(id)nodeForPath:(const char*)arg1 returningLastNode:(id*)arg2 ;
-(id)alternatePathForNode:(id)arg1 ;
-(void)setAlternatePath:(id)arg1 forNode:(id)arg2 ;
-(id)addPath:(const char*)arg1 withType:(int)arg2 ;
-(id)alternatePathForLastParentNode:(id)arg1 onPath:(const char*)arg2 ;
-(void)setShouldSkipNode:(id)arg1 ;
-(char)shouldSkipNode:(id)arg1 ;
-(void)setIdentifier:(id)arg1 forNode:(id)arg2 ;
-(void)addAction:(id)arg1 toNode:(id)arg2 ;
-(id)nodeIdentifiers;
-(void)setAlternatePath:(id)arg1 forPath:(id)arg2 ;
-(id)alternatePathForPath:(id)arg1 ;
-(void)setShouldSkipPath:(id)arg1 ;
-(char)shouldSkipPath:(id)arg1 ;
-(char)isPatchForNode:(id)arg1 ;
-(void)setIsPatchForNode:(id)arg1 ;
-(void)removeValueForAttribute:(id)arg1 ;
-(id)unresolvedActionsForNode:(id)arg1 ;
-(void)removeAction:(id)arg1 fromNode:(id)arg2 ;
-(void)printPlan:(char)arg1 ;
@end

