/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSData, NSInputStream, NSOutputStream, NSObject, NSFileHandle, NSString;

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate> {

	NSMutableArray* _allObjects;
	NSData* _curData;
	unsigned long long _curDataPos;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	z_stream_s* _zlibStream;
	char _haveFlushedZlib;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _shouldCompress;
	char _hasInitedCompression;
	char _haveFinishedCompression;
	char _haveFinishedStreaming;
	unsigned long long _bufferSize;
	/*^block*/id _logRequestObjectBlock;
	NSFileHandle* _binaryLogFileHandle;

}

@property (assign,nonatomic) char shouldCompress;                             //@synthesize shouldCompress=_shouldCompress - In the implementation block
@property (assign,nonatomic) char hasInitedCompression;                       //@synthesize hasInitedCompression=_hasInitedCompression - In the implementation block
@property (assign,nonatomic) char haveFinishedCompression;                    //@synthesize haveFinishedCompression=_haveFinishedCompression - In the implementation block
@property (assign) char haveFinishedStreaming;                                //@synthesize haveFinishedStreaming=_haveFinishedStreaming - In the implementation block
@property (assign,nonatomic) unsigned long long bufferSize;                   //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,copy) id logRequestObjectBlock;                          //@synthesize logRequestObjectBlock=_logRequestObjectBlock - In the implementation block
@property (nonatomic,retain) NSFileHandle * binaryLogFileHandle;              //@synthesize binaryLogFileHandle=_binaryLogFileHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)open;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)tearDown;
-(unsigned long long)bufferSize;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(char)shouldCompress;
-(void)setShouldCompress:(char)arg1 ;
-(void)setStreamedObjects:(id)arg1 ;
-(id)initWithCompression:(char)arg1 ;
-(void)setLogRequestObjectBlock:(id)arg1 ;
-(void)_tearDownOutputStream;
-(void)setHaveFinishedStreaming:(char)arg1 ;
-(char)haveFinishedCompression;
-(void)setHaveFinishedCompression:(char)arg1 ;
-(id)_compressBodyData:(id)arg1 shouldFlush:(char)arg2 ;
-(long long)_streamNextObject:(id)arg1 ;
-(id)_dataForMessage:(id)arg1 ;
-(id)logRequestObjectBlock;
-(void)_prepareObjectForStreaming:(id)arg1 ;
-(long long)_writeDataToStream:(id)arg1 ;
-(char)haveFinishedStreaming;
-(char)_finishStreaming:(id)arg1 ;
-(NSFileHandle *)binaryLogFileHandle;
-(void)setBinaryLogFileHandle:(NSFileHandle *)arg1 ;
-(char)hasInitedCompression;
-(void)setHasInitedCompression:(char)arg1 ;
@end

