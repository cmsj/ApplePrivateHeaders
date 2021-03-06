/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_xpc_object;
@class CMSensorRecorderInternal, NSObject, CLSensorRecorderSensorMeta, NSMutableArray, NSArray;

@interface CMSensorDataList : NSObject <NSFastEnumeration> {

	CMSensorRecorderInternal* fProxy;
	NSObject*<OS_xpc_object> fDataBuffer;
	CLSensorRecorderSensorMeta* fCurrentBlock;
	unsigned long long fCurrentBlockIdentifier;
	long long fCurrentBlockDataIdentifier;
	double fCurrentBlockStartTime;
	unsigned long long fCurrentBlockTimestamp;
	char* fDataBufferPtr;
	unsigned long long fDataBufferLength;
	unsigned long long fCurrentIdentifier;
	unsigned long long fStartingIdentifier;
	long long fRetrievedDataBufferIdentifier;
	unsigned long long fBlockOffset;
	AccelUnpacker fAccelUnpacker;
	GyroUnpacker fGyroUnpacker;
	PressureUnpacker fPressureUnpacker;
	NSMutableArray* fCachedData;
	NSArray* fMetaArray;
	int fDataType;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CM12*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)_updateCurrentBlockProperties;
-(char)_updatePointers;
-(id)initWithIdentifier:(unsigned long long)arg1 andType:(int)arg2 ;
-(id)initFrom:(double)arg1 to:(double)arg2 withType:(int)arg3 ;
@end

