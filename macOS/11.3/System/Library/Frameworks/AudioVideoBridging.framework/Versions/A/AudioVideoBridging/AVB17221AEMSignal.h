/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVB17221AEMSignal : AVB17221AEMObject <NSCopying> {

	unsigned short signalType;
	unsigned short signalIndex;
	unsigned short signalOutput;

}

@property (assign) unsigned short signalType; 
@property (assign) unsigned short signalIndex; 
@property (assign) unsigned short signalOutput; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)plistRepresentation;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(void)setSignalType:(unsigned short)arg1 ;
-(void)setSignalIndex:(unsigned short)arg1 ;
-(void)setSignalOutput:(unsigned short)arg1 ;
-(unsigned short)signalType;
-(unsigned short)signalIndex;
-(unsigned short)signalOutput;
@end
