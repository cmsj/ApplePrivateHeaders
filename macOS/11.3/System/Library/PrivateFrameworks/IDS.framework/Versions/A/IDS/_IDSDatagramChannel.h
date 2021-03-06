/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_connection, OS_nw_path_evaluator;
#import <IDS/IDS-Structs.h>
@class NSObject, IDSDataChannelLinkContext, NSMutableDictionary, NSData, NSMutableArray;

@interface _IDSDatagramChannel : NSObject {

	char _verboseFunctionalLogging;
	int _socketDescriptor;
	/*^block*/id _eventHandler;
	/*^block*/id _readHandler;
	/*^block*/id _readHandlerWithOptions;
	char _connected;
	os_unfair_lock_s _writeLock;
	os_unfair_lock_s _readLock;
	char _isInvalidated;
	NSObject*<OS_nw_connection> _connection;
	char _hasMetadata;
	char _sentFirstReadLinkInfo;
	char _receivedPreConnectionData;
	char _waitForPreConnectionDataForConnected;
	char _startCalled;
	char _startAutomatically;
	int _osChannelFD;
	NSObject*<OS_nw_path_evaluator> _pathEvaluator;
	channelRef _osChannel;
	channel_ring_descRef _osChannelTXRing;
	channel_ring_descRef _osChannelRXRing;
	unsigned char _nexus_instance[16];
	IDSDataChannelLinkContext* _cellularLink;
	NSMutableDictionary* _linkContexts;
	char _defaultLinkID;
	NSData* _preConnectionData;
	NSMutableArray* _sendingMetadata;
	char _needsMediaEncryptionInfo;
	unsigned long long _outgoingBytes;
	unsigned long long _incomingBytes;
	double _lastOutgoingStatReport;
	double _lastIncomingStatReport;
	NSMutableDictionary* _MKIArrivalTime;
	NSMutableDictionary* _firstPacketArrivalTimeForMKI;
	NSMutableDictionary* _probingDict;

}
-(id)init;
@end

