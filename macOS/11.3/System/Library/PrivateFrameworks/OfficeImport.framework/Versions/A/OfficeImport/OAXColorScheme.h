/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXColorScheme : NSObject
+(void)readFromXmlNode:(xmlNode*)arg1 toColorScheme:(id)arg2 ;
+(id)schemeColorEnumMap;
+(id)colorForScheme:(id)arg1 colorMap:(id)arg2 value:(id)arg3 ;
+(id)colorForScheme:(id)arg1 value:(id)arg2 ;
+(void)writeColorScheme:(id)arg1 to:(id)arg2 state:(id)arg3 ;
@end

