/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRRecognizerFeatureProviding.h>

@protocol CRTextRecognizerModelInputProvider;
@class NSObject, CRRecognizerConfiguration, NSString;

@interface CRRecognizerAsyncFeatureBatchProviderV1 : NSObject <CRRecognizerFeatureProviding> {

	NSObject*<CRTextRecognizerModelInputProvider> _inputProvider;
	CRRecognizerConfiguration* _configuration;

}

@property (retain) NSObject*<CRTextRecognizerModelInputProvider> inputProvider;              //@synthesize inputProvider=_inputProvider - In the implementation block
@property (retain) CRRecognizerConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CRRecognizerConfiguration *)configuration;
-(void)setConfiguration:(CRRecognizerConfiguration *)arg1 ;
-(NSObject*<CRTextRecognizerModelInputProvider>)inputProvider;
-(void)setInputProvider:(NSObject*<CRTextRecognizerModelInputProvider>)arg1 ;
-(void)enumerateInputsForImage:(id)arg1 textFeatures:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)pruneAndSortRecognizedTextFeatures:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 inputProvider:(id)arg2 error:(id*)arg3 ;
-(long long)_indexOfBestModelForAspectRatio:(float)arg1 ;
-(id)combinedLineFeature:(id)arg1 lineFeature:(id)arg2 ;
@end

