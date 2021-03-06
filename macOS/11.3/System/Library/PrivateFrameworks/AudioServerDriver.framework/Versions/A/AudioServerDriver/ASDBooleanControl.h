/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/Versions/A/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ASDBooleanControl : ASDControl {

	char _value;
	NSObject*<OS_dispatch_queue> _valueQueue;
	char _settable;

}

@property (assign,nonatomic) char value; 
@property (getter=isSettable,nonatomic,readonly) char settable;              //@synthesize settable=_settable - In the implementation block
+(id)muteControlWithValue:(char)arg1 isSettable:(char)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
+(id)phantomPowerControlWithValue:(char)arg1 isSettable:(char)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
+(id)invertControlWithValue:(char)arg1 isSettable:(char)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
+(id)jackControlWithValue:(char)arg1 isSettable:(char)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned)arg4 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(char)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)driverClassName;
-(char)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(id)initWithValue:(char)arg1 isSettable:(char)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 andObjectClassID:(unsigned)arg6 ;
-(id)initWithValue:(char)arg1 isSettable:(char)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
-(char)value;
-(void)setValue:(char)arg1 ;
-(char)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(char)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(unsigned)baseClass;
-(id)initWithPlugin:(id)arg1 ;
-(char)isSettable;
-(char)changeValue:(char)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(char)arg2 ;
@end

