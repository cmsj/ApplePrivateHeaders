/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSOutputStream.h>

@class NSString, NSMutableData, NSError, NSOutputStream, NSData;

@interface IASOutputStream : NSOutputStream {

	NSString* _digestAlgorithm;
	NSMutableData* _inputDigestData;
	NSMutableData* _outputDigestData;
	NSError* _streamError;
	char _isOpen;
	char _isClosed;
	char _managingSourceStreamLifecycle;
	char _isWritingToFileDescriptor;
	int _internalDestinationFileDescriptor;
	void* _inputDigestContext;
	void* _outputDigestContext;
	long long _bytesConsumed;
	long long _bytesWritten;
	NSOutputStream* _destinationStream;
	NSMutableData* _internalDestinationData;
	unsigned long long _internalDestinationBufferCapacity;
	char* _internalDestinationBuffer;

}

@property (assign,nonatomic) char isOpen;                                                                    //@synthesize isOpen=_isOpen - In the implementation block
@property (assign,nonatomic) char isClosed;                                                                  //@synthesize isClosed=_isClosed - In the implementation block
@property (assign,nonatomic) void* inputDigestContext;                                                       //@synthesize inputDigestContext=_inputDigestContext - In the implementation block
@property (assign,nonatomic) void* outputDigestContext;                                                      //@synthesize outputDigestContext=_outputDigestContext - In the implementation block
@property (assign,nonatomic) long long bytesConsumed;                                                        //@synthesize bytesConsumed=_bytesConsumed - In the implementation block
@property (assign,nonatomic) long long bytesWritten;                                                         //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (nonatomic,retain) NSOutputStream * destinationStream;                                             //@synthesize destinationStream=_destinationStream - In the implementation block
@property (nonatomic,retain) NSMutableData * internalDestinationData;                                        //@synthesize internalDestinationData=_internalDestinationData - In the implementation block
@property (assign,nonatomic) unsigned long long internalDestinationBufferCapacity;                           //@synthesize internalDestinationBufferCapacity=_internalDestinationBufferCapacity - In the implementation block
@property (assign,nonatomic) char* internalDestinationBuffer;                                                //@synthesize internalDestinationBuffer=_internalDestinationBuffer - In the implementation block
@property (assign,nonatomic) char managingSourceStreamLifecycle;                                             //@synthesize managingSourceStreamLifecycle=_managingSourceStreamLifecycle - In the implementation block
@property (assign,setter=setWritingToFileDescriptor:,nonatomic) char isWritingToFileDescriptor;              //@synthesize isWritingToFileDescriptor=_isWritingToFileDescriptor - In the implementation block
@property (assign,nonatomic) int internalDestinationFileDescriptor;                                          //@synthesize internalDestinationFileDescriptor=_internalDestinationFileDescriptor - In the implementation block
@property (copy) NSError * streamError; 
@property (nonatomic,copy) NSString * digestAlgorithm; 
@property (nonatomic,readonly) NSData * inputDigestData; 
@property (nonatomic,readonly) NSData * outputDigestData; 
+(char)registerSubclass:(Class)arg1 forFormat:(id)arg2 ;
+(void)initialize;
+(Class)outputStreamSubclassForFormat:(id)arg1 ;
-(void)updateInputBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(void)updateOutputBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(long long)_write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)invalidateDigests;
-(void)setInputDigestContext:(void*)arg1 ;
-(void)setOutputDigestContext:(void*)arg1 ;
-(void*)inputDigestContext;
-(void*)outputDigestContext;
-(void)_updateDigest:(void*)arg1 withBytes:(char*)arg2 length:(unsigned)arg3 ;
-(void)_digestOpen;
-(void)_digestClose;
-(void)_updateInputBytes:(char*)arg1 length:(unsigned)arg2 ;
-(void)_updateOutputBytes:(char*)arg1 length:(unsigned)arg2 ;
-(NSData *)inputDigestData;
-(NSData *)outputDigestData;
-(void)setDestinationStream:(NSOutputStream *)arg1 ;
-(void)setManagingSourceStreamLifecycle:(char)arg1 ;
-(void)setInternalDestinationBufferCapacity:(unsigned long long)arg1 ;
-(void)setInternalDestinationBuffer:(char*)arg1 ;
-(void)setInternalDestinationFileDescriptor:(int)arg1 ;
-(void)setWritingToFileDescriptor:(char)arg1 ;
-(NSMutableData *)internalDestinationData;
-(char*)internalDestinationBuffer;
-(NSOutputStream *)destinationStream;
-(char)managingSourceStreamLifecycle;
-(unsigned long long)internalDestinationBufferCapacity;
-(char)isWritingToFileDescriptor;
-(int)internalDestinationFileDescriptor;
-(void)setInternalDestinationData:(NSMutableData *)arg1 ;
-(id)initWithDestinationStream:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)streamStatus;
-(NSError *)streamError;
-(void)open;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(id)initWithURL:(id)arg1 append:(char)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initToFileAtPath:(id)arg1 append:(char)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(char)isOpen;
-(char)isClosed;
-(void)setIsClosed:(char)arg1 ;
-(long long)bytesWritten;
-(void)setIsOpen:(char)arg1 ;
-(void)setBytesWritten:(long long)arg1 ;
-(id)destinationData;
-(void)setDestinationData:(id)arg1 ;
-(NSString *)digestAlgorithm;
-(void)setDigestAlgorithm:(NSString *)arg1 ;
-(void)setStreamError:(NSError *)arg1 ;
-(long long)bytesConsumed;
-(void)setBytesConsumed:(long long)arg1 ;
@end

