/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUIObjectPickerViewControllerDelegate <NSObject>
@optional
-(void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;
-(void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 didDismissPicker:(id)arg2;

@required
-(id)viewControllerForPickerPresentation:(id)arg1;

@end

