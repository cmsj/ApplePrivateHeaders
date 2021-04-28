/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/Versions/A/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PRErrorModeling.h>

@protocol PRErrorModeling;
@class NSString;

@interface PRErrorModel : NSObject <PRErrorModeling> {

	id<PRErrorModeling> _customErrorModel;

}

@property (readonly) char hasCustomReplacementErrorScores; 
@property (readonly) char hasCustomTranspositionErrorScores; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2 ;
-(double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2 ;
-(double)errorScoreForType:(unsigned long long)arg1 ;
-(char)hasCustomReplacementErrorScores;
-(char)hasCustomTranspositionErrorScores;
-(id)initWithCustomErrorModel:(id)arg1 ;
@end
