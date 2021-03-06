/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSScrubberItemLayoutDiscrete.h>
#import <libobjc.A.dylib/NSScrubberItemLayout.h>

@class NSScrubberLayout, NSString;

@interface NSScrubberItemLayoutDiscreteWithLens : NSScrubberItemLayoutDiscrete <NSScrubberItemLayout> {

	CGSize _lensThreshold;

}

@property (assign) CGSize selectionLensThreshold;                   //@synthesize lensThreshold=_lensThreshold - In the implementation block
@property (retain) NSScrubberLayout * scrubberLayout; 
@property (readonly) char wantsTrackingPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemLayoutAttributesForState:(SCD_Struct_NS65)arg1 inView:(id)arg2 ;
-(id)itemLayoutAttributesForItemAtIndex:(long long)arg1 withState:(SCD_Struct_NS65)arg2 inView:(id)arg3 ;
-(char)wantsTrackingPosition;
-(void)_updateAttributes:(id)arg1 forLensWithState:(SCD_Struct_NS65)arg2 inView:(id)arg3 ;
-(char)_wantsLensForState:(SCD_Struct_NS65)arg1 ;
-(CGSize)selectionLensThreshold;
-(void)setSelectionLensThreshold:(CGSize)arg1 ;
@end

