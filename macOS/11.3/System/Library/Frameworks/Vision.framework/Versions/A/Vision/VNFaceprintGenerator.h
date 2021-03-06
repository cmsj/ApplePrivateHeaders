/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNFaceprintGenerator : VNDetector {

	shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>* m_FaceDescriptorImpl;
	shared_ptr<vision::mod::FaceFrontalizer>* m_FaceFrontalizerImpl;
	shared_ptr<vision::mod::ImageDescriptorAugmenterFlip>* m_DescriptorAugmenter;
	shared_ptr<unsigned char>* m_FaceFrontalizerWorkingBuffer;
	vImage_Buffer* m_FaceFrontalizerImageBuffer;
	char _useLowPriorityMode;
	unsigned long long _metalContextPriority;
	unsigned long long _length;

}

@property (nonatomic,readonly) unsigned long long length;                            //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) char useLowPriorityMode;                              //@synthesize useLowPriorityMode=_useLowPriorityMode - In the implementation block
@property (nonatomic,readonly) unsigned long long metalContextPriority; 
+(id)configurationOptionKeysForDetectorKey;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(/*function pointer*/void*)faceDescriptorCreator;
+(CGRect)faceBoundingBox:(id)arg1 ;
+(/*function pointer*/void*)getFaceJunkClassifier;
+(char)shouldDumpDebugIntermediates;
-(unsigned long long)length;
-(char)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)metalContextPriority;
-(void)printDebugInfoFor:(CVBufferRef)arg1 imageBuffer:(id)arg2 originalImageLumaCrop:(vImage_Buffer*)arg3 faceBBoxInLumaCropCoordinates:(CGRect)arg4 magnifiedBBoxInLumaCropCoordinates:(Geometry2D_rect2D_)arg5 ;
-(char)useLowPriorityMode;
@end

