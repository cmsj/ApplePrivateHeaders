/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSDictionary, NSMutableArray, NSString;

@interface VNFaceAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {

	NSDictionary* _detectorConfigurationOptions;
	NSMutableArray* _originalRequests;
	NSString* _detectorType;

}

@property (nonatomic,copy) NSDictionary * detectorConfigurationOptions;              //@synthesize detectorConfigurationOptions=_detectorConfigurationOptions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * originalRequests;                    //@synthesize originalRequests=_originalRequests - In the implementation block
@property (nonatomic,copy) NSString * detectorType;                                  //@synthesize detectorType=_detectorType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(void)setResolvedRevision:(unsigned long long)arg1 ;
-(void)setDetectorConfigurationOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)detectorConfigurationOptions;
-(NSMutableArray *)originalRequests;
-(NSString *)detectorType;
-(void)setDetectorType:(NSString *)arg1 ;
@end
