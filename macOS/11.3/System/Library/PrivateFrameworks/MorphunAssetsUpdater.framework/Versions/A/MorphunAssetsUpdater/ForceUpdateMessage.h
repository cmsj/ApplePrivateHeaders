/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MorphunAssetsUpdater.framework/Versions/A/MorphunAssetsUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/Message.h>

@protocol OS_xpc_object;
@class NSObject;

@interface ForceUpdateMessage : NSObject <Message> {

	NSObject*<OS_xpc_object> message;

}

@property (readonly) NSObject*<OS_xpc_object> message; 
-(int)type;
-(NSObject*<OS_xpc_object>)message;
-(id)init:(id)arg1 removeLanguages:(id)arg2 ;
@end

