/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioTransportCommon.framework/Versions/A/AudioTransportCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IOKService, IOKConnection, ATCIOA2StreamFormat, NSArray;

@interface ATCIOA2Stream : NSObject {

	IOKService* _service;
	IOKConnection* _connection;
	unsigned long long _index;
	unsigned _physicalID;
	char _input;
	unsigned _startingChannel;
	ATCIOA2StreamFormat* _currentFormat;
	NSArray* _availableFormats;

}

@property (getter=isInput,nonatomic,readonly) char input;                             //@synthesize input=_input - In the implementation block
@property (nonatomic,copy,readonly) ATCIOA2StreamFormat * currentFormat;              //@synthesize currentFormat=_currentFormat - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableFormats;                       //@synthesize availableFormats=_availableFormats - In the implementation block
@property (nonatomic,readonly) unsigned startingChannel;                              //@synthesize startingChannel=_startingChannel - In the implementation block
-(unsigned)startingChannel;
-(NSArray *)availableFormats;
-(id)initWithService:(id)arg1 connection:(id)arg2 index:(unsigned long long)arg3 input:(char)arg4 description:(id)arg5 ;
-(char)isInput;
-(ATCIOA2StreamFormat *)currentFormat;
@end
