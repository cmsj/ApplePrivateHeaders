/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSURectList : NSObject {

	vector<CGRect, std::__1::allocator<CGRect>>* mRectList;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)rectListWithRect:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithRect:(CGRect)arg1 ;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
-(id)initWithRectList:(id)arg1 ;
@end

