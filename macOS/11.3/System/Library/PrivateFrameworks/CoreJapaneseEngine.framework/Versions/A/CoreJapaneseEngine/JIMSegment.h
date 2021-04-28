/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreJapaneseEngine.framework/Versions/A/CoreJapaneseEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreJapaneseEngine/CoreJapaneseEngine-Structs.h>
@class NSString, JIMTextTree;

@interface JIMSegment : NSObject {

	NSString* _reading;
	NSString* _surface;
	JIMTextTree* _textTree;
	long long _candidateIndex;
	unsigned long long _flags;

}

@property (nonatomic,retain) NSString * reading;                  //@synthesize reading=_reading - In the implementation block
@property (nonatomic,retain) NSString * surface;                  //@synthesize surface=_surface - In the implementation block
@property (nonatomic,retain) JIMTextTree * textTree;              //@synthesize textTree=_textTree - In the implementation block
@property (assign) long long candidateIndex;                      //@synthesize candidateIndex=_candidateIndex - In the implementation block
@property (assign) unsigned long long flags;                      //@synthesize flags=_flags - In the implementation block
@property (readonly) NSString * preferredReading; 
@property (readonly) NSString * preferredSurface; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(id)description;
-(id)debugDescription;
-(id)initWithCandidate:(id)arg1 ;
-(NSString *)surface;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setReading:(NSString *)arg1 ;
-(NSString *)reading;
-(long long)candidateIndex;
-(void)setCandidateIndex:(long long)arg1 ;
-(void)setSurface:(NSString *)arg1 ;
-(JIMTextTree *)textTree;
-(id)initWithReading:(id)arg1 surface:(id)arg2 ;
-(void)setTextTree:(JIMTextTree *)arg1 ;
-(NSString *)preferredReading;
-(NSString *)preferredSurface;
@end
