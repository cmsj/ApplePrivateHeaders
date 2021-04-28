/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSString, NSData;

@interface PFUuidData : NSData {

	unsigned char _uuid[16];

}

@property (nonatomic,readonly) NSString * canonicalStringValue; 
@property (nonatomic,readonly) NSString * mercuryStringValue; 
@property (nonatomic,readonly) NSData * dataValue; 
@property (nonatomic,readonly) char isNull; 
+(char)isMercuryBase64String:(id)arg1 ;
+(char)isCanonicalUuidString:(id)arg1 ;
+(id)randomUuid;
+(id)uuidWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)uuidWithData:(id)arg1 ;
+(id)uuidWithString:(id)arg1 ;
+(id)nullUuid;
+(char)isMercuryUuidString:(id)arg1 ;
+(char)isSupportedUuidString:(id)arg1 ;
+(id)generateUuidAsCanonicalString;
+(id)generateUuidAsMercuryString;
+(id)hostUuid;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(const void*)bytes;
-(Class)classForCoder;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(char)isEqualToData:(id)arg1 ;
-(char)isNull;
-(NSData *)dataValue;
-(id)initWithMercuryBase64String:(id)arg1 ;
-(id)initRandom;
-(id)initNull;
-(NSString *)canonicalStringValue;
-(NSString *)mercuryStringValue;
@end
