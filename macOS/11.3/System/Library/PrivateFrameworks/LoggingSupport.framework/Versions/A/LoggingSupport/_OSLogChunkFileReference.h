/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _OSLogCollectionReference;

@interface _OSLogChunkFileReference : NSObject {

	_OSLogCollectionReference* _oslcr;
	char* _path;
	unsigned long long _xot;
	unsigned long long _xet;

}

@property (nonatomic,readonly) char* path;                                      //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) unsigned long long xattrOldestTime;              //@synthesize xot=_xot - In the implementation block
@property (nonatomic,readonly) unsigned long long xattrEndTime;                 //@synthesize xet=_xet - In the implementation block
-(unsigned long long)xattrOldestTime;
-(unsigned long long)xattrEndTime;
-(id)initWithCollection:(id)arg1 subpath:(const char*)arg2 ;
-(char)readXattrForTimespan:(id*)arg1 ;
-(id)copyMappedChunkFile:(id*)arg1 ;
-(void)dealloc;
-(char*)path;
@end

