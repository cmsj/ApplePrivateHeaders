/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slideshows/Slideshows-Structs.h>
@interface MUPoolObject : NSObject {

	MUPoolObject* mPoolPrev;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(long long)clearPool;
+(SCD_Struct_MR28*)poolInfo;
+(void)clearAllPools;
+(char)clearVars;
+(id)pooledClasses;
-(oneway void)release;
-(void)purge;
@end

