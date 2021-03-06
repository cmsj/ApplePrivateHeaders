/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/Versions/A/MetricKitSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface MXSourceXPCPayload : NSObject <NSSecureCoding> {

	long long _sourceID;
	NSDate* _datestamp;
	NSDictionary* _metrics;

}

@property (assign) long long sourceID;                  //@synthesize sourceID=_sourceID - In the implementation block
@property (retain) NSDate * datestamp;                  //@synthesize datestamp=_datestamp - In the implementation block
@property (retain) NSDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metrics;
-(long long)sourceID;
-(void)setSourceID:(long long)arg1 ;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(void)setDatestamp:(NSDate *)arg1 ;
-(NSDate *)datestamp;
-(id)initWithSourceID:(long long)arg1 withDateStamp:(id)arg2 andMetrics:(id)arg3 ;
@end

