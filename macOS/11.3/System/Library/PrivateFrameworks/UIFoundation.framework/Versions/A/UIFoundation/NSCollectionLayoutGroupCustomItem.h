/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutGroupCustomItem : NSObject <NSCopying> {

	long long _zIndex;
	CGRect _frame;

}

@property (readonly) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
@property (readonly) long long zIndex;              //@synthesize zIndex=_zIndex - In the implementation block
+(id)customItemWithFrame:(CGRect)arg1 zIndex:(long long)arg2 ;
+(id)customItemWithFrame:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)frame;
-(id)initWithFrame:(CGRect)arg1 zIndex:(long long)arg2 ;
-(long long)zIndex;
@end

