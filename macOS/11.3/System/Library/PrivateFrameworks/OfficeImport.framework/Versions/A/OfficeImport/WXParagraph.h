/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXParagraph : NSObject
+(void)readRunsTo:(id)arg1 state:(id)arg2 ;
+(void)readRunsFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 targetRun:(id)arg4 state:(id)arg5 ;
+(void)readRFrom:(xmlNode*)arg1 to:(id)arg2 targetRun:(id)arg3 state:(id)arg4 ;
+(void)readSimpleFieldFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readTrackingFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFrom:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromString:(id)arg1 to:(id)arg2 ;
+(void)readAnnotationFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
@end
