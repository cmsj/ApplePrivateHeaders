/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXShape : NSObject
+(id)readFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
+(void)readNonVisualShapeProperties:(xmlNode*)arg1 nodeName:(const char*)arg2 inNamespace:(id)arg3 shapeProperties:(id)arg4 ;
+(void)readCoreFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 toShape:(id)arg3 drawingState:(id)arg4 ;
+(char)isWritable:(id)arg1 ;
@end

