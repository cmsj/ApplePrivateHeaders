/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>
#import <libobjc.A.dylib/BWDataBufferBackedFormat.h>

@class NSDictionary, NSString;

@interface BWPointCloudFormat : BWFormat <BWDataBufferBackedFormat> {

	unsigned long long _maxPoints;
	unsigned long long _dataBufferSize;
	unsigned _dataFormat;
	NSDictionary* _dataBufferAttributes;

}

@property (nonatomic,readonly) unsigned long long maxPoints;                     //@synthesize maxPoints=_maxPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long dataBufferSize;                //@synthesize dataBufferSize=_dataBufferSize - In the implementation block
@property (nonatomic,readonly) unsigned dataFormat;                              //@synthesize dataFormat=_dataFormat - In the implementation block
@property (nonatomic,readonly) NSDictionary * dataBufferAttributes;              //@synthesize dataBufferAttributes=_dataBufferAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)formatByResolvingRequirements:(id)arg1 ;
+(id)formatByResolvingRequirements:(id)arg1 printErrors:(char)arg2 ;
+(id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned)mediaType;
-(unsigned)dataFormat;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(NSDictionary *)dataBufferAttributes;
-(unsigned long long)dataBufferSize;
-(unsigned long long)maxPoints;
-(id)_initWithResolvedFormatRequirements:(id)arg1 ;
@end

