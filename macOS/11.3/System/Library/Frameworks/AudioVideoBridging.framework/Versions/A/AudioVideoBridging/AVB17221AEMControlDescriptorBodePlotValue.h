/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMControlDescriptorValue.h>

@class AVB17221AEMBodePlotEntry, NSArray;

@interface AVB17221AEMControlDescriptorBodePlotValue : AVB17221AEMControlDescriptorValue {

	AVB17221AEMBodePlotEntry* minValue;
	AVB17221AEMBodePlotEntry* maxValue;
	AVB17221AEMBodePlotEntry* step;
	AVB17221AEMBodePlotEntry* defaultValue;
	NSArray* currentValues;

}

@property (nonatomic,copy) AVB17221AEMBodePlotEntry * minValue; 
@property (nonatomic,copy) AVB17221AEMBodePlotEntry * maxValue; 
@property (nonatomic,copy) AVB17221AEMBodePlotEntry * step; 
@property (nonatomic,copy) AVB17221AEMBodePlotEntry * defaultValue; 
@property (nonatomic,copy) NSArray * currentValues; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(AVB17221AEMBodePlotEntry *)minValue;
-(void)setMinValue:(AVB17221AEMBodePlotEntry *)arg1 ;
-(AVB17221AEMBodePlotEntry *)maxValue;
-(void)setMaxValue:(AVB17221AEMBodePlotEntry *)arg1 ;
-(AVB17221AEMBodePlotEntry *)defaultValue;
-(void)setDefaultValue:(AVB17221AEMBodePlotEntry *)arg1 ;
-(AVB17221AEMBodePlotEntry *)step;
-(void)setStep:(AVB17221AEMBodePlotEntry *)arg1 ;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(id)initWithValuePointer:(char**)arg1 numberOfValues:(unsigned short)arg2 ;
-(unsigned short)numberOfValues;
-(unsigned long long)valuesSize;
-(char*)setValuesAtPointer:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)setCurrentValues:(NSArray *)arg1 ;
-(NSArray *)currentValues;
-(id)objectsForSetCommandValuesData:(id)arg1 ;
-(char)updateWithValueDictionary:(id)arg1 ;
-(id)valueDictionary;
-(id)valueXMLElement;
-(char)updateWithValueXMLElement:(id)arg1 ;
-(unsigned long long)currentValueSize;
-(void)setCurrentValueData:(id)arg1 ;
-(id)currentValueData;
-(char)validControlValueType:(unsigned short)arg1 ;
@end
