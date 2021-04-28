/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/_NSLevelIndicatorCore.h>

@class NSString;

@interface _NSLevelIndicatorRatingCore : NSObject <_NSLevelIndicatorCore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawInRect:(CGRect)arg1 inContext:(id)arg2 forState:(SCD_Struct_NS38)arg3 ;
-(int)vibrancyBlendModeForState:(SCD_Struct_NS38)arg1 ;
-(CGSize)indicatorSizeForState:(SCD_Struct_NS38)arg1 ;
-(NSEdgeInsets)alignmentRectInsetsForState:(SCD_Struct_NS38)arg1 ;
-(id)_defaultFillColor;
-(CGRect)_starFrameForState:(SCD_Struct_NS38)arg1 ;
-(NSEdgeInsets)_starAlignmentRectInsetsForState:(SCD_Struct_NS38)arg1 ;
-(id)_effectiveFillColorForState:(SCD_Struct_NS38)arg1 ;
-(id)_effectiveRatingImageForState:(SCD_Struct_NS38)arg1 ;
-(id)_effectiveRatingPlaceholderImageForState:(SCD_Struct_NS38)arg1 ;
-(id)_defaultPlaceholderFillColor;
-(double)_defaultPlaceholderFade;
-(CGRect)_starAlignmentRectForState:(SCD_Struct_NS38)arg1 ;
@end
