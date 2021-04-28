/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAudioPowerProviding.h>

@class AFXPCWrapper, _AFAudioPowerXPCSharedMemory, NSString;

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding> {

	AFXPCWrapper* _wrapper;
	_AFAudioPowerXPCSharedMemory* _sharedMemory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCWrapper:(id)arg1 ;
-(void)willBeginAccessPower;
-(char)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2 ;
-(void)didEndAccessPower;
@end
