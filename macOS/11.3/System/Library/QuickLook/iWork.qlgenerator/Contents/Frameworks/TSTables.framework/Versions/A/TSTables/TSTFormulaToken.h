/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TSTFormulaToken
@property (nonatomic,readonly) int tokenType; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) TSCEFunctionArgSpec* argumentSpec; 
@required
-(NSString *)string;
-(int)tokenType;
-(TSCEFunctionArgSpec*)argumentSpec;

@end
