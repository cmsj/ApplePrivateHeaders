/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWFigCaptureStreamStartStopDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class NSString, NSDictionary, NSMutableDictionary;

@interface BWFigCaptureStream : NSObject {

	OpaqueFigCaptureStreamRef _stream;
	NSString* _portType;
	NSString* _uniqueID;
	NSString* _portTypeShortString;
	NSDictionary* _supportedProperties;
	NSMutableDictionary* _cachedProperties;
	char _invalidated;
	os_unfair_lock_s _lock;
	char _streaming;
	unsigned _ktraceCodePrefix;
	id<BWFigCaptureStreamStartStopDelegate> _startStopDelegate;

}

@property (readonly) NSString * portType;                                                            //@synthesize portType=_portType - In the implementation block
@property (readonly) NSString * uniqueID;                                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (readonly) NSDictionary * supportedProperties;                                             //@synthesize supportedProperties=_supportedProperties - In the implementation block
@property (assign,nonatomic) id<BWFigCaptureStreamStartStopDelegate> startStopDelegate;              //@synthesize startStopDelegate=_startStopDelegate - In the implementation block
@property (getter=isStreaming,readonly) char streaming; 
+(void)initialize;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(int)start;
-(NSString *)uniqueID;
-(int)stop;
-(NSString *)portType;
-(char)isStreaming;
-(NSDictionary *)supportedProperties;
-(int)setProperty:(CFStringRef)arg1 value:(id)arg2 ;
-(int)setPropertyIfSupported:(CFStringRef)arg1 value:(id)arg2 ;
-(id)getPropertyIfSupported:(CFStringRef)arg1 error:(int*)arg2 ;
-(id)getProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(id)copyProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)registerForNotification:(CFStringRef)arg1 listener:(const void*)arg2 callback:(/*function pointer*/void*)arg3 ;
-(int)unregisterForNotification:(CFStringRef)arg1 listener:(const void*)arg2 ;
-(int)addAttachmentsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 ;
-(void)setStartStopDelegate:(id<BWFigCaptureStreamStartStopDelegate>)arg1 ;
-(id)copyPropertyIfSupported:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)sendCommandProperty:(CFStringRef)arg1 ;
-(int)_setProperty:(CFStringRef)arg1 value:(id)arg2 requireSupportedProperty:(char)arg3 ;
-(id)_copyProperty:(CFStringRef)arg1 requireSupported:(char)arg2 error:(int*)arg3 ;
-(id)initWithFigCaptureStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(OpaqueFigCaptureStreamRef)figCaptureStream;
-(void)flushPropertyCache;
-(void)synchronizedStreamsGroupWillStop;
-(void)synchronizedStreamsGroupDidStop;
-(id<BWFigCaptureStreamStartStopDelegate>)startStopDelegate;
@end

