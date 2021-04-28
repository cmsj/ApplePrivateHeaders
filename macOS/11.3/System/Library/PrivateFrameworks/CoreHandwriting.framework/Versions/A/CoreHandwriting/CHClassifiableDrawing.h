/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHDrawing, NSCharacterSet;

@interface CHClassifiableDrawing : NSObject {

	char _expandCodePoints;
	char _firstPointIsSubstrokeCut;
	char _lastPointIsSubstrokeCut;
	CHDrawing* _drawing;
	NSCharacterSet* _characterSet;
	unsigned long long _maxCandidateCount;
	CGRect _normalizationContext;

}

@property (nonatomic,retain,readonly) CHDrawing * drawing;                        //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain,readonly) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
@property (nonatomic,readonly) char expandCodePoints;                             //@synthesize expandCodePoints=_expandCodePoints - In the implementation block
@property (nonatomic,readonly) CGRect normalizationContext;                       //@synthesize normalizationContext=_normalizationContext - In the implementation block
@property (nonatomic,readonly) char firstPointIsSubstrokeCut;                     //@synthesize firstPointIsSubstrokeCut=_firstPointIsSubstrokeCut - In the implementation block
@property (nonatomic,readonly) char lastPointIsSubstrokeCut;                      //@synthesize lastPointIsSubstrokeCut=_lastPointIsSubstrokeCut - In the implementation block
@property (nonatomic,readonly) unsigned long long maxCandidateCount;              //@synthesize maxCandidateCount=_maxCandidateCount - In the implementation block
-(void)dealloc;
-(NSCharacterSet *)characterSet;
-(id)initWithDrawing:(id)arg1 characterSet:(id)arg2 expandCodePoints:(char)arg3 normalizationContext:(CGRect)arg4 firstPointIsSubstrokeCut:(char)arg5 lastPointIsSubstrokeCut:(char)arg6 maxCandidateCount:(unsigned long long)arg7 ;
-(CHDrawing *)drawing;
-(char)expandCodePoints;
-(CGRect)normalizationContext;
-(char)firstPointIsSubstrokeCut;
-(char)lastPointIsSubstrokeCut;
-(unsigned long long)maxCandidateCount;
@end
