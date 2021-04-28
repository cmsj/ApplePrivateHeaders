/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DisplayTransportServices.framework/Versions/A/DisplayTransportServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DTSDisplayPortDevice <NSObject>
@property (nonatomic,readonly) id<DTSDisplayPortDeviceInfo> info; 
@required
+(long long)nativeAUXTransactionLengthLimit;
+(long long)i2cTransactionLengthLimit;
-(id<DTSDisplayPortDeviceInfo>)info;
-(char)lock:(id*)arg1;
-(char)unlock:(id*)arg1;
-(id)nativeReadAtAddress:(long long)arg1 length:(long long)arg2 error:(id*)arg3;
-(char)nativeWriteAtAddress:(long long)arg1 data:(id)arg2 error:(id*)arg3;
-(id)i2cReadAtAddress:(long long)arg1 length:(long long)arg2 error:(id*)arg3;
-(char)i2cWriteAtAddress:(long long)arg1 data:(id)arg2 error:(id*)arg3;
-(id)i2cWriteReadAtAddress:(long long)arg1 data:(id)arg2 length:(long long)arg3 error:(id*)arg4;

@end
