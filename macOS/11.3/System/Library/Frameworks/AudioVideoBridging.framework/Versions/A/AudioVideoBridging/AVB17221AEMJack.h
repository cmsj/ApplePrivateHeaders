/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMNamedModelObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface AVB17221AEMJack : AVB17221AEMNamedModelObject <NSCopying> {

	unsigned short jackFlags;
	unsigned short jackType;
	unsigned short numberOfControls;
	unsigned short baseControl;
	NSArray* controls;

}

@property (assign) unsigned short numberOfControls; 
@property (assign) unsigned short baseControl; 
@property (assign) unsigned short jackFlags; 
@property (assign) unsigned short jackType; 
@property (copy) NSArray * controls; 
@property (getter=isClockSyncSource) char clockSyncSource; 
@property (getter=isCaptive) char captive; 
+(id)keyPathsForValuesAffectingClockSyncSource;
+(id)keyPathsForValuesAffectingCaptive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)setDescriptor:(/*function pointer*/void**)arg1 ;
-(NSArray *)controls;
-(void)setControls:(NSArray *)arg1 ;
-(id)plistRepresentation;
-(char)isCaptive;
-(void)setCaptive:(char)arg1 ;
-(char)updateWithDescriptor:(/*function pointer*/void**)arg1 descriptorLength:(unsigned short)arg2 ;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2 ;
-(id)xmlKey;
-(char)isExpectedDescriptorType:(unsigned short)arg1 ;
-(id)objectLogName;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(id)validChildrenDescriptorTypes;
-(void)updateDependentContent;
-(void)renumberDescriptorWithNextIndexes:(id)arg1 ;
-(void)setClockSyncSource:(char)arg1 ;
-(char)isClockSyncSource;
-(void)setJackFlags:(unsigned short)arg1 ;
-(void)setJackType:(unsigned short)arg1 ;
-(void)setNumberOfControls:(unsigned short)arg1 ;
-(void)setBaseControl:(unsigned short)arg1 ;
-(unsigned short)jackFlags;
-(unsigned short)jackType;
-(unsigned short)numberOfControls;
-(unsigned short)baseControl;
@end

