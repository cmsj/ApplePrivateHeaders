/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {

	char _is256Bit;
	unsigned long long _wireType;

}

@property (readonly) unsigned keyLength; 
@property (readonly) unsigned blockLength; 
@property (readonly) unsigned ivLength; 
@property (readonly) unsigned icvLength; 
@property (assign) unsigned long long wireType;              //@synthesize wireType=_wireType - In the implementation block
@property (readonly) char isAuthenticated; 
@property (readonly) char isGCM; 
@property (assign) char is256Bit;                            //@synthesize is256Bit=_is256Bit - In the implementation block
-(void)setWireType:(unsigned long long)arg1 ;
-(void)setIs256Bit:(char)arg1 ;
-(char)is256Bit;
-(id)initWithEncryptionWireType:(unsigned long long)arg1 is256Bit:(char)arg2 ;
-(char)isGCM;
-(unsigned)blockLength;
-(unsigned)ccAlgorithm;
-(unsigned)ivLength;
-(unsigned)icvLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)isAuthenticated;
-(unsigned)keyLength;
-(unsigned long long)wireType;
-(id)initWithEncryptionType:(unsigned long long)arg1 ;
@end

