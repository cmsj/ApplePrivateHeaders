/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ETModelDef;

@interface ETVariable : NSObject {

	float _initializationAlpha;
	float _initializationBeta;
	unsigned long long _kind;
	NSString* _name;
	NSString* _layerName;
	unsigned long long _initializationMode;
	ETModelDef* _model;

}

@property (assign,nonatomic,__weak) ETModelDef * model;                //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) unsigned long long kind;                  //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * layerName;                     //@synthesize layerName=_layerName - In the implementation block
@property (assign) unsigned long long initializationMode;              //@synthesize initializationMode=_initializationMode - In the implementation block
@property (assign) float initializationAlpha;                          //@synthesize initializationAlpha=_initializationAlpha - In the implementation block
@property (assign) float initializationBeta;                           //@synthesize initializationBeta=_initializationBeta - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)kind;
-(void)setKind:(unsigned long long)arg1 ;
-(id)copyData;
-(ETModelDef *)model;
-(void)setModel:(ETModelDef *)arg1 ;
-(void)updateWithData:(id)arg1 ;
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(float)initializationAlpha;
-(float)initializationBeta;
-(id)initWithModelDef:(id)arg1 ;
-(id)getOpaqueCopy;
-(id)swapWithOpaqueCopy:(id)arg1 ;
-(unsigned long long)initializationMode;
-(void)setInitializationMode:(unsigned long long)arg1 ;
-(void)setInitializationAlpha:(float)arg1 ;
-(void)setInitializationBeta:(float)arg1 ;
@end

