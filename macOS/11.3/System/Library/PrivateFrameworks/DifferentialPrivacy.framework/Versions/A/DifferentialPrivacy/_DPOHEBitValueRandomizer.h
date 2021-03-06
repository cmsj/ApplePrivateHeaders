/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStringRandomizer.h>

@interface _DPOHEBitValueRandomizer : NSObject <_DPStringRandomizer> {

	double _epsilon;
	unsigned long long _domainSize;
	double _flipProbability;
	mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> _rng;

}
+(id)oheBitValueRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)description;
-(id)init;
-(id)randomize:(id)arg1 ;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(unsigned long long)drawNumberOfFlippedBits;
-(id)randomizeWithMessageIndex:(unsigned long long)arg1 numberOfFlippedBits:(unsigned long long)arg2 ;
@end

