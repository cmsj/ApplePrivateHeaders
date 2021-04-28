/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/Versions/A/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BUReadChannel, OS_dispatch_group;
@class NSObject;

@interface BUZipFileDescriptorWrapper : NSObject {

	int _fileDescriptor;
	id<BUReadChannel> _readChannel;
	NSObject*<OS_dispatch_group> _accessGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> accessGroup;              //@synthesize accessGroup=_accessGroup - In the implementation block
@property (nonatomic,readonly) int fileDescriptor;                                  //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,readonly) id<BUReadChannel> readChannel;                       //@synthesize readChannel=_readChannel - In the implementation block
-(void)dealloc;
-(id)init;
-(int)fileDescriptor;
-(NSObject*<OS_dispatch_group>)accessGroup;
-(void)setAccessGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)beginAccess;
-(void)endAccess;
-(id)initWithFileDescriptor:(int)arg1 queue:(id)arg2 ;
-(id<BUReadChannel>)readChannel;
-(void)waitForAccessToEnd;
@end
