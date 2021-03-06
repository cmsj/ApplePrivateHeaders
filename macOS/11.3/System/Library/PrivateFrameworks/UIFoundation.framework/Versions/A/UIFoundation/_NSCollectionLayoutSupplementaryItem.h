/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/_NSCollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/_NSCollectionLayoutAPIRespresenting.h>

@class NSString, _NSCollectionLayoutAnchor, _NSCollectionLayoutEdgeSpacing;

@interface _NSCollectionLayoutSupplementaryItem : _NSCollectionLayoutItem <NSCopying, _NSCollectionLayoutAPIRespresenting> {

	NSString* _elementKind;
	long long _zIndex;
	_NSCollectionLayoutAnchor* _containerAnchor;
	_NSCollectionLayoutAnchor* _itemAnchor;
	_NSCollectionLayoutEdgeSpacing* _edgeSpacing;
	NSString* _name;
	char _canAdjustContentSize;

}

@property (assign,nonatomic) long long zIndex;                                           //@synthesize zIndex=_zIndex - In the implementation block
@property (nonatomic,readonly) NSString * elementKind;                                   //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,readonly) _NSCollectionLayoutAnchor * containerAnchor;              //@synthesize containerAnchor=_containerAnchor - In the implementation block
@property (nonatomic,readonly) _NSCollectionLayoutAnchor * itemAnchor;                   //@synthesize itemAnchor=_itemAnchor - In the implementation block
@property (assign,nonatomic) char canAdjustContentSize;                                  //@synthesize canAdjustContentSize=_canAdjustContentSize - In the implementation block
+(id)supplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 ;
+(id)supplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setZIndex:(long long)arg1 ;
-(long long)zIndex;
-(NSString *)elementKind;
-(_NSCollectionLayoutAnchor *)containerAnchor;
-(_NSCollectionLayoutAnchor *)itemAnchor;
-(id)_apiRepresentation;
-(id)initWithSize:(id)arg1 elementKind:(id)arg2 zIndex:(long long)arg3 contentInsets:(NSDirectionalEdgeInsets)arg4 containerAnchor:(id)arg5 itemAnchor:(id)arg6 edgeSpacing:(id)arg7 name:(id)arg8 canAdjustContentSize:(char)arg9 ;
-(char)canAdjustContentSize;
-(void)setCanAdjustContentSize:(char)arg1 ;
@end

