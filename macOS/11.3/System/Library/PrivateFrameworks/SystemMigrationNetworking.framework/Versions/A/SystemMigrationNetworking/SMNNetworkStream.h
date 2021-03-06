/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class SMNNetworkStreamMuxer, NSSet, NSObject, NSString, NSFileHandle;

@interface SMNNetworkStream : NSObject {

	char _upstreamReadClosed;
	char _upstreamWriteClosed;
	char _downstreamReadClosed;
	char _downstreamWriteClosed;
	char _sendData;
	unsigned _streamID;
	SMNNetworkStreamMuxer* _owningMuxer;
	SMNNetworkStream* _pairedStream;
	NSSet* _supportedActionCommands;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSString* _name;
	NSString* _streamDescription;
	unsigned long long _mode;
	unsigned long long _rawBytesWritten;
	unsigned long long _rawBytesRead;
	unsigned long long _muxerOverheadBytes;
	unsigned long long _protocolVersion;
	NSFileHandle* _upstreamRead;
	NSFileHandle* _upstreamWrite;
	NSFileHandle* _downstreamRead;
	NSFileHandle* _downstreamWrite;
	long long _downstreamInputPipe;
	long long _downstreamOutputPipe;
	long long _upstreamInputPipe;
	long long _upstreamOutputPipe;
	NSObject*<OS_dispatch_source> _dispatchSource;

}

@property (retain) NSObject*<OS_dispatch_queue> stateQueue;                   //@synthesize stateQueue=_stateQueue - In the implementation block
@property (__weak) SMNNetworkStreamMuxer * owningMuxer;                       //@synthesize owningMuxer=_owningMuxer - In the implementation block
@property (__weak) SMNNetworkStream * pairedStream;                           //@synthesize pairedStream=_pairedStream - In the implementation block
@property (retain) NSSet * supportedActionCommands;                           //@synthesize supportedActionCommands=_supportedActionCommands - In the implementation block
@property (retain) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (retain) NSString * streamDescription;                              //@synthesize streamDescription=_streamDescription - In the implementation block
@property (assign) unsigned long long mode;                                   //@synthesize mode=_mode - In the implementation block
@property (assign) unsigned long long rawBytesWritten;                        //@synthesize rawBytesWritten=_rawBytesWritten - In the implementation block
@property (assign) unsigned long long rawBytesRead;                           //@synthesize rawBytesRead=_rawBytesRead - In the implementation block
@property (assign) unsigned long long muxerOverheadBytes;                     //@synthesize muxerOverheadBytes=_muxerOverheadBytes - In the implementation block
@property (assign) unsigned streamID;                                         //@synthesize streamID=_streamID - In the implementation block
@property (retain) NSFileHandle * upstreamRead;                               //@synthesize upstreamRead=_upstreamRead - In the implementation block
@property (retain) NSFileHandle * upstreamWrite;                              //@synthesize upstreamWrite=_upstreamWrite - In the implementation block
@property (retain) NSFileHandle * downstreamRead;                             //@synthesize downstreamRead=_downstreamRead - In the implementation block
@property (retain) NSFileHandle * downstreamWrite;                            //@synthesize downstreamWrite=_downstreamWrite - In the implementation block
@property (assign) char upstreamReadClosed;                                   //@synthesize upstreamReadClosed=_upstreamReadClosed - In the implementation block
@property (assign) char upstreamWriteClosed;                                  //@synthesize upstreamWriteClosed=_upstreamWriteClosed - In the implementation block
@property (assign) char downstreamReadClosed;                                 //@synthesize downstreamReadClosed=_downstreamReadClosed - In the implementation block
@property (assign) char downstreamWriteClosed;                                //@synthesize downstreamWriteClosed=_downstreamWriteClosed - In the implementation block
@property (assign) long long downstreamInputPipe;                             //@synthesize downstreamInputPipe=_downstreamInputPipe - In the implementation block
@property (assign) long long downstreamOutputPipe;                            //@synthesize downstreamOutputPipe=_downstreamOutputPipe - In the implementation block
@property (assign) long long upstreamInputPipe;                               //@synthesize upstreamInputPipe=_upstreamInputPipe - In the implementation block
@property (assign) long long upstreamOutputPipe;                              //@synthesize upstreamOutputPipe=_upstreamOutputPipe - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> dispatchSource;              //@synthesize dispatchSource=_dispatchSource - In the implementation block
@property (assign) unsigned long long protocolVersion;                        //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign) char sendData;                                             //@synthesize sendData=_sendData - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(char)writeData:(id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(NSString *)streamDescription;
-(char)writeDictionary:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStreamDescription:(NSString *)arg1 ;
-(unsigned)streamID;
-(void)setStreamID:(unsigned)arg1 ;
-(unsigned long long)protocolVersion;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(char)sendData;
-(char)changeMode:(unsigned long long)arg1 ;
-(NSFileHandle *)upstreamRead;
-(NSFileHandle *)downstreamWrite;
-(void)setReadHandleClosed:(char)arg1 ;
-(void)closeUpwardRead:(char)arg1 ;
-(void)setWriteHandleClosed:(char)arg1 ;
-(void)closeDownwardWrite:(char)arg1 ;
-(NSFileHandle *)downstreamRead;
-(char)readDictionary:(id*)arg1 error:(id*)arg2 shouldDecodeClasses:(id)arg3 ;
-(void)closeReadHandle;
-(void)setReadHandleClosed;
-(void)closeWriteHandle;
-(void)setWriteHandleClosed;
-(int)fileDescriptorForReading;
-(int)fileDescriptorForWriting;
-(SMNNetworkStreamMuxer *)owningMuxer;
-(void)setOwningMuxer:(SMNNetworkStreamMuxer *)arg1 ;
-(SMNNetworkStream *)pairedStream;
-(void)setPairedStream:(SMNNetworkStream *)arg1 ;
-(NSSet *)supportedActionCommands;
-(void)setSupportedActionCommands:(NSSet *)arg1 ;
-(unsigned long long)rawBytesWritten;
-(void)setRawBytesWritten:(unsigned long long)arg1 ;
-(unsigned long long)rawBytesRead;
-(void)setRawBytesRead:(unsigned long long)arg1 ;
-(unsigned long long)muxerOverheadBytes;
-(void)setMuxerOverheadBytes:(unsigned long long)arg1 ;
-(void)setUpstreamRead:(NSFileHandle *)arg1 ;
-(NSFileHandle *)upstreamWrite;
-(void)setUpstreamWrite:(NSFileHandle *)arg1 ;
-(void)setDownstreamRead:(NSFileHandle *)arg1 ;
-(void)setDownstreamWrite:(NSFileHandle *)arg1 ;
-(char)upstreamReadClosed;
-(void)setUpstreamReadClosed:(char)arg1 ;
-(char)upstreamWriteClosed;
-(void)setUpstreamWriteClosed:(char)arg1 ;
-(char)downstreamReadClosed;
-(void)setDownstreamReadClosed:(char)arg1 ;
-(char)downstreamWriteClosed;
-(void)setDownstreamWriteClosed:(char)arg1 ;
-(void)setSendData:(char)arg1 ;
-(long long)downstreamInputPipe;
-(void)setDownstreamInputPipe:(long long)arg1 ;
-(long long)downstreamOutputPipe;
-(void)setDownstreamOutputPipe:(long long)arg1 ;
-(long long)upstreamInputPipe;
-(void)setUpstreamInputPipe:(long long)arg1 ;
-(long long)upstreamOutputPipe;
-(void)setUpstreamOutputPipe:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)dispatchSource;
-(void)setDispatchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)_initWithVersion:(unsigned long long)arg1 ;
-(id)initWithStreamID:(unsigned)arg1 name:(id)arg2 protocolVersion:(unsigned long long)arg3 ;
-(id)initWithStreamID:(unsigned)arg1 name:(id)arg2 protocolVersion:(unsigned long long)arg3 directlyOnSocket:(id)arg4 ;
-(void)closeDownwardWrite;
-(void)closeUpwardWrite;
-(void)_addRawBytesWritten:(unsigned long long)arg1 ;
-(void)_addRawBytesRead:(unsigned long long)arg1 ;
-(void)_addMuxerOverheadBytes:(unsigned long long)arg1 ;
@end

