/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface GEOCacheUsageMonitor_TileCacheData : NSObject {

	unsigned _count;
	unsigned _byteCount;
	NSMutableDictionary* _errorsDict;

}

@property (assign,nonatomic) unsigned count;                  //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned byteCount;              //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,readonly) NSArray * errors; 
-(id)init;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(NSArray *)errors;
-(char)wouldWrapWithByteCount:(unsigned)arg1 ;
-(void)addErrorWithDomain:(id)arg1 code:(long long)arg2 ;
-(unsigned)byteCount;
-(void)setByteCount:(unsigned)arg1 ;
@end

