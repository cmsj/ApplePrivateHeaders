/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/_NSCollectionLayoutSupplementaryItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/_NSCollectionLayoutAPIRespresenting.h>

@class NSString;

@interface _NSCollectionLayoutBoundarySupplementaryItem : _NSCollectionLayoutSupplementaryItem <NSCopying, _NSCollectionLayoutAPIRespresenting> {

	NSString* _elementKind;
	long long _alignment;
	CGPoint _offset;
	char _extendsBoundary;
	char _pinToVisibleBounds;

}

@property (assign,nonatomic) char extendsBoundary;                 //@synthesize extendsBoundary=_extendsBoundary - In the implementation block
@property (assign,nonatomic) char pinToVisibleBounds;              //@synthesize pinToVisibleBounds=_pinToVisibleBounds - In the implementation block
@property (nonatomic,readonly) long long alignment;                //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) CGPoint offset;                     //@synthesize offset=_offset - In the implementation block
+(id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(CGPoint)arg4 ;
+(id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)offset;
-(long long)alignment;
-(char)pinToVisibleBounds;
-(char)extendsBoundary;
-(void)setExtendsBoundary:(char)arg1 ;
-(void)setPinToVisibleBounds:(char)arg1 ;
-(id)_apiRepresentation;
-(id)initWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(CGPoint)arg4 zIndex:(long long)arg5 contentInsets:(NSDirectionalEdgeInsets)arg6 extendsBoundary:(char)arg7 pinToVisibleBounds:(char)arg8 ;
@end
