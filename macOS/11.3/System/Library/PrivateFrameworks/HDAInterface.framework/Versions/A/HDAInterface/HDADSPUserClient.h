/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HDAInterface.framework/Versions/A/HDAInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HDAInterface/HDAUserClient.h>

@class NSArray;

@interface HDADSPUserClient : HDAUserClient {

	NSArray* _neverBypassModules;
	NSArray* _alwaysBypassModules;
	NSArray* _calibrationModules;
	NSArray* _compressorModules;
	NSArray* _linearModules;
	NSArray* _nonlinearModules;

}
+(id)dspUserClientForInternalMicrophone;
+(id)dspUserClientForExternalMicrophone;
+(id)dspUserClientForSpeakers;
+(id)dspUserClientForHeadphones;
+(id)dspUserClientForLineOut;
+(id)dspUserClientForLineIn;
+(id)dspUserClientForSPDIFIn;
+(id)dspUserClientForSPDIFOut;
+(id)dspUserClientForDeviceType:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithService:(unsigned)arg1 andClientType:(unsigned)arg2 ;
-(int)UserClientScalarIScalarO:(unsigned)arg1 scalarICount:(unsigned)arg2 scalarOCount:(unsigned)arg3 scalarVargs:(void*)arg4 ;
-(int)UserClientScalarIStructureO:(unsigned)arg1 scalarICount:(unsigned)arg2 structOSize:(unsigned long long*)arg3 structO:(void*)arg4 scalarVargs:(void*)arg5 ;
-(char)getNumberOfInstantiatedFunctions:(unsigned long long*)arg1 withError:(id*)arg2 ;
-(char)getFunction:(unsigned long long)arg1 bypass:(char*)arg2 withError:(id*)arg3 ;
-(char)setFunction:(unsigned long long)arg1 bypass:(char)arg2 withError:(id*)arg3 ;
-(char)getFunction:(unsigned long long)arg1 name:(char*)arg2 ofSize:(unsigned long long*)arg3 withError:(id*)arg4 ;
-(char)setFunction:(unsigned long long)arg1 parameter:(unsigned long long)arg2 toValue:(unsigned long long)arg3 withError:(id*)arg4 ;
-(char)getFunction:(unsigned long long)arg1 parameter:(unsigned long long)arg2 value:(unsigned long long*)arg3 withError:(id*)arg4 ;
-(id)currentDSPBypassStateWithError:(id*)arg1 ;
-(char)restoreFromDSPBypassState:(id)arg1 withError:(id*)arg2 ;
-(char)disableDSPBypass:(unsigned long long)arg1 withError:(id*)arg2 ;
-(char)enableDSPBypass:(unsigned long long)arg1 withError:(id*)arg2 ;
-(char)setOutputMuteForChannel1:(char)arg1 channel2:(char)arg2 channel3:(char)arg3 channel4:(char)arg4 channel5:(char)arg5 channel6:(char)arg6 withError:(id*)arg7 ;
-(char)getOutputMuteForChannel1:(char*)arg1 channel2:(char*)arg2 channel3:(char*)arg3 channel4:(char*)arg4 channel5:(char*)arg5 channel6:(char*)arg6 withError:(id*)arg7 ;
-(char)getFunction:(unsigned long long)arg1 numberOfParameter:(unsigned long long*)arg2 withError:(id*)arg3 ;
-(char)getFunction:(unsigned long long)arg1 coefficients:(void*)arg2 ofSize:(unsigned long long*)arg3 withError:(id*)arg4 ;
-(char)getFunction:(unsigned long long)arg1 coefficients:(void*)arg2 atIndex:(unsigned)arg3 ofSize:(unsigned long long*)arg4 withError:(id*)arg5 ;
@end

