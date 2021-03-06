/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/Versions/A/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, NSArray;

@interface ASABox : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelName; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,copy,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSString * boxUID; 
@property (nonatomic,copy,readonly) NSString * modelUID; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,readonly) char hasAudio; 
@property (nonatomic,readonly) char hasVideo; 
@property (nonatomic,readonly) char hasMIDI; 
@property (nonatomic,readonly) char isProtected; 
@property (assign,getter=isAcquired,nonatomic) char acquired; 
@property (nonatomic,readonly) int acquisitionFailure; 
@property (assign,nonatomic) char identify; 
@property (nonatomic,copy,readonly) NSArray * audioDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * deviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * clockDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * audioDevices; 
@property (nonatomic,copy,readonly) NSArray * clockDevices; 
@property (getter=isNameSettable,nonatomic,readonly) char nameSettable; 
@property (getter=isAcquireSettable,nonatomic,readonly) char acquireSettable; 
@property (getter=isIdentifySettable,nonatomic,readonly) char identifySettable; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(unsigned)transportType;
-(NSString *)firmwareVersion;
-(NSString *)modelName;
-(NSString *)manufacturer;
-(NSString *)modelUID;
-(char)hasAudio;
-(char)hasVideo;
-(char)hasMIDI;
-(char)isAcquired;
-(NSArray *)audioDevices;
-(NSArray *)clockDevices;
-(char)isProtected;
-(void)setAcquired:(char)arg1 ;
-(char)isNameSettable;
-(void)setIdentify:(char)arg1 ;
-(char)identify;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(char)arg2 ;
-(id)coreAudioClassName;
-(NSArray *)audioDeviceObjectIDs;
-(NSArray *)clockDeviceObjectIDs;
-(NSArray *)deviceObjectIDs;
-(char)isAcquireSettable;
-(char)isIdentifySettable;
-(NSString *)boxUID;
-(int)acquisitionFailure;
@end

