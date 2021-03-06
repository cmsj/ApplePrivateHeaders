/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CRImageReaderOutput : NSObject <NSCopying, NSSecureCoding> {

	char _isTitle;
	int _confidence;
	float _baselineAngle;
	NSString* _type;
	NSString* _stringValue;
	NSArray* _candidates;
	NSArray* _components;
	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomRight;
	CGPoint _bottomLeft;
	CGSize _imageSize;
	CGRect _boundingBox;

}

@property (retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (assign) int confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (assign) float baselineAngle;                 //@synthesize baselineAngle=_baselineAngle - In the implementation block
@property (assign) CGSize imageSize;                    //@synthesize imageSize=_imageSize - In the implementation block
@property (assign) char isTitle;                        //@synthesize isTitle=_isTitle - In the implementation block
@property (readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (readonly) CGRect boundingBox;                //@synthesize boundingBox=_boundingBox - In the implementation block
@property (readonly) CGPoint topLeft;                   //@synthesize topLeft=_topLeft - In the implementation block
@property (readonly) CGPoint topRight;                  //@synthesize topRight=_topRight - In the implementation block
@property (readonly) CGPoint bottomRight;               //@synthesize bottomRight=_bottomRight - In the implementation block
@property (readonly) CGPoint bottomLeft;                //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (readonly) NSArray * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (readonly) NSArray * components;              //@synthesize components=_components - In the implementation block
+(char)supportsSecureCoding;
+(int)confidenceLevelForConfidenceScore:(double)arg1 confidenceThresholdProvider:(id)arg2 ;
+(id)outputWithType:(id)arg1 textFeature:(id)arg2 imageSize:(CGSize)arg3 isTitle:(char)arg4 confidenceThresholdProvider:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)type;
-(id)dataRepresentation;
-(NSArray *)components;
-(int)confidence;
-(void)setStringValue:(NSString *)arg1 ;
-(char)isTitle;
-(CGSize)imageSize;
-(CGRect)boundingBox;
-(NSArray *)candidates;
-(void)setConfidence:(int)arg1 ;
-(CGPoint)topLeft;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(CGPoint)topRight;
-(void)setIsTitle:(char)arg1 ;
-(id)cornersForCharacterRange:(NSRange)arg1 error:(id*)arg2 ;
-(float)baselineAngle;
-(void)setImageSize:(CGSize)arg1 ;
-(id)initWithType:(id)arg1 textFeature:(id)arg2 withCandidates:(char)arg3 imageSize:(CGSize)arg4 isTitle:(char)arg5 confidenceThresholdProvider:(id)arg6 ;
-(id)initWithType:(id)arg1 textFeature:(id)arg2 imageSize:(CGSize)arg3 isTitle:(char)arg4 confidenceThresholdProvider:(id)arg5 ;
-(CGPoint)_rotatePointIfNeccessary:(CGPoint)arg1 anchor:(CGPoint)arg2 angle:(double)arg3 ;
-(id)encodingDataForString:(id)arg1 ;
-(id)encodingDataForOutputsArray:(id)arg1 ;
-(id)initV2WithDataRepresentation:(id)arg1 ;
-(id)initV1WithCoder:(id)arg1 ;
-(id)decodeStringFromData:(id)arg1 offset:(unsigned long long*)arg2 ;
-(char)_checkValidRange:(NSRange)arg1 forDataLength:(unsigned long long)arg2 ;
-(id)decodeOutputsArrayFromData:(id)arg1 offset:(unsigned long long*)arg2 version:(long long)arg3 ;
-(char)isEqualToImageReaderOutput:(id)arg1 ;
-(void)setBaselineAngle:(float)arg1 ;
@end

