/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTouchBarColorPickerViewControllerDelegate <NSObject>
@optional
-(void)colorPickerViewControllerWillBegin:(id)arg1;
-(void)colorPickerViewControllerDidEnd:(id)arg1;
-(void)colorPickerViewControllerDidCancel:(id)arg1;
-(void)colorPicker:(id)arg1 didChangeCurrentModeFrom:(long long)arg2 to:(long long)arg3;

@required
-(void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2;

@end

