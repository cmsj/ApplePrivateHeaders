/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileHandle;

@interface NEFileHandle : NSObject {

	char _launchOwnerWhenReadable;
	NSFileHandle* _handle;

}

@property (readonly) unsigned long long type; 
@property (readonly) NSObject*<OS_xpc_object> dictionary; 
@property (readonly) char launchOwnerWhenReadable;                     //@synthesize launchOwnerWhenReadable=_launchOwnerWhenReadable - In the implementation block
@property (readonly) NSFileHandle * handle;                            //@synthesize handle=_handle - In the implementation block
+(id)fileHandleFromDictionary:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(char)arg2 ;
-(char)launchOwnerWhenReadable;
-(NSFileHandle *)handle;
-(unsigned long long)type;
-(NSObject*<OS_xpc_object>)dictionary;
-(id)initFromDictionary:(id)arg1 ;
@end

