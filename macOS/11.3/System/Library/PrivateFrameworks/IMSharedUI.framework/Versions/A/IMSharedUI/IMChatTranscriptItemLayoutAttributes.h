/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/Versions/A/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSCollectionViewLayoutAttributes;

@interface IMChatTranscriptItemLayoutAttributes : NSObject <NSCopying> {

	NSIndexPath* _indexPath;
	CGSize _size;
	CGRect _frame;

}

@property (nonatomic,readonly) NSCollectionViewLayoutAttributes * so_layoutAttributes; 
@property (nonatomic,copy) NSIndexPath * indexPath;                                                 //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                          //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGSize size;                                                           //@synthesize size=_size - In the implementation block
-(NSCollectionViewLayoutAttributes *)so_layoutAttributes;
-(NSCollectionViewLayoutAttributes *)so_layoutAttributes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(NSIndexPath *)indexPath;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
@end

