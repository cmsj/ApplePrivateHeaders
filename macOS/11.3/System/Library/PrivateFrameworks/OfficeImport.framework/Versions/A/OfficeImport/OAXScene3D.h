/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXScene3D : NSObject
+(id)cameraTypeEnumMap;
+(id)lightRigTypeEnumMap;
+(id)lightRigDirectionEnumMap;
+(id)readCameraFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readLightRigFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readBackdropFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)writeBackdrop:(id)arg1 to:(id)arg2 ;
+(void)writeCamera:(id)arg1 to:(id)arg2 ;
+(void)writeLightRig:(id)arg1 to:(id)arg2 ;
+(id)readScene3DFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(void)writeScene3D:(id)arg1 to:(id)arg2 ;
+(char)isEmpty:(id)arg1 ;
+(void)writeRotation3D:(id)arg1 to:(id)arg2 ;
@end

