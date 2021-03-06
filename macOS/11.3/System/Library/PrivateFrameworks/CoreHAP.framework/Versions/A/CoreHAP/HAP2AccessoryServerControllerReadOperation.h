/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAP2AccessoryServerControllerOperation.h>

@class NSIndexSet, HAP2ControllerReadRequest;

@interface HAP2AccessoryServerControllerReadOperation : HAP2AccessoryServerControllerOperation {

	NSIndexSet* _cachedCharacteristicIndices;
	HAP2ControllerReadRequest* _readRequest;

}
-(void)_cleanUp;
-(void)_sendRequest;
-(id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 readRequest:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9 ;
@end

