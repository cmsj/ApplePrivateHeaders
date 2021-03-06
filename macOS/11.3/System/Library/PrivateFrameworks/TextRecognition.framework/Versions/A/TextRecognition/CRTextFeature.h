/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, CRImage, NSNumber;

@interface CRTextFeature : NSObject <NSCoding, NSCopying> {

	char _shouldExpandToFullWidth;
	unsigned char _sizeHint;
	char _contextSet;
	float _baselineAngle;
	float _textlineHeight;
	int _featureMapID;
	int _punctuationGuess;
	NSArray* _subFeatures;
	NSArray* _stringValueCandidates;
	NSArray* _candidateProbs;
	NSArray* _candidateActivationProbs;
	NSArray* _subFeatureCandidates;
	long long _bestCandidateIndex;
	NSArray* _segmentationBreakPoints;
	NSString* _stringValue;
	NSString* _gtStringValue;
	CRImage* _imageCut;
	NSNumber* _confidence;
	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomLeft;
	CGPoint _bottomRight;
	CGPoint _toplineOrigin;
	CGPoint _baselineOrigin;
	CGRect _bounds;

}

@property (assign) char contextSet;                                 //@synthesize contextSet=_contextSet - In the implementation block
@property (assign) CGRect bounds;                                   //@synthesize bounds=_bounds - In the implementation block
@property (assign) CGPoint topLeft;                                 //@synthesize topLeft=_topLeft - In the implementation block
@property (assign) CGPoint topRight;                                //@synthesize topRight=_topRight - In the implementation block
@property (assign) CGPoint bottomLeft;                              //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (assign) CGPoint bottomRight;                             //@synthesize bottomRight=_bottomRight - In the implementation block
@property (retain) NSArray * subFeatures;                           //@synthesize subFeatures=_subFeatures - In the implementation block
@property (retain) NSArray * stringValueCandidates;                 //@synthesize stringValueCandidates=_stringValueCandidates - In the implementation block
@property (retain) NSArray * candidateProbs;                        //@synthesize candidateProbs=_candidateProbs - In the implementation block
@property (retain) NSArray * candidateActivationProbs;              //@synthesize candidateActivationProbs=_candidateActivationProbs - In the implementation block
@property (retain) NSArray * subFeatureCandidates;                  //@synthesize subFeatureCandidates=_subFeatureCandidates - In the implementation block
@property (assign) long long bestCandidateIndex;                    //@synthesize bestCandidateIndex=_bestCandidateIndex - In the implementation block
@property (retain) NSArray * segmentationBreakPoints;               //@synthesize segmentationBreakPoints=_segmentationBreakPoints - In the implementation block
@property (assign) char shouldExpandToFullWidth;                    //@synthesize shouldExpandToFullWidth=_shouldExpandToFullWidth - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSString * gtStringValue;              //@synthesize gtStringValue=_gtStringValue - In the implementation block
@property (retain) CRImage * imageCut;                              //@synthesize imageCut=_imageCut - In the implementation block
@property (retain) NSNumber * confidence;                           //@synthesize confidence=_confidence - In the implementation block
@property (readonly) CGPoint toplineOrigin;                         //@synthesize toplineOrigin=_toplineOrigin - In the implementation block
@property (readonly) CGPoint baselineOrigin;                        //@synthesize baselineOrigin=_baselineOrigin - In the implementation block
@property (assign) float baselineAngle;                             //@synthesize baselineAngle=_baselineAngle - In the implementation block
@property (assign) unsigned char sizeHint;                          //@synthesize sizeHint=_sizeHint - In the implementation block
@property (assign) float textlineHeight;                            //@synthesize textlineHeight=_textlineHeight - In the implementation block
@property (assign) int featureMapID;                                //@synthesize featureMapID=_featureMapID - In the implementation block
@property (assign) int punctuationGuess;                            //@synthesize punctuationGuess=_punctuationGuess - In the implementation block
+(id)sortedRotateTextFeatures:(id)arg1 center:(CGPoint)arg2 radians:(float)arg3 sortingWithinLine:(char)arg4 ;
+(id)sortedTextFeatures:(id)arg1 ;
+(id)lineFeatures:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 ;
+(id)overlayFeatures:(id)arg1 onImage:(id)arg2 showSubFeatures:(char)arg3 ;
+(id)overlayFeaturesVertices:(id)arg1 onImage:(id)arg2 showSubFeatures:(char)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSNumber *)confidence;
-(void)setStringValue:(NSString *)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setConfidence:(NSNumber *)arg1 ;
-(CGPoint)topLeft;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(CGPoint)topRight;
-(NSArray *)subFeatures;
-(char)isDown;
-(id)initWithVNTextObsevation:(id)arg1 ;
-(void)setShouldExpandToFullWidth:(char)arg1 ;
-(float)baselineAngle;
-(char)shouldExpandToFullWidth;
-(void)setImageCut:(CRImage *)arg1 ;
-(void)addKohlsDigitProjection;
-(void)setBottomLeft:(CGPoint)arg1 ;
-(void)setBottomRight:(CGPoint)arg1 ;
-(void)setTopLeft:(CGPoint)arg1 ;
-(void)setTopRight:(CGPoint)arg1 ;
-(void)setSizeHint:(unsigned char)arg1 ;
-(unsigned char)sizeHint;
-(id)textFeatureScaledToImageWidth:(float)arg1 height:(float)arg2 ;
-(NSArray *)stringValueCandidates;
-(NSArray *)candidateProbs;
-(void)setBaselineAngle:(float)arg1 ;
-(void)updateSizeHints;
-(id)wordFeatures;
-(id)initWithFeatureRect:(id)arg1 subFeatureRects:(id)arg2 ;
-(CGPoint)baselineOrigin;
-(CGPoint)toplineOrigin;
-(void)setBaselineOrigin:(CGPoint)arg1 toplineOrigin:(CGPoint)arg2 slope:(float)arg3 ;
-(void)setStringValueCandidates:(NSArray *)arg1 ;
-(void)setCandidateProbs:(NSArray *)arg1 ;
-(id)initWithSubfeatures:(id)arg1 ;
-(void)setSubFeatures:(NSArray *)arg1 ;
-(int)featureMapID;
-(void)setFeatureMapID:(int)arg1 ;
-(char)isUp;
-(id)initWithSubfeatures:(id)arg1 stringValue:(id)arg2 ;
-(void)setSubFeatureCandidates:(NSArray *)arg1 ;
-(float)calculateTextBoxHeightForImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 ;
-(NSArray *)subFeatureCandidates;
-(NSArray *)candidateActivationProbs;
-(void)setBestCandidateIndex:(long long)arg1 ;
-(id)initWithTopLeft:(CGPoint)arg1 TopRight:(CGPoint)arg2 BottomLeft:(CGPoint)arg3 BottomRight:(CGPoint)arg4 ;
-(id)createWordSubFeaturesForCandidateAtIndex:(long long)arg1 topWhiteSpacePoints:(id)arg2 bottomWhiteSpacePoints:(id)arg3 ;
-(id)createCharacterSubFeaturesForCandidateAtIndex:(long long)arg1 ;
-(void)setTextlineHeight:(float)arg1 ;
-(id)initWithCITextFeature:(id)arg1 inImage:(id)arg2 ;
-(CRImage *)imageCut;
-(NSString *)gtStringValue;
-(void)setGtStringValue:(NSString *)arg1 ;
-(long long)bestCandidateIndex;
-(NSArray *)segmentationBreakPoints;
-(void)setSegmentationBreakPoints:(NSArray *)arg1 ;
-(float)textlineHeight;
-(int)punctuationGuess;
-(void)setPunctuationGuess:(int)arg1 ;
-(id)initWithFeatureRect:(CGRect)arg1 inImage:(id)arg2 ;
-(id)initWithFeatureRect:(id)arg1 subFeatureRects:(id)arg2 inImage:(id)arg3 ;
-(id)initWithCCFeatureRect:(id)arg1 subFeatureRects:(id)arg2 rotatePortrait:(char)arg3 ;
-(id)textFeaturebyPaddingToWidth:(float)arg1 height:(float)arg2 ;
-(float)slopeOfSubFeatures;
-(id)textFeatureScaledToImage:(id)arg1 ;
-(void)scale:(CGPoint)arg1 offset:(CGPoint)arg2 ;
-(char)contextSet;
-(void)setContextSet:(char)arg1 ;
-(void)estimateTopAndBaseline;
-(CGPoint)getBaselineVector;
-(id)initWithSubfeatureRects:(id)arg1 inImage:(id)arg2 ;
-(id)textFeatureSplitForStringValue:(id)arg1 ;
-(float)caseInsensitiveProbabilityCandidateIndex:(int)arg1 ;
-(void)adjustProbabilitiesWithPunctuationGuess;
-(float)aspectRatioWithImageSize:(CGSize)arg1 ;
-(void)setCandidateActivationProbs:(NSArray *)arg1 ;
@end

