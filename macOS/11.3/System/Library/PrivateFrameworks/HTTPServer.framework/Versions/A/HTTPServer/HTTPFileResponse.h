/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HTTPServer.framework/Versions/A/HTTPServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HTTPServer/HTTPResponse.h>

@class HTTPConnection, NSString;

@interface HTTPFileResponse : NSObject <HTTPResponse> {

	HTTPConnection* connection;
	NSString* filePath;
	unsigned long long fileLength;
	unsigned long long fileOffset;
	char aborted;
	int fileFD;
	void* buffer;
	unsigned long long bufferSize;

}
+(void)initialize;
-(void)dealloc;
-(unsigned long long)offset;
-(id)filePath;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)abort;
-(char)isDone;
-(unsigned long long)contentLength;
-(id)initWithFilePath:(id)arg1 forConnection:(id)arg2 ;
-(char)openFileIfNeeded;
-(char)openFile;
@end

