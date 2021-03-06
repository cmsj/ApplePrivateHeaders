/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHNumericFormat <NSObject>
@property (nonatomic,readonly) unsigned long long decimalPlaces; 
@property (nonatomic,readonly) int negativeStyle; 
@property (nonatomic,readonly) char showThousandsSeparator; 
@property (nonatomic,readonly) TSCHNumericFormatProperties chartNumericFormatProperties; 
@required
-(unsigned long long)decimalPlaces;
-(char)showThousandsSeparator;
-(int)negativeStyle;
-(TSCHNumericFormatProperties)chartNumericFormatProperties;
-(id)chartNumericFormatByApplyingTSCHNumericFormatProperties:(TSCHNumericFormatProperties)arg1;

@end

