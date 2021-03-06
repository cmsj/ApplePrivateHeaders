/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class NSSet;

@interface VNEspressoModelClassifier : VNDetector {

	shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>* mDescriptorProcessor;
	shared_ptr<vision::mod::ImageClassifierAbstract>* mClassifier;
	NSSet* _blacklistedIdentifiers;

}
+(shared_ptr<vision::mod::ImageClassifierAbstract>*)createClassifierWithDescriptor:(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)arg1 classifierAbsolutePath:(const char*)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char*)arg5 options:(Options)arg6 ;
+(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)createDescriprorProcessorWithModelPath:(const char*)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(Options)arg5 ;
+(id)classifierResourceTypesToNamesForRevision:(unsigned long long)arg1 ;
+(id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2 ;
+(void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2 ;
+(shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>*)createHierarchicalModelForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(void)convertRelationships:(id)arg1 toStdRelationships:(vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>>*)arg2 ;
-(char)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(id)calculateImageDescriptors:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 canceller:(id)arg4 error:(id*)arg5 ;
-(char)_calculateImageDescriptors:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 canceller:(id)arg4 descriptorBuffer:(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg5 debugIntermediatesDumpPath:(id)arg6 outputDebugDictionary:(id)arg7 error:(id*)arg8 ;
-(id)getLabels;
-(id)blacklistedIdentifiers;
@end

