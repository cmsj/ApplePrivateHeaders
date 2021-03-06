/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKImageFlowView;

@interface IKImageFlowAccessibilityList : NSObject {

	IKImageFlowView* _flowView;

}
-(id)accessibilityItemForCell:(id)arg1 atIndex:(unsigned long long)arg2 inFlowView:(id)arg3 ;
-(id)initWithFlowView:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityAttributeNames;
-(id)accessibilityChildren;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned)accessibilityArrayAttributeCount:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(unsigned)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilitySelectedChildren;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
@end

