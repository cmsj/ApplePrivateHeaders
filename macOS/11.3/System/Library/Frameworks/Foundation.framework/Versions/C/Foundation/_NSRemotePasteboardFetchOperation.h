/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSOperation.h>

@protocol UAPasteboardItemProviding, OS_dispatch_group;
@class NSObject, NSData, NSError;

@interface _NSRemotePasteboardFetchOperation : NSOperation {

	NSObject*<UAPasteboardItemProviding> _provider;
	os_unfair_lock_s _dataLock;
	NSData* _data;
	NSError* _error;
	Ac _state;
	NSObject*<OS_dispatch_group> _completionGroup;

}

@property (readonly) NSObject*<UAPasteboardItemProviding> provider;              //@synthesize provider=_provider - In the implementation block
@property (retain) NSData * data;                                                //@synthesize data=_data - In the implementation block
@property (retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (readonly) NSObject*<OS_dispatch_group> completionGroup;               //@synthesize completionGroup=_completionGroup - In the implementation block
-(void)dealloc;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithProvider:(id)arg1 ;
-(NSError *)error;
-(NSObject*<OS_dispatch_group>)completionGroup;
-(void)discardData;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(char)isAsynchronous;
-(NSObject*<UAPasteboardItemProviding>)provider;
@end

