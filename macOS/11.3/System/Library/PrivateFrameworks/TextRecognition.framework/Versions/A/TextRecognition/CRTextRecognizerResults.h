/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSArray, CRLatticeResults;

@interface CRTextRecognizerResults : NSObject {

	NSDictionary* _inputOptions;
	NSDate* _startTime;
	NSDate* _endTime;
	NSArray* _textFeatures;
	NSArray* _codeMaps;
	CRLatticeResults* _latticeResults;

}

@property (nonatomic,retain) NSDictionary * inputOptions;                    //@synthesize inputOptions=_inputOptions - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSArray * textFeatures;                         //@synthesize textFeatures=_textFeatures - In the implementation block
@property (nonatomic,retain) NSArray * codeMaps;                             //@synthesize codeMaps=_codeMaps - In the implementation block
@property (nonatomic,retain) CRLatticeResults * latticeResults;              //@synthesize latticeResults=_latticeResults - In the implementation block
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(void)setTextFeatures:(NSArray *)arg1 ;
-(void)setInputOptions:(NSDictionary *)arg1 ;
-(void)setCodeMaps:(NSArray *)arg1 ;
-(NSArray *)textFeatures;
-(void)setLatticeResults:(CRLatticeResults *)arg1 ;
-(NSDictionary *)inputOptions;
-(NSArray *)codeMaps;
-(CRLatticeResults *)latticeResults;
@end
