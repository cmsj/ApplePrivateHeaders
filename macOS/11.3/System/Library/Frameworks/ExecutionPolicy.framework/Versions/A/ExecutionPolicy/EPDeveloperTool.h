/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ExecutionPolicy.framework/Versions/A/ExecutionPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCInterface, NSXPCConnection;

@interface EPDeveloperTool : NSObject {

	NSXPCInterface* _interface;
	NSXPCConnection* _connection;

}

@property (readonly) long long authorizationStatus; 
-(void)dealloc;
-(id)init;
-(long long)authorizationStatus;
-(void)requestDeveloperToolAccessWithCompletionHandler:(/*^block*/id)arg1 ;
@end
