/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface VCMediaNegotiatorAudioResults : NSObject {

	unsigned _remoteSSRC;
	unsigned _audioUnitModel;
	char _allowRecording;
	char _allowSwitching;
	int _primaryPayload;
	int _dtxPayload;
	int _redPayload;
	NSMutableArray* _secondaryPayloads;
	char _useSBR;

}

@property (assign,nonatomic) unsigned remoteSSRC;                        //@synthesize remoteSSRC=_remoteSSRC - In the implementation block
@property (assign,nonatomic) unsigned audioUnitModel;                    //@synthesize audioUnitModel=_audioUnitModel - In the implementation block
@property (assign,nonatomic) char allowRecording;                        //@synthesize allowRecording=_allowRecording - In the implementation block
@property (assign,nonatomic) char allowSwitching;                        //@synthesize allowSwitching=_allowSwitching - In the implementation block
@property (assign,nonatomic) int primaryPayload;                         //@synthesize primaryPayload=_primaryPayload - In the implementation block
@property (assign,nonatomic) int dtxPayload;                             //@synthesize dtxPayload=_dtxPayload - In the implementation block
@property (assign,nonatomic) int redPayload;                             //@synthesize redPayload=_redPayload - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryPayloads;              //@synthesize secondaryPayloads=_secondaryPayloads - In the implementation block
@property (assign,nonatomic) char useSBR;                                //@synthesize useSBR=_useSBR - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setAudioUnitModel:(unsigned)arg1 ;
-(unsigned)audioUnitModel;
-(char)useSBR;
-(void)setUseSBR:(char)arg1 ;
-(NSArray *)secondaryPayloads;
-(unsigned)remoteSSRC;
-(void)setRemoteSSRC:(unsigned)arg1 ;
-(char)allowSwitching;
-(char)allowRecording;
-(int)primaryPayload;
-(int)dtxPayload;
-(int)redPayload;
-(void)addSecondaryPayload:(int)arg1 ;
-(void)setPrimaryPayload:(int)arg1 ;
-(void)setDtxPayload:(int)arg1 ;
-(void)setRedPayload:(int)arg1 ;
-(void)setAllowRecording:(char)arg1 ;
-(void)setAllowSwitching:(char)arg1 ;
@end
