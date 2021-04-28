/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/UXCollectionViewIndexPathsSet.h>

@interface UXCollectionViewMutableIndexPathsSet : UXCollectionViewIndexPathsSet
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addIndexPath:(id)arg1 ;
-(void)addIndexPaths:(id)arg1 ;
-(void)addIndexPathsSet:(id)arg1 ;
-(void)addSection:(long long)arg1 itemsInRange:(NSRange)arg2 ;
-(void)removeSection:(long long)arg1 itemsInRange:(NSRange)arg2 ;
-(void)removeSection:(long long)arg1 ;
-(void)removeSections:(id)arg1 ;
-(void)removeIndexPath:(id)arg1 ;
-(void)removeIndexPaths:(id)arg1 ;
-(void)removeIndexPathsSet:(id)arg1 ;
-(void)removeAllIndexPaths;
-(void)intersectIndexPathsSet:(id)arg1 ;
-(void)_adjustForInsertionOfSection:(unsigned long long)arg1 ;
-(void)adjustForInsertionOfSection:(unsigned long long)arg1 ;
-(void)adjustForInsertionOfSections:(id)arg1 ;
-(void)_adjustForDeletionOfSection:(unsigned long long)arg1 ;
-(void)adjustForDeletionOfSection:(unsigned long long)arg1 ;
-(void)adjustForDeletionOfSections:(id)arg1 ;
-(void)adjustForInsertionOfItems:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)adjustForInsertionOfIndexPath:(id)arg1 ;
-(void)adjustForDeletionOfItems:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)adjustForDeletionOfIndexPath:(id)arg1 ;
@end
