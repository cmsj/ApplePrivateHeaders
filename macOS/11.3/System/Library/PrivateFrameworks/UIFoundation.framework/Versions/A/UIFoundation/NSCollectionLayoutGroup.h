/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSCollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutSpacing, NSArray;

@interface NSCollectionLayoutGroup : NSCollectionLayoutItem <NSCopying> {

	char _hasCheckedIfDecorationItemRequiresRegistration;
	char __hasDecorationItemRequiringRegistration;
	NSCollectionLayoutSpacing* _interItemSpacing;
	NSArray* _subitems;
	long long _layoutDirection;
	NSArray* _visualFormats;
	/*^block*/id _customGroupItemProvider;
	/*^block*/id _itemsProvider;
	/*^block*/id _visualFormatItemProvider;
	long long _count;
	long long _groupOptions;

}

@property (nonatomic,copy) NSArray * subitems;                                          //@synthesize subitems=_subitems - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                 //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,copy) NSArray * visualFormats;                                     //@synthesize visualFormats=_visualFormats - In the implementation block
@property (nonatomic,copy) id customGroupItemProvider;                                  //@synthesize customGroupItemProvider=_customGroupItemProvider - In the implementation block
@property (nonatomic,copy) id itemsProvider;                                            //@synthesize itemsProvider=_itemsProvider - In the implementation block
@property (nonatomic,copy) id visualFormatItemProvider;                                 //@synthesize visualFormatItemProvider=_visualFormatItemProvider - In the implementation block
@property (assign,nonatomic) long long count;                                           //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) char _hasDecorationItemRequiringRegistration;              //@synthesize _hasDecorationItemRequiringRegistration=__hasDecorationItemRequiringRegistration - In the implementation block
@property (assign,nonatomic) long long groupOptions;                                    //@synthesize groupOptions=_groupOptions - In the implementation block
@property (copy) NSArray * supplementaryItems; 
@property (copy) NSCollectionLayoutSpacing * interItemSpacing;                          //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
+(id)horizontalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3 ;
+(id)horizontalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2 ;
+(id)verticalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3 ;
+(id)verticalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2 ;
+(id)customGroupWithLayoutSize:(id)arg1 itemProvider:(/*^block*/id)arg2 ;
+(id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(/*^block*/id)arg2 ;
+(id)verticalGroupWithSize:(id)arg1 subitemsProvider:(/*^block*/id)arg2 ;
+(id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(/*^block*/id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(NSArray *)subitems;
-(void)setSubitems:(NSArray *)arg1 ;
-(long long)groupOptions;
-(id)customGroupItemProvider;
-(char)isCustomGroup;
-(id)_effectiveCopiedSubitemsForSubitems:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3 ;
-(id)initWithSize:(id)arg1 subitems:(id)arg2 count:(long long)arg3 interItemSpacing:(id)arg4 contentInsets:(NSDirectionalEdgeInsets)arg5 edgeSpacing:(id)arg6 layoutDirection:(long long)arg7 supplementaryItems:(id)arg8 visualFormats:(id)arg9 itemsProvider:(/*^block*/id)arg10 visualFormatItemProvider:(/*^block*/id)arg11 customGroupItemProvider:(/*^block*/id)arg12 options:(long long)arg13 name:(id)arg14 identifier:(id)arg15 ;
-(char)isVerticalGroup;
-(char)isHorizontalGroup;
-(id)itemsProvider;
-(NSArray *)visualFormats;
-(NSCollectionLayoutSpacing *)interItemSpacing;
-(id)visualFormatItemProvider;
-(id)_effectiveSizeForSize:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3 ;
-(int)layoutAxis;
-(char)hasItemProvider;
-(char)hasVisualFormat;
-(id)visualDescription;
-(char)_hasDecorationItemRequiringRegistration;
-(char)_isListSolverCompatibleForLayoutAxis:(int)arg1 ;
-(void)setInterItemSpacing:(NSCollectionLayoutSpacing *)arg1 ;
-(void)setVisualFormats:(NSArray *)arg1 ;
-(void)setCustomGroupItemProvider:(id)arg1 ;
-(void)setItemsProvider:(id)arg1 ;
-(void)setVisualFormatItemProvider:(id)arg1 ;
-(void)set_hasDecorationItemRequiringRegistration:(char)arg1 ;
-(void)setGroupOptions:(long long)arg1 ;
@end

