/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPort.h>

@interface QCProxyPort : QCPort
+(id)allocWithZone:(NSZone*)arg1 ;
+(Class)baseClass;
-(double)doubleValue;
-(char)setObject:(id)arg1 ;
-(id)object;
-(id)stringValue;
-(id)value;
-(unsigned long long)_timestamp;
-(char)booleanValue;
-(char)setValue:(id)arg1 ;
-(void)setStringValue:(id)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(Class)objectClass;
-(Class)valueClass;
-(id)rawValue;
-(char)setStateValue:(id)arg1 ;
-(id)stateValue;
-(id)imageValue;
-(void)setBooleanValue:(char)arg1 ;
-(void)setImageValue:(id)arg1 ;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(void)portWillDeleteFromNode;
-(void)setRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(char)canConnectToPort:(id)arg1 ;
-(char)takeValue:(id)arg1 fromPort:(id)arg2 ;
-(char)acceptValuesOfClass:(Class)arg1 ;
-(void)setIndexValue:(unsigned long long)arg1 ;
-(unsigned long long)indexValue;
-(id)structureValue;
-(void)setStructureValue:(id)arg1 ;
-(id)setupParameterView;
-(void)resetParameterView:(id)arg1 ;
-(void)editValueWithEvent:(id)arg1 inView:(id)arg2 atPoint:(CGPoint)arg3 ;
-(id)_argumentsFromAttributesKey:(id)arg1 originalArguments:(id)arg2 ;
-(void)setRawValue:(id)arg1 ;
-(id)meshValue;
-(void)_setConnectedPort:(id)arg1 ;
-(SCD_Struct_QC4)md5WithTime:(double)arg1 arguments:(id)arg2 ;
-(void)setMeshValue:(id)arg1 ;
@end

