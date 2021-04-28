/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNModelFile.h>

@class NSString;

@interface VNModelFileImpl : NSObject <VNModelFile> {

	const mapped_model_file* m_impl;

}

@property (readonly) const void* baseAddress; 
@property (readonly) unsigned long long length; 
@property (nonatomic,retain) NSString * resourcePath; 
@property (readonly) _sFILE* ptrFile; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)length;
-(const void*)baseAddress;
-(_sFILE*)ptrFile;
-(void)advise:(long long)arg1 ;
-(id)initWithMappedModel:(const mapped_model_file*)arg1 ;
@end
