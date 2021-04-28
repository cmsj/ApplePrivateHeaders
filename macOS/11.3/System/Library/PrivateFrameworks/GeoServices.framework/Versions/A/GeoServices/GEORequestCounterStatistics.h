/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface GEORequestCounterStatistics : NSObject <NSSecureCoding> {

	unsigned long long _bytesTransmitted;
	unsigned long long _bytesReceived;
	NSMutableDictionary* _resultCounts;

}

@property (nonatomic,readonly) unsigned long long bytesTransmitted;              //@synthesize bytesTransmitted=_bytesTransmitted - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesReceived;                 //@synthesize bytesReceived=_bytesReceived - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)bytesReceived;
-(void)incrementBytesTransmitted:(unsigned long long)arg1 ;
-(void)incrementBytesReceived:(unsigned long long)arg1 ;
-(void)incrementCount:(unsigned long long)arg1 forResult:(unsigned char)arg2 ;
-(unsigned long long)countForResult:(unsigned char)arg1 ;
-(unsigned long long)bytesTransmitted;
@end
