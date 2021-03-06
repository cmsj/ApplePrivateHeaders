/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SMWindowsArchiveStreamDelegate;
@class NSString, XMFile;

@interface XMArchiveStream : NSObject {

	int _inputFd;
	NSString* _destination;
	void* _buffer;
	unsigned long long _writtenLength;
	id<SMWindowsArchiveStreamDelegate> _delegate;
	XMFile* _lastReadFile;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithFileDescriptor:(int)arg1 destination:(id)arg2 ;
-(char)readWithDelegate:(id)arg1 ;
-(id)lastReadFile;
-(char)_writeCompletelyToFd:(int)arg1 buffer:(void*)arg2 length:(unsigned long long)arg3 ;
-(id)_readFileHeader;
-(char)_writeDirectory:(id)arg1 ;
-(char)_writeRegularFile:(id)arg1 ;
-(char)_writeFile:(id)arg1 toFileDescriptor:(int)arg2 ;
-(char)_readCompletelyFromFd:(int)arg1 length:(unsigned long long)arg2 ;
@end

