/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/_NSCollectionLayoutFramesQueryResult.h>
@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;


@protocol _NSCollectionLayoutFramesQueryResult <NSCopying>
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) long long index; 
@property (nonatomic,readonly) long long zIndex; 
@property (nonatomic,readonly) long long effectiveZIndex; 
@property (nonatomic,readonly) long long resultKind; 
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
@property (nonatomic,readonly) NSCollectionLayoutSupplementaryItem * supplementaryItem; 
@property (nonatomic,readonly) id<_NSCollectionLayoutAuxiliaryItem> auxiliaryItem; 
@property (nonatomic,readonly) long long auxiliaryKind; 
@property (nonatomic,readonly) NSUUID * supplementaryEnrollmentIdentifier; 
@property (nonatomic,readonly) char isSupplementary; 
@property (nonatomic,readonly) char isDecoration; 
@property (nonatomic,readonly) char isAuxiliary; 
@property (nonatomic,readonly) char isItem; 
@property (nonatomic,readonly) char isAuxiliaryKindGlobal; 
@property (nonatomic,readonly) char isAuxiliaryKindSection; 
@property (nonatomic,readonly) char isAuxiliaryKindGroup; 
@property (nonatomic,readonly) char isAuxiliaryKindItem; 
@required
-(long long)index;
-(NSCollectionLayoutItem *)item;
-(CGRect)frame;
-(char)isAuxiliary;
-(char)isDecoration;
-(char)isSupplementary;
-(long long)zIndex;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(id)copyWithFrame:(CGRect)arg1 index:(long long)arg2;
-(char)isAuxiliaryKindItem;
-(NSUUID *)supplementaryEnrollmentIdentifier;
-(id<_NSCollectionLayoutAuxiliaryItem>)auxiliaryItem;
-(id)copyWithIndex:(long long)arg1;
-(id)copyWithOffset:(CGPoint)arg1;
-(id)copyWithOffset:(CGPoint)arg1 index:(long long)arg2 supplementaryEnrollmentIdentifier:(id)arg3;
-(long long)effectiveZIndex;
-(long long)resultKind;
-(long long)auxiliaryKind;
-(char)isItem;
-(char)isAuxiliaryKindGlobal;
-(char)isAuxiliaryKindSection;
-(char)isAuxiliaryKindGroup;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;

@interface _NSCollectionLayoutFramesQueryResult : NSObject <_NSCollectionLayoutFramesQueryResult, NSCopying> {

	long long _index;
	long long _zIndex;
	long long _resultKind;
	NSCollectionLayoutItem* _item;
	NSUUID* _supplementaryEnrollmentIdentifier;
	long long _auxiliaryKind;
	CGRect _frame;

}

@property (nonatomic,readonly) CGRect frame;                                                         //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) long long index;                                                      //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long zIndex;                                                     //@synthesize zIndex=_zIndex - In the implementation block
@property (nonatomic,readonly) long long effectiveZIndex; 
@property (nonatomic,readonly) long long resultKind;                                                 //@synthesize resultKind=_resultKind - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutItem * item;                                        //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutSupplementaryItem * supplementaryItem; 
@property (nonatomic,readonly) id<_NSCollectionLayoutAuxiliaryItem> auxiliaryItem; 
@property (nonatomic,readonly) long long auxiliaryKind;                                              //@synthesize auxiliaryKind=_auxiliaryKind - In the implementation block
@property (nonatomic,readonly) NSUUID * supplementaryEnrollmentIdentifier;                           //@synthesize supplementaryEnrollmentIdentifier=_supplementaryEnrollmentIdentifier - In the implementation block
@property (nonatomic,readonly) char isSupplementary; 
@property (nonatomic,readonly) char isDecoration; 
@property (nonatomic,readonly) char isAuxiliary; 
@property (nonatomic,readonly) char isItem; 
@property (nonatomic,readonly) char isAuxiliaryKindGlobal; 
@property (nonatomic,readonly) char isAuxiliaryKindSection; 
@property (nonatomic,readonly) char isAuxiliaryKindGroup; 
@property (nonatomic,readonly) char isAuxiliaryKindItem; 
+(id)kindIndexKeyForKind:(id)arg1 index:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)index;
-(NSCollectionLayoutItem *)item;
-(CGRect)frame;
-(char)isAuxiliary;
-(char)isDecoration;
-(char)isSupplementary;
-(long long)zIndex;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(id)copyWithFrame:(CGRect)arg1 index:(long long)arg2 ;
-(char)isAuxiliaryKindItem;
-(id)initWithFrame:(CGRect)arg1 index:(long long)arg2 zIndex:(long long)arg3 resultKind:(long long)arg4 item:(id)arg5 auxiliaryKind:(long long)arg6 supplementaryEnrollmentIdentifier:(id)arg7 ;
-(NSUUID *)supplementaryEnrollmentIdentifier;
-(id<_NSCollectionLayoutAuxiliaryItem>)auxiliaryItem;
-(id)copyWithIndex:(long long)arg1 ;
-(id)copyWithOffset:(CGPoint)arg1 ;
-(id)copyWithOffset:(CGPoint)arg1 index:(long long)arg2 supplementaryEnrollmentIdentifier:(id)arg3 ;
-(long long)effectiveZIndex;
-(long long)resultKind;
-(long long)auxiliaryKind;
-(char)isItem;
-(char)isAuxiliaryKindGlobal;
-(char)isAuxiliaryKindSection;
-(char)isAuxiliaryKindGroup;
-(id)initWithFrame:(CGRect)arg1 index:(long long)arg2 zIndex:(long long)arg3 resultKind:(long long)arg4 item:(id)arg5 ;
-(id)kindIndexKey;
@end

