/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSCache;

@interface NSLayerContentsProvider : NSObject {

	NSCache* _cache;

}
+(void)resetCache;
+(id)sharedContentsProvider;
-(void)dealloc;
-(id)facetForIdentifier:(id)arg1 scale:(double)arg2 colorSpace:(id)arg3 drawingRect:(CGRect)arg4 flipped:(char)arg5 appearanceIdentifier:(id)arg6 drawHandler:(/*^block*/id)arg7 ;
-(double)totalCacheSize;
@end
