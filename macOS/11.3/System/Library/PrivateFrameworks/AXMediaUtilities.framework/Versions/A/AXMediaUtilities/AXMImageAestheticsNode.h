/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNClassifyImageAestheticsRequest;

@interface AXMImageAestheticsNode : AXMEvaluationNode {

	VNClassifyImageAestheticsRequest* __imageAestheticsRequest;

}

@property (nonatomic,retain) VNClassifyImageAestheticsRequest * _imageAestheticsRequest;              //@synthesize _imageAestheticsRequest=__imageAestheticsRequest - In the implementation block
+(char)supportsSecureCoding;
+(id)title;
+(char)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(VNClassifyImageAestheticsRequest *)_imageAestheticsRequest;
-(void)set_imageAestheticsRequest:(VNClassifyImageAestheticsRequest *)arg1 ;
@end

