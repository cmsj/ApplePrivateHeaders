/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode {

	VNGenerateAttentionBasedSaliencyImageRequest* __imageSaliencyRequest;

}

@property (nonatomic,retain) VNGenerateAttentionBasedSaliencyImageRequest * _imageSaliencyRequest;              //@synthesize _imageSaliencyRequest=__imageSaliencyRequest - In the implementation block
+(char)supportsSecureCoding;
+(id)title;
+(char)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(char)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(char)requiresVisionFramework;
-(VNGenerateAttentionBasedSaliencyImageRequest *)_imageSaliencyRequest;
-(void)set_imageSaliencyRequest:(VNGenerateAttentionBasedSaliencyImageRequest *)arg1 ;
@end
