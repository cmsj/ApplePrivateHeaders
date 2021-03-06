/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageEditView.h>

@class IKImageAdjust, IKFilterChain, IKAdjustSlider, NSButton;

@interface IKImageAdjustView : IKImageEditView {

	IKImageAdjust* _imageAdjust;
	IKFilterChain* _filterChain;
	IKAdjustSlider* _exposureSlider;
	IKAdjustSlider* _contrastSlider;
	IKAdjustSlider* _saturationSlider;
	IKAdjustSlider* _temperatureSlider;
	IKAdjustSlider* _tintSlider;
	IKAdjustSlider* _sepiaSlider;
	IKAdjustSlider* _sharpnessSlider;
	NSButton* _resetAll;

}
+(id)sharedImageEditView;
-(void)resetAll:(id)arg1 ;
-(void)dataSourceDidChange;
-(void)updateCIFilter:(id)arg1 slider:(id)arg2 key:(id)arg3 value:(id)arg4 label:(id)arg5 ;
-(void)viewWillBecomeActive;
-(void)viewWillBecomeInActive;
-(void)setEnabled:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setup;
@end

