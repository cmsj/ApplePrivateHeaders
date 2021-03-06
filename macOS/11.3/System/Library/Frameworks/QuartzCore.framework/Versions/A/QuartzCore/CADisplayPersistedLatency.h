/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CADisplayPersistedLatency : NSObject <NSSecureCoding> {

	NSString* _uuid;
	NSDictionary* _mode;
	double _latency;

}

@property (nonatomic,copy) NSString * uuid;                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSDictionary * mode;              //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double latency;                 //@synthesize latency=_latency - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setMode:(NSDictionary *)arg1 ;
-(NSDictionary *)mode;
-(double)latency;
-(void)setLatency:(double)arg1 ;
@end

