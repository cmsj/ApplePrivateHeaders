/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSCollectionLayoutSize;

@interface _NSCollectionPreferredSize : NSObject {

	CGSize _originalSize;
	CGSize _fittingSize;
	CGSize _preferredSize;
	NSCollectionLayoutSize* _layoutSize;

}

@property (nonatomic,readonly) CGSize originalSize;                              //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,readonly) CGSize fittingSize;                               //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutSize * layoutSize;              //@synthesize layoutSize=_layoutSize - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize;                             //@synthesize preferredSize=_preferredSize - In the implementation block
-(id)description;
-(CGSize)fittingSize;
-(CGSize)preferredSize;
-(NSCollectionLayoutSize *)layoutSize;
-(id)initWithOriginalSize:(CGSize)arg1 fittingSize:(CGSize)arg2 layoutSize:(id)arg3 ;
-(CGSize)originalSize;
@end

