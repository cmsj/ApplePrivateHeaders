/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PasswordServer.framework/Versions/A/PasswordServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PasswordServer/PasswordServer-Structs.h>
@interface PolicyBase : NSObject
-(id)initWithDictionary:(CFDictionaryRef)arg1 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(char*)policyAsXMLDataCopy:(char)arg1 ;
-(CFStringRef)policyAsSpaceDelimitedDataCopy;
-(char*)policyAsXMLDataCopy;
-(int)intValueForKey:(CFStringRef)arg1 inDictionary:(CFDictionaryRef)arg2 ;
-(CFDateRef)dateValueForKey:(CFStringRef)arg1 inDictionary:(CFDictionaryRef)arg2 ;
@end

