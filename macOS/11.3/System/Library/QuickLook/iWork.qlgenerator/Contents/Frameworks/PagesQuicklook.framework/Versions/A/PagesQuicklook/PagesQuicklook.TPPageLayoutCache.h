/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PagesQuicklook/PagesQuicklook-Structs.h>
@class NSString;

@interface PagesQuicklook.TPPageLayoutCache : NSObject {

	 pageLayoutCache;
	 pendingUpdates;
	 accessQueue;

}

@property (readonly,nonatomic) NSString * description; 
-(NSString *)description;
-(id)init;
-(void)coalesce;
-(id)pageLayouts;
-(id)pageLayoutsFromStartIndex:(unsigned long long)arg1 toEndIndex:(unsigned long long)arg2 ;
-(id)pageLayoutsWithPageIndex:(unsigned long long)arg1 ;
-(id)pageLayoutsUpToPageIndex:(unsigned long long)arg1 ;
-(id)pageLayoutsInRange:(NSRange)arg1 ;
-(id)pageLayoutsFromStartIndex:(unsigned long long)arg1 ;
-(void)enqueueInsertion:(id)arg1 ;
-(void)enqueueRemoval:(id)arg1 ;
@end
