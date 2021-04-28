/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCMediaStreamConfig.h>

@interface VCTextStreamConfig : VCMediaStreamConfig {

	unsigned char _numRedundantPayloads;
	char _redEnabled;
	float _txIntervalMin;

}

@property (getter=isRedEnabled,nonatomic,readonly) char redEnabled;              //@synthesize redEnabled=_redEnabled - In the implementation block
@property (assign,nonatomic) unsigned char numRedundantPayloads;                 //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (assign,nonatomic) float txIntervalMin;                                //@synthesize txIntervalMin=_txIntervalMin - In the implementation block
-(void)setNumRedundantPayloads:(unsigned char)arg1 ;
-(id)initWithClientDictionary:(id)arg1 ;
-(char)isRedEnabled;
-(unsigned char)numRedundantPayloads;
-(float)txIntervalMin;
-(char)setupCodecWithClientDictionary:(id)arg1 ;
-(void)setTxIntervalMin:(float)arg1 ;
@end
