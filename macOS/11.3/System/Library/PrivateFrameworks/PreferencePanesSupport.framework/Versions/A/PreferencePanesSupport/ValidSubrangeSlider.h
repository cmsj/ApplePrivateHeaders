/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PreferencePanesSupport.framework/Versions/A/PreferencePanesSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencePanesSupport/NSUpActionSlider.h>

@interface ValidSubrangeSlider : NSUpActionSlider
+(void)initialize;
-(void)awakeFromNib;
-(double)minValidValue;
-(void)setMinValidValue:(double)arg1 ;
-(double)maxValidValue;
-(void)setMaxValidValue:(double)arg1 ;
-(void)constrainValueWhileDragging;
-(void)constrainFinalValue;
@end

