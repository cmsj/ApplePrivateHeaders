/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/Versions/A/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSArray;

@interface ASDAudioDeviceDSPConfiguration : NSObject {

	NSString* _name;
	NSSet* _underlyingDeviceProperties;
	NSSet* _dspDeviceProperties;
	NSArray* _inputDSP;
	NSArray* _outputDSP;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSSet * underlyingDeviceProperties;              //@synthesize underlyingDeviceProperties=_underlyingDeviceProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dspDeviceProperties;                     //@synthesize dspDeviceProperties=_dspDeviceProperties - In the implementation block
@property (nonatomic,readonly) NSArray * inputDSP;                              //@synthesize inputDSP=_inputDSP - In the implementation block
@property (nonatomic,readonly) NSArray * outputDSP;                             //@synthesize outputDSP=_outputDSP - In the implementation block
-(NSSet *)underlyingDeviceProperties;
-(NSSet *)dspDeviceProperties;
-(NSArray *)inputDSP;
-(NSArray *)outputDSP;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 name:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
@end

