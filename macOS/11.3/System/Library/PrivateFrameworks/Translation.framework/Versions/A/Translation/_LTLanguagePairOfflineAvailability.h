/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _LTLocalePair, NSString;

@interface _LTLanguagePairOfflineAvailability : NSObject <NSSecureCoding> {

	char _needsUpdate;
	unsigned long long _pairState;
	_LTLocalePair* _pair;
	NSString* _sourceASRState;
	NSString* _targetASRState;
	NSString* _mtState;
	NSString* _sourceTTSState;
	NSString* _targetTTSState;

}

@property (assign,nonatomic) unsigned long long pairState;              //@synthesize pairState=_pairState - In the implementation block
@property (nonatomic,retain) _LTLocalePair * pair;                      //@synthesize pair=_pair - In the implementation block
@property (nonatomic,retain) NSString * sourceASRState;                 //@synthesize sourceASRState=_sourceASRState - In the implementation block
@property (nonatomic,retain) NSString * targetASRState;                 //@synthesize targetASRState=_targetASRState - In the implementation block
@property (nonatomic,retain) NSString * mtState;                        //@synthesize mtState=_mtState - In the implementation block
@property (nonatomic,retain) NSString * sourceTTSState;                 //@synthesize sourceTTSState=_sourceTTSState - In the implementation block
@property (nonatomic,retain) NSString * targetTTSState;                 //@synthesize targetTTSState=_targetTTSState - In the implementation block
@property (assign,nonatomic) char needsUpdate;                          //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)needsUpdate;
-(_LTLocalePair *)pair;
-(void)setNeedsUpdate:(char)arg1 ;
-(void)setPair:(_LTLocalePair *)arg1 ;
-(id)initWithLocales:(id)arg1 ;
-(void)setMtState:(NSString *)arg1 ;
-(void)setSourceASRState:(NSString *)arg1 ;
-(void)setTargetASRState:(NSString *)arg1 ;
-(void)setPairState:(unsigned long long)arg1 ;
-(unsigned long long)pairState;
-(NSString *)sourceASRState;
-(NSString *)targetASRState;
-(NSString *)mtState;
-(NSString *)sourceTTSState;
-(void)setSourceTTSState:(NSString *)arg1 ;
-(NSString *)targetTTSState;
-(void)setTargetTTSState:(NSString *)arg1 ;
@end

