/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/_NSCollectionLayoutAPIRespresenting.h>

@class _NSCollectionLayoutDimension;

@interface _NSCollectionLayoutSize : NSObject <NSCopying, _NSCollectionLayoutAPIRespresenting> {

	_NSCollectionLayoutDimension* _width;
	_NSCollectionLayoutDimension* _height;

}

@property (nonatomic,readonly) _NSCollectionLayoutDimension * width; 
@property (nonatomic,readonly) _NSCollectionLayoutDimension * height; 
+(id)sizeWithWidth:(id)arg1 height:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_NSCollectionLayoutDimension *)width;
-(_NSCollectionLayoutDimension *)height;
-(id)_apiRepresentation;
-(id)initWithWidth:(id)arg1 height:(id)arg2 ;
@end
