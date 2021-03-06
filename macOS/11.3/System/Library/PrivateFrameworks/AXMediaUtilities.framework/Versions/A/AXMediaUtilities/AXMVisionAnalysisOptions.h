/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMTextDetectionOptions, NSArray;

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding> {

	char _detectFaceRectangles;
	char _detectFaceNames;
	char _detectFaceAttributes;
	char _detectFaceExpressions;
	char _detectFaceLandmarks;
	char _detectFacePose;
	char _detectScenes;
	char _detectNSFW;
	char _detectSignificantEvents;
	char _detectModelClassifications;
	char _detectCaptions;
	char _detectTraits;
	char _detectRectangles;
	char _detectHorizon;
	char _detectProminentObjects;
	char _detectAesthetics;
	char _detectIconClass;
	char _detectText;
	char _includeImageInResult;
	char _preserveInputImageSize;
	long long _clientID;
	AXMTextDetectionOptions* _textDetectionOptions;
	NSArray* _ignoredLayerContextIDs;
	NSArray* _includedLayerContextIDs;

}

@property (assign,nonatomic) long long clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) char hasDetectionsEnabled; 
@property (nonatomic,readonly) char detectFaces; 
@property (assign,nonatomic) char detectFaceRectangles;                                   //@synthesize detectFaceRectangles=_detectFaceRectangles - In the implementation block
@property (assign,nonatomic) char detectFaceNames;                                        //@synthesize detectFaceNames=_detectFaceNames - In the implementation block
@property (assign,nonatomic) char detectFaceAttributes;                                   //@synthesize detectFaceAttributes=_detectFaceAttributes - In the implementation block
@property (assign,nonatomic) char detectFaceExpressions;                                  //@synthesize detectFaceExpressions=_detectFaceExpressions - In the implementation block
@property (assign,nonatomic) char detectFaceLandmarks;                                    //@synthesize detectFaceLandmarks=_detectFaceLandmarks - In the implementation block
@property (assign,nonatomic) char detectFacePose;                                         //@synthesize detectFacePose=_detectFacePose - In the implementation block
@property (assign,nonatomic) char detectScenes;                                           //@synthesize detectScenes=_detectScenes - In the implementation block
@property (assign,nonatomic) char detectNSFW;                                             //@synthesize detectNSFW=_detectNSFW - In the implementation block
@property (assign,nonatomic) char detectSignificantEvents;                                //@synthesize detectSignificantEvents=_detectSignificantEvents - In the implementation block
@property (assign,nonatomic) char detectModelClassifications;                             //@synthesize detectModelClassifications=_detectModelClassifications - In the implementation block
@property (assign,nonatomic) char detectCaptions;                                         //@synthesize detectCaptions=_detectCaptions - In the implementation block
@property (assign,nonatomic) char detectTraits;                                           //@synthesize detectTraits=_detectTraits - In the implementation block
@property (assign,nonatomic) char detectRectangles;                                       //@synthesize detectRectangles=_detectRectangles - In the implementation block
@property (assign,nonatomic) char detectHorizon;                                          //@synthesize detectHorizon=_detectHorizon - In the implementation block
@property (assign,nonatomic) char detectProminentObjects;                                 //@synthesize detectProminentObjects=_detectProminentObjects - In the implementation block
@property (assign,nonatomic) char detectAesthetics;                                       //@synthesize detectAesthetics=_detectAesthetics - In the implementation block
@property (assign,nonatomic) char detectIconClass;                                        //@synthesize detectIconClass=_detectIconClass - In the implementation block
@property (assign,nonatomic) char detectText;                                             //@synthesize detectText=_detectText - In the implementation block
@property (nonatomic,retain) AXMTextDetectionOptions * textDetectionOptions;              //@synthesize textDetectionOptions=_textDetectionOptions - In the implementation block
@property (assign,nonatomic) char includeImageInResult;                                   //@synthesize includeImageInResult=_includeImageInResult - In the implementation block
@property (nonatomic,retain) NSArray * ignoredLayerContextIDs;                            //@synthesize ignoredLayerContextIDs=_ignoredLayerContextIDs - In the implementation block
@property (nonatomic,retain) NSArray * includedLayerContextIDs;                           //@synthesize includedLayerContextIDs=_includedLayerContextIDs - In the implementation block
@property (assign,nonatomic) char preserveInputImageSize;                                 //@synthesize preserveInputImageSize=_preserveInputImageSize - In the implementation block
+(char)supportsSecureCoding;
+(id)defaultOptions;
+(id)voiceOverOptions;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)clientID;
-(void)setClientID:(long long)arg1 ;
-(char)detectFaceAttributes;
-(char)detectFaceExpressions;
-(char)detectFaceLandmarks;
-(char)detectFacePose;
-(char)detectFaceRectangles;
-(NSArray *)ignoredLayerContextIDs;
-(NSArray *)includedLayerContextIDs;
-(char)preserveInputImageSize;
-(char)detectText;
-(char)detectScenes;
-(char)detectNSFW;
-(char)detectSignificantEvents;
-(char)detectModelClassifications;
-(char)detectCaptions;
-(char)detectFaces;
-(char)detectTraits;
-(char)detectHorizon;
-(char)detectRectangles;
-(char)detectProminentObjects;
-(char)detectIconClass;
-(char)detectAesthetics;
-(char)includeImageInResult;
-(AXMTextDetectionOptions *)textDetectionOptions;
-(void)setDetectIconClass:(char)arg1 ;
-(void)setIncludeImageInResult:(char)arg1 ;
-(void)setDetectText:(char)arg1 ;
-(void)setTextDetectionOptions:(AXMTextDetectionOptions *)arg1 ;
-(void)setDetectScenes:(char)arg1 ;
-(void)setDetectNSFW:(char)arg1 ;
-(void)setDetectSignificantEvents:(char)arg1 ;
-(void)setDetectModelClassifications:(char)arg1 ;
-(void)setDetectCaptions:(char)arg1 ;
-(void)setDetectTraits:(char)arg1 ;
-(void)setDetectFaceRectangles:(char)arg1 ;
-(void)setDetectFaceNames:(char)arg1 ;
-(void)setDetectFaceAttributes:(char)arg1 ;
-(void)setDetectFaceExpressions:(char)arg1 ;
-(void)setDetectFaceLandmarks:(char)arg1 ;
-(void)setDetectFacePose:(char)arg1 ;
-(void)setDetectProminentObjects:(char)arg1 ;
-(void)setDetectHorizon:(char)arg1 ;
-(void)setDetectRectangles:(char)arg1 ;
-(char)detectFaceNames;
-(void)setDetectAesthetics:(char)arg1 ;
-(void)setPreserveInputImageSize:(char)arg1 ;
-(void)setIgnoredLayerContextIDs:(NSArray *)arg1 ;
-(void)setIncludedLayerContextIDs:(NSArray *)arg1 ;
-(char)hasDetectionsEnabled;
-(void)disableAllDetectors;
@end

