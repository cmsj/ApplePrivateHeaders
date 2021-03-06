/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/Versions/A/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BKSHIDEventDeferringToken, NSString;

@interface BKSHIDEventDeferringTarget : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying> {

	int _pid;
	BKSHIDEventDeferringToken* _token;

}

@property (nonatomic,readonly) int pid;                                             //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringToken * token;              //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)protobufSchema;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)pid;
-(BKSHIDEventDeferringToken *)token;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(id)initForProtobufDecoding;
-(id)_initWithPID:(int)arg1 token:(id)arg2 ;
@end

