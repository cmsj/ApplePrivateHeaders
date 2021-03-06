/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VNProcessingDevice;

@interface VNRequestConfiguration : NSObject <NSCopying> {

	char _preferBackgroundProcessing;
	Class _requestClass;
	unsigned long long _resolvedRevision;
	unsigned long long _detectionLevel;
	VNProcessingDevice* _processingDevice;
	unsigned long long _metalContextPriority;
	unsigned long long _modelFileBackingStore;

}

@property (nonatomic,readonly) Class requestClass;                                  //@synthesize requestClass=_requestClass - In the implementation block
@property (assign,nonatomic) unsigned long long resolvedRevision;                   //@synthesize resolvedRevision=_resolvedRevision - In the implementation block
@property (assign,nonatomic) unsigned long long detectionLevel;                     //@synthesize detectionLevel=_detectionLevel - In the implementation block
@property (nonatomic,retain) VNProcessingDevice * processingDevice;                 //@synthesize processingDevice=_processingDevice - In the implementation block
@property (assign,nonatomic) unsigned long long metalContextPriority;               //@synthesize metalContextPriority=_metalContextPriority - In the implementation block
@property (assign,nonatomic) char preferBackgroundProcessing;                       //@synthesize preferBackgroundProcessing=_preferBackgroundProcessing - In the implementation block
@property (assign,nonatomic) unsigned long long modelFileBackingStore;              //@synthesize modelFileBackingStore=_modelFileBackingStore - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setResolvedRevision:(unsigned long long)arg1 ;
-(unsigned long long)detectionLevel;
-(char)preferBackgroundProcessing;
-(void)setPreferBackgroundProcessing:(char)arg1 ;
-(unsigned long long)modelFileBackingStore;
-(void)setModelFileBackingStore:(unsigned long long)arg1 ;
-(unsigned long long)metalContextPriority;
-(void)setMetalContextPriority:(unsigned long long)arg1 ;
-(VNProcessingDevice *)processingDevice;
-(void)setProcessingDevice:(VNProcessingDevice *)arg1 ;
-(void)setDetectionLevel:(unsigned long long)arg1 ;
-(unsigned long long)resolvedRevision;
-(Class)requestClass;
-(id)_allPropertyNames;
@end

