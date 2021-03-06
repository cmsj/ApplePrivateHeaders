/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView, NSCompressionGroupLayout, NSTouchBarItem;

@interface _NSFunctionRowCustomizationDFRItem : NSObject {

	NSView* _itemView;
	CGSize _minSize;
	CGSize _preferredSize;
	CGSize _maxSize;
	CGSize _reducedMetricsThreshold;
	char _hasCachedMinMaxSize;
	char _requiresExactMinSize;
	char _forcesReducedMetricsCompression;
	char _requiresTrueCenterLayout;
	long long _section;
	NSCompressionGroupLayout* _compressionLayout;

}

@property (retain) NSCompressionGroupLayout * compressionLayout;              //@synthesize compressionLayout=_compressionLayout - In the implementation block
@property (readonly) NSTouchBarItem * representedItem; 
@property (assign) long long section;                                         //@synthesize section=_section - In the implementation block
@property (readonly) NSView * itemView; 
@property (readonly) CGSize minSize; 
@property (readonly) CGSize maxSize; 
@property (readonly) CGSize preferredSize; 
@property (readonly) CGSize reducedMetricsThreshold;                          //@synthesize reducedMetricsThreshold=_reducedMetricsThreshold - In the implementation block
@property (readonly) CGSize contentClippingSize; 
@property (assign) char requiresExactMinSize;                                 //@synthesize requiresExactMinSize=_requiresExactMinSize - In the implementation block
@property (assign) char forcesReducedMetricsCompression;                      //@synthesize forcesReducedMetricsCompression=_forcesReducedMetricsCompression - In the implementation block
@property (assign) char requiresTrueCenterLayout;                             //@synthesize requiresTrueCenterLayout=_requiresTrueCenterLayout - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(CGSize)minSize;
-(CGSize)maxSize;
-(CGSize)preferredSize;
-(CGSize)contentClippingSize;
-(long long)section;
-(char)forcesReducedMetricsCompression;
-(void)setForcesReducedMetricsCompression:(char)arg1 ;
-(NSView *)itemView;
-(NSTouchBarItem *)representedItem;
-(CGSize)reducedMetricsThreshold;
-(char)requiresTrueCenterLayout;
-(void)setRequiresTrueCenterLayout:(char)arg1 ;
-(void)_updateMinMaxSizeIfNeeded;
-(char)isCenteredInTree:(id)arg1 ;
-(void)invalidateSizes;
-(void)setCompressionLayout:(NSCompressionGroupLayout *)arg1 ;
-(NSCompressionGroupLayout *)compressionLayout;
-(void)setSection:(long long)arg1 ;
-(char)requiresExactMinSize;
-(void)setRequiresExactMinSize:(char)arg1 ;
@end

