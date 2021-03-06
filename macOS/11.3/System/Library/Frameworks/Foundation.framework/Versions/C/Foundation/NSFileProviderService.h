/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSString, NSObject;

@interface NSFileProviderService : NSObject {

	NSString* _name;
	id _endpointCreatingProxy;
	NSObject*<OS_dispatch_group> _requestFinishedGroup;

}

@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 endpointCreatingProxy:(id)arg2 requestFinishedGroup:(id)arg3 ;
-(void)getFileProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fetchFileProviderConnectionAndReturnError:(id*)arg1 ;
@end

