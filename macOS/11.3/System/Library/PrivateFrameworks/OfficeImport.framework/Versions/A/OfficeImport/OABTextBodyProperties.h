/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABTextBodyProperties : NSObject
+(void)readTextBodyProperties:(id)arg1 textBox:(const EshTextBox*)arg2 useDefaults:(BOOL)arg3 state:(id)arg4 ;
+(void)setTextRotation:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextFlow:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextDirection:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setAutoFit:(BOOL)arg1 textBodyProperties:(id)arg2 ;
+(void)setWrap:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextAnchor:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setIsAnchorCenter:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)writeTextBodyProperties:(id)arg1 toShapeBase:(EshShapeBase*)arg2 state:(id)arg3 ;
@end

