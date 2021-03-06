/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SearchUI/SearchUI-Structs.h>
@interface SearchUIAutoLayout : NSObject
+(void)fillContainerWithView:(id)arg1 ;
+(void)requireIntrinsicSizeForView:(id)arg1 ;
+(void)alignViews:(id)arg1 withAttribute:(long long)arg2 ;
+(id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 metrics:(id)arg3 ;
+(id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 constant:(double)arg4 ;
+(id)installConstraintsWithVisualFormat:(id)arg1 withViews:(id)arg2 metrics:(id)arg3 options:(unsigned long long)arg4 ;
+(id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 constant:(double)arg5 ;
+(id)alignView:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toView:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 priority:(float)arg7 ;
+(id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 ;
+(id)alignView:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toView:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 ;
+(id)setWidth:(double)arg1 forView:(id)arg2 ;
+(id)setHeight:(double)arg1 forView:(id)arg2 ;
+(id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 ;
+(void)spanContainerWidthForView:(id)arg1 ;
+(void)spanContainerHeightForView:(id)arg1 ;
+(id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 ;
+(id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 options:(unsigned long long)arg3 ;
+(id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 priority:(float)arg4 ;
+(id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 ;
+(id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 ;
+(id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 minimum:(char)arg4 ;
+(void)setSize:(CGSize)arg1 forView:(id)arg2 ;
+(double)deviceScaledRoundedValue:(double)arg1 ;
+(double)scaledValueForValue:(double)arg1 withFont:(id)arg2 ;
+(void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2 ;
+(void)enableAutoLayoutForItems:(id)arg1 ;
+(id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 priority:(float)arg5 ;
+(id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 minimum:(char)arg4 priority:(float)arg5 ;
+(id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 priority:(float)arg4 ;
+(void)constrainViewWidthToContainer:(id)arg1 ;
+(void)constrainViewHeightContainer:(id)arg1 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 priority:(float)arg4 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 isDynamic:(char)arg4 forFont:(id)arg5 minimum:(char)arg6 priority:(float)arg7 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 isDynamic:(char)arg4 forFont:(id)arg5 minimum:(char)arg6 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 priority:(float)arg4 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 forFont:(id)arg4 minimum:(char)arg5 ;
+(id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 priority:(float)arg3 ;
+(void)constrainViewToContainer:(id)arg1 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 minimum:(char)arg4 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 minimum:(char)arg4 ;
+(id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 forFont:(id)arg4 ;
+(void)setVisibility:(char)arg1 forView:(id)arg2 ;
+(NSEdgeInsets)customBaselineInsets:(NSEdgeInsets)arg1 font:(id)arg2 ;
+(NSEdgeInsets)customUnscaledBaselineInsets:(NSEdgeInsets)arg1 font:(id)arg2 ;
@end

