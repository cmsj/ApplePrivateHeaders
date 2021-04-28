/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXOfficeArt : NSObject
+(void)readOAX:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(void)readVml:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(id)relativeHorizontalPositionEnumMap;
+(id)relativeVerticalPositionEnumMap;
+(id)textWrappingModeTypeEnumMap;
+(void)readClientData:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 ;
+(void)readPosition:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 isHorizontal:(BOOL)arg4 ;
+(void)readWrap:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 ;
+(void)readWrapDistance:(xmlNode*)arg1 parentElement:(xmlNode*)arg2 state:(id)arg3 to:(id)arg4 ;
+(void)writeWrapText:(id)arg1 to:(id)arg2 ;
+(void)writeWrapLeftDistance:(id)arg1 to:(id)arg2 ;
+(void)writeWrapRightDistance:(id)arg1 to:(id)arg2 ;
+(void)writeWrapPolygonChildren:(id)arg1 to:(id)arg2 ;
+(void)writeWrapTopDistance:(id)arg1 to:(id)arg2 ;
+(void)writeWrapBottomDistance:(id)arg1 to:(id)arg2 ;
+(char)writeWrapTightlyWith:(id)arg1 toWriter:(id)arg2 ;
+(void)readFrom:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
@end
