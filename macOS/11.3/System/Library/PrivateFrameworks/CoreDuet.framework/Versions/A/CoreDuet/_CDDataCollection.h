/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, _DKKnowledgeQuerying;
@class NSObject, NSString, NSDate, _CDDataCollectionSession, _CDEventStreamsRegister;

@interface _CDDataCollection : NSObject {

	char _selectedForDataCollection;
	char _deleteSessionOnCleanup;
	NSObject*<OS_xpc_object> _activity;
	id<_DKKnowledgeQuerying> _storage;
	/*^block*/id _submissionBlock;
	NSString* _dataDirectory;
	NSString* _sessionPath;
	NSDate* _collectionDate;
	_CDDataCollectionSession* _session;
	double _samplingRate;
	unsigned long long _daysPerBatch;
	unsigned long long _maxBatches;
	_CDEventStreamsRegister* _eventStreamsRegister;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> storage;               //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy) id submissionBlock;                                 //@synthesize submissionBlock=_submissionBlock - In the implementation block
-(id<_DKKnowledgeQuerying>)storage;
-(NSObject*<OS_xpc_object>)activity;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(unsigned long long)arg7 eventStreams:(id)arg8 maxBatches:(unsigned long long)arg9 ;
-(id)submissionBlock;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 ;
-(void)execute;
-(void)setSubmissionBlock:(id)arg1 ;
@end

