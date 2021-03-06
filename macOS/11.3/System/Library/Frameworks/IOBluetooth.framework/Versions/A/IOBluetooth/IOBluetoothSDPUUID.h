/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <CoreFoundation/NSData.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface IOBluetoothSDPUUID : NSData <NSCoding, NSSecureCoding> {

	NSData* mUUIDData;
	void* _mReserved;

}
+(id)uuid32:(unsigned)arg1 ;
+(id)withSDPUUIDRef:(OpaqueIOBluetoothObjectRefRef)arg1 ;
+(char)supportsSecureCoding;
+(id)uuid16:(unsigned short)arg1 ;
+(id)uuidWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
+(id)uuidWithData:(id)arg1 ;
-(id)initWithUUID32:(unsigned)arg1 ;
-(char)isEqualToUUID:(id)arg1 ;
-(id)getUUIDWithLength:(unsigned)arg1 ;
-(OpaqueIOBluetoothObjectRefRef)getSDPUUIDRef;
-(void)dealloc;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(const void*)bytes;
-(Class)classForCoder;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForArchiver;
-(char)isEqualToData:(id)arg1 ;
-(Class)classForPortCoder;
-(id)initWithUUID16:(unsigned short)arg1 ;
@end

