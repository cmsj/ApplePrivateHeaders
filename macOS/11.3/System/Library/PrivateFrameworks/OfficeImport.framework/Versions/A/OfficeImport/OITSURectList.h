/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OITSURectList : NSObject {

	vector<CGRect, std::__1::allocator<CGRect>>* mRectList;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)rectListWithDifference:(CGRect)arg1 withRect:(CGRect)arg2 ;
-(unsigned long long)count;
-(id)initWithRect:(CGRect)arg1 ;
-(void)addRect:(CGRect)arg1 ;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
-(id)initWithRectList:(id)arg1 ;
-(void)insertRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
@end

