/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <AppKit/NSAccessibilityElement.h>

@class NSArray, UXCollectionViewLayout, NSMutableArray, UXCollectionView;

@interface UXCollectionViewLayoutAccessibility : NSAccessibilityElement {

	NSArray* _accessibilityVisibleChildren;
	UXCollectionViewLayout* _layout;
	unsigned long long __sectionCacheOffset;
	NSMutableArray* __sectionCache;

}

@property (assign,nonatomic,__weak) UXCollectionViewLayout * layout;                     //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) unsigned long long _sectionCacheOffset;                     //@synthesize _sectionCacheOffset=__sectionCacheOffset - In the implementation block
@property (nonatomic,retain) NSMutableArray * _sectionCache;                             //@synthesize _sectionCache=__sectionCache - In the implementation block
@property (nonatomic,__weak,readonly) UXCollectionView * collectionView; 
@property (nonatomic,copy,readonly) NSArray * accessibilityVisibleChildren;              //@synthesize accessibilityVisibleChildren=_accessibilityVisibleChildren - In the implementation block
@property (nonatomic,copy) NSArray * accessibilitySelectedCells; 
+(Class)sectionAccessibilityClass;
-(UXCollectionViewLayout *)layout;
-(id)accessibilitySubrole;
-(id)accessibilityParent;
-(id)accessibilityChildren;
-(id)accessibilityRole;
-(id)accessibilityLabel;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(UXCollectionView *)collectionView;
-(void)_dumpVisibleChildren;
-(void)accessibilityDidEndScrolling;
-(void)accessibilityInvalidateLayout;
-(void)accessibilityPrepareLayout;
-(id)_visibleSections;
-(void)_trimSectionCacheToVisibleSections:(id)arg1 ;
-(id)_dequeueSectionWithIndex:(unsigned long long)arg1 ;
-(long long)accessibilityRowCount;
-(NSArray *)accessibilityVisibleChildren;
-(unsigned long long)_sectionCacheOffset;
-(NSMutableArray *)_sectionCache;
-(void)set_sectionCacheOffset:(unsigned long long)arg1 ;
-(id)initWithLayout:(id)arg1 ;
-(void)setLayout:(UXCollectionViewLayout *)arg1 ;
-(id)previousSectionForSection:(id)arg1 ;
-(id)nextSectionForSection:(id)arg1 ;
-(id)accessibilityRoleDescription;
-(long long)accessibilityColumnCount;
-(NSArray *)accessibilitySelectedCells;
-(void)accessibilityPostNotification:(id)arg1 ;
-(id)accessibilityIdentifier;
-(void)setAccessibilitySelectedCells:(NSArray *)arg1 ;
-(CGRect)accessibilityFrameInParentSpace;
-(void)accessibilityPrepareForCollectionViewUpdates:(id)arg1 ;
-(id)accessibilityParentForReusableView:(id)arg1 ;
-(id)accessibilityParentForCell:(id)arg1 ;
-(void)set_sectionCache:(NSMutableArray *)arg1 ;
@end

