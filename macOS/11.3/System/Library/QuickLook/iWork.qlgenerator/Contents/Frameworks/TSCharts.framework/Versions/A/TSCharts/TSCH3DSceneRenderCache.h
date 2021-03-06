/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSMutableSet, TSCH3DDictionaryOfDictionary;

@interface TSCH3DSceneRenderCache : NSObject {

	NSMutableSet* _enabledKeys;
	TSCH3DDictionaryOfDictionary* _cache;

}
+(id)cache;
+(id)cacheFromScene:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(char)cacheEnabledForKey:(id)arg1 ;
-(id)cacheObjectForKey:(id)arg1 cacheID:(id)arg2 created:(char*)arg3 ifAbsent:(/*^block*/id)arg4 ;
-(void)enableCache:(char)arg1 forKey:(id)arg2 ;
-(void)setCacheObject:(id)arg1 forKey:(id)arg2 cacheID:(id)arg3 ;
@end

