/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSKit/TSKit-Structs.h>
@interface TSKPKFactory : NSObject
+(void)initialize;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3 ;
+(id)recognizers;
+(char)pencilKitAvailable;
+(char)modernPencilKitAvailable;
+(char)usingLegacyPencilKit;
+(id)imageRendererWithSize:(CGSize)arg1 scale:(double)arg2 ;
+(id)recognizerWithType:(int)arg1 mode:(int)arg2 ;
+(long long)toolTypeForInkIdentifier:(id)arg1 ;
+(id)inkIdentifierForToolType:(long long)arg1 ;
@end
